# ALSA Plugin

The SOF ALSA plugin allows SOF topologies to be run on the host. The plugin
is still WIP with many rough edges that need refined before production
deployment, however the plugin is usable today as a rapid development
framework for SOF infrastructure and processing.

### Features
 * aplay & arecord usage working today
 * alsamixer & amixer usage not working today
 * modules are loaded as SO shared libraries.
 * topology is parsed by the plugin and pipelines associated with the requested PCM ID are loaded
 * pipelines run as individual userspace threads
 * pipelines can be pinned to efficency cores
 * pipelines can use realtime priority.
 * alsa sink and alsa source modules available.
 * pipelines can block (non blocking and mmap todo)

### License
Code is a mixture of LGPL and BSD 3c.

### Usage
Please build as cmake project, for IPC4 (functional)
IPC3 is not functional and not supported

```
cd sof
cmake -GNinja -B build-plugin/ -S tools/plugin/
# Build external projects first to avoid build race condition
# Dropping -GNinja is another (very slow) option.
cmake --build    build-plugin/ -- sof_ep parser_ep
cmake --build    build-plugin/
```
then (use default ALSA prefix atm)

```
sudo cmake --install build-plugin/

Make sure to set the LD_LIBRARY_PATH to include directory where the SOF modules are installed
Ex: "~/work/sof/sof/build-plugin/sof_ep/install/lib:~/work/sof/sof/build-plugin/modules/"
And set the environment variable SOF_PLUGIN_TOPOLOGY_PATH to point to the directory containing the topology binary
```

Code can then be run by starting sof-pipe with your desired topology (Ex: sof-plugin.tplg)

```
 ./sof-pipe -T sof-plugin.tplg
```

At this point the sof-pipe daemon is waiting for IPC. Audio applications can now invoke sof-pipe processing via

```
aplay -Dsof:plugin:1:default:default:48k2c16b -f dat some48kHz.wav
```
The command line is parsed as follows:
- "sof" is the plugin name
- "sof-plugin" is the topology name. The "sof-" prefix and ".tplg" suffix will be appended by the plugin
- "1" is the PCM ID for render/capture
- "default": The first default is the card name
- "default": The second default is the device name
- "48k2c16b" is the config name for 48K, stereo, 16bit

Config name is optional in the command line. When it is not provided, hw_params will be used to
configure the endpoint. In this case, the command line can be simplified to:

```
aplay -Dsof:plugin:1:default:default
```

When using the default device, the command line can be further simplified to:

```
aplay -Dsof:plugin:1
```

This renders audio to the sof-pipe daemon using the sof-plugin topology playback PCM ID 1.
The above example needs to be 48k as example pipe has no SRC/ASRC.

Likewise

```
arecord -Dsof:plugin:1:default:default:48k2c16b -f dat file.wav
```
Will record audio using the plugin topology and PCM ID 1.

Mixer settings can be adjusted for sof-plugin by

```
alsamixer -Dsof:plugin
```
or
```
amixer -Dsof:plugin cset numid=1 20
```
Bytes control data can be set using sof-ctl as follows:

```
./sof-ctl -Dsof:plugin -n 4 -r -i 4 -p 2 -s ~/data.txt
```
where -n is the numid of the kcontrol, -i is the IPC version, -p is the param ID and -s specifies
the data in csv format.

Bytes control data can be read using sof-ctl as follows:
```
./sof-ctl -Dsof:plugin -n 4 -i 4 -p 2
```
where -n is the numid of the kcontrol, -i is the IPC version and -p is the param ID.

Note: Bytes controls must have tlv_read/tlv_write and tlv_callback access.

## Instructions for testing OpenVino noise suppression model with the SOF plugin:
1. Prepare Open Model Zoo repository:

   - Clone repo:
     ```
     git clone --recurse-submodules https://github.com/openvinotoolkit/open_model_zoo.git
     ```

   - Build demo applications:
     https://docs.openvino.ai/2023.3/omz_demos.html#a-name-build-demos-linux-a-build-the-demo-applications-on-linux

2. Source OpenVino environment and get OpenCV
https://www.intel.com/content/www/us/en/developer/tools/openvino-toolkit-download.html

3. Worth building and running the demo noise suppression application in the open model zoo
repository to make sure OpenVino and OpenCV are configured properly.
Fetch the model, e.g., `noise-suppression-poconetlike-0001.xml`, by running this demo:

   https://docs.openvino.ai/2023.3/omz_demos_noise_suppression_demo_cpp.html

4. Set environment variable NOISE_SUPPRESSION_MODEL_NAME to point to the model file
```
export NOISE_SUPPRESSION_MODEL_NAME=~/open_model_zoo/demos/noise_suppression_demo/cpp/intel/noise-suppression-poconetlike-0001/FP16/noise-suppression-poconetlike-0001.xml

```
5. Set environment variable OpenVINO_DIR to include CMake files (e.g., OpenVINOConfig.cmake) for building the plugin:
```
export OpenVINO_DIR=~/openvino_env/lib/python3.10/site-packages/openvino/cmake

```
6. Update environment variable LD_LIBRARY_PATH to include necessary directories for the plugin:

```
export LD_LIBRARY_PATH=~/work/sof/sof/build-plugin/sof_ep/install/lib:~/work/sof/sof/build-plugin/modules/:~/work/sof/sof/build-plugin/modules/ov_noise_suppression/
```

7. Enable noise suppression by setting NOISE_SUPPRESSION=true in the tplg-targets for the sof-plugin topology

8. Rebuild the plugin: Remove the previous build-build directory and rebuild it by following the usage steps above.

9. Start capture using the following command. This uses the 16K capture from the DMIC from
PCM hw device 0,7. Currently, only 16K capture is supported but in the future this will be expanded
to work with 48K capture.
```
arecord -Dsof:plugin:1:0:7:16k2c16b -f dat -r 16000 --period-size=2048 file_ns_16k.wav
```

### TODO Items for single pipeline E2E audio
Use hw_params instead of hardcoded config
Add support for 24-bit and 16-bit audio
Remove duplication of kcontrols when alsamixer is opened/closed repeatedly