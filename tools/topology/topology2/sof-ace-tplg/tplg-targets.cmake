# SPDX-License-Identifier: BSD-3-Clause

# Array of "input-file-name;output-file-name;comma separated pre-processor variables"
set(TPLGS
# HDMI only topology with passthrough pipelines
"sof-hda-generic\;sof-hda-generic-idisp\;USE_CHAIN_DMA=true,DEEPBUFFER_FW_DMA_MS=100,\
DEEPBUFFER_D0I3_COMPATIBLE=true"
# HDA topology with mixer-based pipelines for HDA and passthrough pipelines for HDMI
"sof-hda-generic\;sof-hda-generic\;HDA_CONFIG=mix,USE_CHAIN_DMA=true,DEEPBUFFER_FW_DMA_MS=100,\
DEEPBUFFER_D0I3_COMPATIBLE=true"
# If the alsatplg plugins for NHLT are not available, the NHLT blobs will not be added to the
# topologies below.
"sof-hda-generic\;sof-hda-generic-4ch\;PLATFORM=mtl,\
HDA_CONFIG=mix,NUM_DMICS=4,PDM1_MIC_A_ENABLE=1,PDM1_MIC_B_ENABLE=1,PREPROCESS_PLUGINS=nhlt,\
NHLT_BIN=nhlt-sof-hda-generic-4ch.bin,USE_CHAIN_DMA=true,DEEPBUFFER_FW_DMA_MS=100,\
DEEPBUFFER_D0I3_COMPATIBLE=true"
"sof-hda-generic\;sof-hda-generic-2ch\;PLATFORM=mtl,\
HDA_CONFIG=mix,NUM_DMICS=2,PREPROCESS_PLUGINS=nhlt,NHLT_BIN=nhlt-sof-hda-generic-2ch.bin,\
USE_CHAIN_DMA=true,DEEPBUFFER_FW_DMA_MS=100,DEEPBUFFER_D0I3_COMPATIBLE=true"

# SDW + DMIC topology with passthrough pipelines
# We will change NUM_HDMIS to 3 once HDMI is enabled on MTL RVP
"cavs-sdw\;sof-mtl-rt711-4ch\;PLATFORM=mtl,NUM_DMICS=4,PDM1_MIC_A_ENABLE=1,PDM1_MIC_B_ENABLE=1,\
DMIC0_ID=2,DMIC1_ID=3,NUM_HDMIS=0,PREPROCESS_PLUGINS=nhlt,NHLT_BIN=nhlt-sof-mtl-rt711-4ch.bin,\
DEEPBUFFER_FW_DMA_MS=100,DEEPBUFFER_D0I3_COMPATIBLE=true"

"cavs-sdw\;sof-mtl-rt711-l0-rt1316-l23-rt714-l1\;PLATFORM=mtl,NUM_SDW_AMP_LINKS=2,SDW_DMIC=1,\
NUM_HDMIS=0,SDW_SPK_STREAM=SDW2-Playback,SDW_SPK_IN_STREAM=SDW2-Capture,SDW_DMIC_STREAM=SDW1-Capture"

"cavs-sdw\;sof-mtl-rt712-l0-rt1712-l3\;PLATFORM=mtl,SDW_DMIC=1,NUM_HDMIS=0,NUM_SDW_AMP_LINKS=1,\
SDW_AMP_FEEDBACK=false,SDW_SPK_STREAM=Playback-SmartAmp,SDW_DMIC_STREAM=Capture-SmartMic,\
SDW_JACK_OUT_STREAM=Playback-SimpleJack,SDW_JACK_IN_STREAM=Capture-SimpleJack"

"cavs-sdw\;sof-mtl-rt1318-l12-rt714-l0\;PLATFORM=mtl,SDW_JACK=false,SDW_DMIC=1,\
USE_CHAIN_DMA=true,NUM_SDW_AMP_LINKS=2,SDW_SPK_STREAM=SDW1-Playback,SDW_SPK_IN_STREAM=SDW1-Capture,\
SDW_DMIC_STREAM=SDW0-Capture"

"cavs-sdw\;sof-mtl-rt713-l0-rt1316-l12-rt1713-l3\;PLATFORM=mtl,NUM_SDW_AMP_LINKS=2,SDW_DMIC=1"

# Jack codec + SmartAmp topology. No SDW_DMIC connection
"cavs-sdw\;sof-mtl-rt713-l0-rt1316-l12\;PLATFORM=mtl,NUM_SDW_AMP_LINKS=2,HDMI1_ID=4,HDMI2_ID=5,HDMI3_ID=6"

"cavs-sdw\;sof-mtl-rt722-l0\;PLATFORM=mtl,SDW_DMIC=1,NUM_HDMIS=0,NUM_SDW_AMP_LINKS=1,\
SDW_AMP_FEEDBACK=false,SDW_SPK_STREAM=Playback-SmartAmp,SDW_DMIC_STREAM=Capture-SmartMic,\
SDW_JACK_OUT_STREAM=Playback-SimpleJack,SDW_JACK_IN_STREAM=Capture-SimpleJack"

# Below topologies are used on Chromebooks

"cavs-rt5682\;sof-mtl-max98357a-rt5682\;PLATFORM=mtl,NUM_DMICS=4,PDM1_MIC_A_ENABLE=1,\
PDM1_MIC_B_ENABLE=1,DMIC0_PCM_ID=99,PREPROCESS_PLUGINS=nhlt,\
NHLT_BIN=nhlt-sof-mtl-max98357a-rt5682.bin,SPK_ID=6,DEEPBUFFER_FW_DMA_MS=10,INCLUDE_ECHO_REF=true,\
BT_NAME=SSP2-BT,BT_ID=7,BT_PCM_NAME=Bluetooth,USE_CHAIN_DMA=true,DEEPBUFFER_D0I3_COMPATIBLE=true,\
GOOGLE_RTC_AEC_SUPPORT=1"

"cavs-rt5682\;sof-mtl-max98357a-rt5682-ssp2-ssp0\;PLATFORM=mtl,NUM_DMICS=4,PDM1_MIC_A_ENABLE=1,\
PDM1_MIC_B_ENABLE=1,DMIC0_PCM_ID=99,PREPROCESS_PLUGINS=nhlt,\
NHLT_BIN=nhlt-sof-mtl-max98357a-rt5682.bin,DEEPBUFFER_FW_DMA_MS=10,HEADSET_SSP_DAI_INDEX=2,\
SPK_ID=6,SPEAKER_SSP_DAI_INDEX=0,HEADSET_CODEC_NAME=SSP2-Codec,SPEAKER_CODEC_NAME=SSP0-Codec,\
BT_NAME=SSP1-BT,BT_INDEX=1,BT_ID=7,BT_PCM_NAME=Bluetooth,INCLUDE_ECHO_REF=true,USE_CHAIN_DMA=true,\
DEEPBUFFER_D0I3_COMPATIBLE=true,GOOGLE_RTC_AEC_SUPPORT=1"

"cavs-rt5682\;sof-mtl-max98357a-rt5682-ssp2-ssp0-2ch-pdm1\;PLATFORM=mtl,NUM_DMICS=2,\
PDM0_MIC_A_ENABLE=0,PDM0_MIC_B_ENABLE=0,PDM1_MIC_A_ENABLE=1,PDM1_MIC_B_ENABLE=1,\
DMIC0_PCM_ID=99,PREPROCESS_PLUGINS=nhlt,NHLT_BIN=nhlt-sof-mtl-max98357a-rt5682-2ch.bin,\
HEADSET_SSP_DAI_INDEX=2,SPEAKER_SSP_DAI_INDEX=0,SPK_ID=6,HEADSET_CODEC_NAME=SSP2-Codec,SPEAKER_CODEC_NAME=SSP0-Codec,\
BT_NAME=SSP1-BT,BT_INDEX=1,BT_ID=7,BT_PCM_NAME=Bluetooth,INCLUDE_ECHO_REF=true,USE_CHAIN_DMA=true,\
DEEPBUFFER_FW_DMA_MS=10,DEEPBUFFER_D0I3_COMPATIBLE=true,GOOGLE_RTC_AEC_SUPPORT=1"

"cavs-rt5682\;sof-mtl-rt1019-rt5682\;PLATFORM=mtl,NUM_DMICS=4,PDM1_MIC_A_ENABLE=1,\
PDM1_MIC_B_ENABLE=1,DMIC0_PCM_ID=99,SPK_ID=6,PREPROCESS_PLUGINS=nhlt,\
NHLT_BIN=nhlt-sof-max98357a-rt5682.bin,DEEPBUFFER_FW_DMA_MS=10,HEADSET_SSP_DAI_INDEX=2,\
SPEAKER_SSP_DAI_INDEX=0,HEADSET_CODEC_NAME=SSP2-Codec,SPEAKER_CODEC_NAME=SSP0-Codec,\
INCLUDE_ECHO_REF=true,USE_CHAIN_DMA=true,DEEPBUFFER_D0I3_COMPATIBLE=true,INCLUDE_BT_OFFLOAD=false"

# SDW + DMIC + HDMI
"cavs-sdw\;sof-mtl-sdw-cs42l42-l0-max98363-l2\;PLATFORM=mtl,NUM_DMICS=4,PDM1_MIC_A_ENABLE=1,\
PDM1_MIC_B_ENABLE=1,DMIC0_ID=3,DMIC1_ID=4,USE_CHAIN_DMA=true,\
PREPROCESS_PLUGINS=nhlt,NHLT_BIN=nhlt-sof-mtl-sdw-cs42l42-l0-max98363-l2.bin,\
BT_NAME=SSP1-BT,BT_INDEX=1,BT_PCM_ID=20,BT_ID=8,BT_PCM_NAME=Bluetooth,ADD_BT=true,\
NUM_SDW_AMP_LINKS=1,SDW_SPK_STREAM=SDW2-Playback,SDW_AMP_FEEDBACK=false,\
SDW_JACK_CAPTURE_CH=1,DEEPBUFFER_FW_DMA_MS=100,DEEPBUFFER_D0I3_COMPATIBLE=true"

# SDW topology for LNL RVP
"cavs-sdw\;sof-lnl-rt711-4ch\;PLATFORM=lnl,NUM_DMICS=4,PDM1_MIC_A_ENABLE=1,PDM1_MIC_B_ENABLE=1,\
DMIC0_ID=2,DMIC1_ID=3,NUM_HDMIS=0,PREPROCESS_PLUGINS=nhlt,NHLT_BIN=nhlt-sof-lnl-rt711-4ch.bin,\
DEEPBUFFER_FW_DMA_MS=100,DEEPBUFFER_D0I3_COMPATIBLE=true"

"cavs-sdw\;sof-lnl-rt711-l0-rt1316-l23-rt714-l1\;PLATFORM=lnl,NUM_SDW_AMP_LINKS=2,SDW_DMIC=1,\
NUM_HDMIS=0,SDW_SPK_STREAM=SDW2-Playback,SDW_SPK_IN_STREAM=SDW2-Capture,SDW_DMIC_STREAM=SDW1-Capture"
)
