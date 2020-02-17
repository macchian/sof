#
ifelse(PLATFORM, `bxt', `# Topology for GeminiLake with Dialog7219.', `')
ifelse(PLATFORM, `cml', `# Topology for CometLake with Dialog7219.', `')
#

# Include topology builder
include(`utils.m4')
include(`dai.m4')
include(`pipeline.m4')
include(`ssp.m4')

# Include TLV library
include(`common/tlv.m4')

# Include Token library
include(`sof/tokens.m4')

ifelse(PLATFORM, `bxt', `# Include bxt DSP configuration', `')
ifelse(PLATFORM, `cml', `# Include cnl DSP configuration', `')

ifelse(PLATFORM, `bxt', `include(`platform/intel/bxt.m4')', `')
ifelse(PLATFORM, `cml', `include(`platform/intel/cnl.m4')', `')

ifelse(PLATFORM, `cml', `include(`abi.h')', `')

include(`platform/intel/dmic.m4')

define(KWD_PIPE_SCH_DEADLINE_US, 20000)

undefine(`SSP_INDEX')
define(`SSP_INDEX', ifelse(PLATFORM, `bxt', `2',
	ifelse(PLATFORM, `cml', `0', `')))

undefine(`SSP_NAME')
define(`SSP_NAME', ifelse(PLATFORM, `bxt', `SSP2-Codec',
	ifelse(PLATFORM, `cml', `SSP0-Codec', `')))

undefine(`DMIC0_PIPE_NAME')
define(`DMIC0_PIPE_NAME', ifelse(PLATFORM, `bxt', `volume',
	ifelse(PLATFORM, `cml', `passthrough', `')))

undefine(`DMIC_PCM_NUM')
define(`DMIC_PCM_NUM', ifelse(PLATFORM, `bxt', `99',
	ifelse(PLATFORM, `cml', `2', `')))

undefine(`DMIC01_FMT')
define(`DMIC01_FMT', ifelse(PLATFORM, `bxt', `s16le',
	ifelse(PLATFORM, `cml', `s32le', `')))

undefine(`DMIC1_FMT')
define(`DMIC1_FMT', ifelse(PLATFORM, `bxt', `s16le',
	ifelse(PLATFORM, `cml', `s24le', `')))

undefine(`AMP_DAI_FMT')
define(`AMP_DAI_FMT', ifelse(PLATFORM, `bxt', `s16le',
	ifelse(PLATFORM, `cml', `s24le', `')))

undefine(`HDMI0_INDEX')
define(`HDMI0_INDEX', ifelse(PLATFORM, `bxt', `3',
	ifelse(PLATFORM, `cml', `0', `')))

undefine(`HDMI1_INDEX')
define(`HDMI1_INDEX', ifelse(PLATFORM, `bxt', `4',
	ifelse(PLATFORM, `cml', `1', `')))

undefine(`HDMI2_INDEX')
define(`HDMI2_INDEX', ifelse(PLATFORM, `bxt', `5',
	ifelse(PLATFORM, `cml', `2', `')))

#
# Define the pipelines
#
# PCM0  ----> volume (pipe 1)   -----> SSP1 (speaker - maxim98357a, BE link 0)
# PCM1  <---> volume (pipe 2,3) <----> SSP(SSP_INDEX) (headset - dailog7219, BE link 1)
# PCM(DMIC_PCM_NUM) <---- DMIC0 (dmic capture, BE link 2)
# PCM5  ----> volume (pipe 5)   -----> iDisp1 (HDMI/DP playback, BE link 3)
# PCM6  ----> volume (pipe 6)   -----> iDisp2 (HDMI/DP playback, BE link 4)
# PCM7  ----> volume (pipe 7)   -----> iDisp3 (HDMI/DP playback, BE link 5)
# PCM8  <-------(pipe 8) <------------+- KPBM 0 <----- DMIC1 (dmic16k, BE link 6)
#                                     |
# Detector <--- selector (pipe 9) <---+
#

# Low Latency playback pipeline 1 on PCM 0 using max 2 channels of s32le.
# Set 1000us deadline on core 0 with priority 0
ifelse(SOF_ABI_VERSION_3_9_OR_GRT, `1',
`PIPELINE_PCM_ADD(sof/pipe-volume-playback.m4,
	1, 0, 2, s32le,
	1000, 0, 0,
	48000, 48000, 48000)',
`PIPELINE_PCM_ADD(sof/pipe-src-volume-playback.m4,
	1, 0, 2, s32le,
	1000, 0, 0,
	48000, 48000, 48000)')

# Low Latency playback pipeline 2 on PCM 1 using max 2 channels of s32le.
# Set 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-volume-playback.m4,
	2, 1, 2, s32le,
	1000, 0, 0,
	48000, 48000, 48000)

# Low Latency capture pipeline 3 on PCM 1 using max 2 channels of s32le.
# Set 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-volume-capture.m4,
	3, 1, 2, s32le,
	1000, 0, 0,
	48000, 48000, 48000)

# Low Latency capture pipeline 4 on PCM 99 using max 4 channels of s32le.
# Set 1000us deadline on core 0 with priority 0

PIPELINE_PCM_ADD(sof/pipe-DMIC0_PIPE_NAME-capture.m4,
	4, DMIC_PCM_NUM, 4, DMIC01_FMT,
	1000, 0, 0,
	48000, 48000, 48000)

# Low Latency playback pipeline 5 on PCM 5 using max 2 channels of s32le.
# Set 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-volume-playback.m4,
        5, 5, 2, s32le,
        1000, 0, 0,
	48000, 48000, 48000)

# Low Latency playback pipeline 6 on PCM 6 using max 2 channels of s32le.
# Set 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-volume-playback.m4,
        6, 6, 2, s32le,
        1000, 0, 0,
	48000, 48000, 48000)

# Low Latency playback pipeline 7 on PCM 7 using max 2 channels of s32le.
# Set 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-volume-playback.m4,
        7, 7, 2, s32le,
        1000, 0, 0,
	48000, 48000, 48000)

#
# DAIs configuration
#

# playback DAI is SSP1 using 2 periods
# Buffers use s16le format, 1000us deadline on core 0 with priority 0
ifelse(SOF_ABI_VERSION_3_9_OR_GRT, `1',
`DAI_ADD(sof/pipe-dai-playback.m4,
	1, SSP, 1, SSP1-Codec,
	PIPELINE_SOURCE_1, 2, AMP_DAI_FMT,
	1000, 0, 0)',
`DAI_ADD(sof/pipe-dai-playback.m4,
	1, SSP, 1, SSP1-Codec,
	PIPELINE_SOURCE_1, 2, s16le,
	1000, 0, 0)')

# playback DAI is SSP(SSP_INDEX) using 2 periods
# Buffers use s16le format, 1000us deadline on core 0 with priority 0
DAI_ADD(sof/pipe-dai-playback.m4,
	2, SSP, SSP_INDEX, SSP_NAME,
	PIPELINE_SOURCE_2, 2, s16le,
	1000, 0, 0)

# capture DAI is SSP(SSP_INDEX) using 2 periods
# Buffers use s16le format, 1000us deadline on core 0 with priority 0
DAI_ADD(sof/pipe-dai-capture.m4,
	3, SSP, SSP_INDEX, SSP_NAME,
	PIPELINE_SINK_3, 2, s16le,
	1000, 0, 0)

# capture DAI is DMIC0 using 2 periods
# Buffers use s32le format, 1000us deadline on core 0 with priority 0
DAI_ADD(sof/pipe-dai-capture.m4,
	4, DMIC, 0, dmic01,
	PIPELINE_SINK_4, 2, DMIC01_FMT,
	1000, 0, 0)

# playback DAI is iDisp1 using 2 periods
# Buffers use s32le format, 1000us deadline on core 0 with priority 0
DAI_ADD(sof/pipe-dai-playback.m4,
        5, HDA, HDMI0_INDEX, iDisp1,
        PIPELINE_SOURCE_5, 2, s32le,
        1000, 0, 0, SCHEDULE_TIME_DOMAIN_TIMER)

# playback DAI is iDisp2 using 2 periods
# Buffers use s32le format, 1000us deadline on core 0 with priority 0
DAI_ADD(sof/pipe-dai-playback.m4,
        6, HDA, HDMI1_INDEX, iDisp2,
        PIPELINE_SOURCE_6, 2, s32le,
        1000, 0, 0, SCHEDULE_TIME_DOMAIN_TIMER)

# playback DAI is iDisp3 using 2 periods
# Buffers use s32le format, 1000us deadline on core 0 with priority 0
DAI_ADD(sof/pipe-dai-playback.m4,
        7, HDA, HDMI2_INDEX, iDisp3,
        PIPELINE_SOURCE_7, 2, s32le,
        1000, 0, 0, SCHEDULE_TIME_DOMAIN_TIMER)

#
# KWD configuration
#

# Passthrough capture pipeline 8 on PCM 8 using max 2 channels.
# Schedule 20000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-kfbm-capture.m4,
	8, 8, 2, DMIC1_FMT,
	KWD_PIPE_SCH_DEADLINE_US, 0, 0,
	16000, 16000, 16000)

# capture DAI is DMIC 1 using 2 periods
# Buffers use s16le format, with 320 frame per 20000us on core 0 with priority 0
DAI_ADD(sof/pipe-dai-capture.m4,
	8, DMIC, 1, dmic16k,
	PIPELINE_SINK_8, 2, DMIC01_FMT,
	KWD_PIPE_SCH_DEADLINE_US, 0, 0)

PCM_PLAYBACK_ADD(Speakers, 0, PIPELINE_PCM_1)
PCM_DUPLEX_ADD(Headset, 1, PIPELINE_PCM_2, PIPELINE_PCM_3)
PCM_CAPTURE_ADD(DMIC01, DMIC_PCM_NUM, PIPELINE_PCM_4)
PCM_PLAYBACK_ADD(HDMI1, 5, PIPELINE_PCM_5)
PCM_PLAYBACK_ADD(HDMI2, 6, PIPELINE_PCM_6)
PCM_PLAYBACK_ADD(HDMI3, 7, PIPELINE_PCM_7)

# keyword detector pipe
dnl PIPELINE_ADD(pipeline,
dnl     pipe id, max channels, format,
dnl     period, priority, core,
dnl     sched_comp, time_domain,
dnl     pcm_min_rate, pcm_max_rate, pipeline_rate)
PIPELINE_ADD(sof/pipe-detect.m4,
	     9, 2, DMIC1_FMT,
	     KWD_PIPE_SCH_DEADLINE_US, 0, 0,
	     PIPELINE_SCHED_COMP_8, 0,
	     16000, 16000, 16000)

# Connect pipelines together
SectionGraph."pipe-sof-apl-keyword-detect" {
        index "0"

        lines [
		# keyword detect
                dapm(PIPELINE_SINK_9, PIPELINE_SOURCE_8)
		dapm(PIPELINE_PCM_8, PIPELINE_DETECT_9)
        ]
}

#
# BE configurations - overrides config in ACPI if present
#

ifelse(PLATFORM, `cml',
ifelse(SOF_ABI_VERSION_3_9_OR_GRT, `1',
`DAI_CONFIG(SSP, 1, 0, SSP1-Codec,
        SSP_CONFIG(I2S, SSP_CLOCK(mclk, 24000000, codec_mclk_in),
                SSP_CLOCK(bclk, 2304000, codec_slave),
                SSP_CLOCK(fsync, 48000, codec_slave),
                SSP_TDM(2, 24, 3, 3),
                SSP_CONFIG_DATA(SSP, 1, 24)))',
`DAI_CONFIG(SSP, 1, 0, SSP1-Codec,
        SSP_CONFIG(I2S, SSP_CLOCK(mclk, 24000000, codec_mclk_in),
                SSP_CLOCK(bclk, 1500000, codec_slave),
                SSP_CLOCK(fsync, 46875, codec_slave),
                SSP_TDM(2, 16, 3, 3),
                SSP_CONFIG_DATA(SSP, 1, 16)))'),
#SSP 1 (ID: 0) with 19.2 MHz mclk with MCLK_ID 1 (unused), 1.536 MHz blck
`DAI_CONFIG(SSP, 1, 0, SSP1-Codec,
	SSP_CONFIG(I2S, SSP_CLOCK(mclk, 19200000, codec_mclk_in),
		SSP_CLOCK(bclk, 1536000, codec_slave),
		SSP_CLOCK(fsync, 48000, codec_slave),
		SSP_TDM(2, 16, 3, 3),
		SSP_CONFIG_DATA(SSP, 1, 16, 1)))')
ifelse(PLATFORM, `cml',
`DAI_CONFIG(SSP, 0, 1, SSP0-Codec,
        SSP_CONFIG(I2S, SSP_CLOCK(mclk, 24000000, codec_mclk_in),
                SSP_CLOCK(bclk, 2400000, codec_slave),
                SSP_CLOCK(fsync, 48000, codec_slave),
                SSP_TDM(2, 25, 3, 3),
                SSP_CONFIG_DATA(SSP, 0, 16)))',

#SSP 2 (ID: 1) with 19.2 MHz mclk with MCLK_ID 1, 1.92 MHz bclk
`DAI_CONFIG(SSP, 2, 1, SSP2-Codec,
	SSP_CONFIG(I2S, SSP_CLOCK(mclk, 19200000, codec_mclk_in),
		SSP_CLOCK(bclk, 1920000, codec_slave),
		SSP_CLOCK(fsync, 48000, codec_slave),
		SSP_TDM(2, 20, 3, 3),
		SSP_CONFIG_DATA(SSP, 2, 16, 1)))')

# dmic01 (ID: 2)
DAI_CONFIG(DMIC, 0, 2, dmic01,
	DMIC_CONFIG(1, 500000, 4800000, 40, 60, 48000,
		DMIC_WORD_LENGTH(DMIC01_FMT), 400, DMIC, 0,
		PDM_CONFIG(DMIC, 0, FOUR_CH_PDM0_PDM1)))

# 3 HDMI/DP outputs (ID: 3,4,5)
DAI_CONFIG(HDA, HDMI0_INDEX, 3, iDisp1)
DAI_CONFIG(HDA, HDMI1_INDEX, 4, iDisp2)
DAI_CONFIG(HDA, HDMI2_INDEX, 5, iDisp3)

# dmic16k (ID: 6)
DAI_CONFIG(DMIC, 1, 6, dmic16k,
           DMIC_CONFIG(1, 500000, 4800000, 40, 60, 16000,
                DMIC_WORD_LENGTH(DMIC01_FMT), 400, DMIC, 1,
                PDM_CONFIG(DMIC, 1, STEREO_PDM0)))

## remove warnings with SST hard-coded routes

ifelse(PLATFORM, `cml',
`VIRTUAL_WIDGET(ssp5 Tx, out_drv, 0)
VIRTUAL_WIDGET(ssp1 Rx, out_drv, 1)
VIRTUAL_WIDGET(ssp1 Tx, out_drv, 2)',
`VIRTUAL_WIDGET(ssp1 Tx, out_drv, 0)
VIRTUAL_WIDGET(ssp2 Rx, out_drv, 1)
VIRTUAL_WIDGET(ssp2 Tx, out_drv, 2)')

VIRTUAL_WIDGET(iDisp3 Tx, out_drv, 15)
VIRTUAL_WIDGET(iDisp2 Tx, out_drv, 16)
VIRTUAL_WIDGET(iDisp1 Tx, out_drv, 17)
VIRTUAL_WIDGET(DMIC01 Rx, out_drv, 3)
VIRTUAL_WIDGET(DMic, out_drv, 4)
VIRTUAL_WIDGET(dmic01_hifi, out_drv, 5)
VIRTUAL_WIDGET(hif5-0 Output, out_drv, 6)
VIRTUAL_WIDGET(hif6-0 Output, out_drv, 7)
VIRTUAL_WIDGET(hif7-0 Output, out_drv, 8)
VIRTUAL_WIDGET(iDisp3_out, out_drv, 9)
VIRTUAL_WIDGET(iDisp2_out, out_drv, 10)
VIRTUAL_WIDGET(iDisp1_out, out_drv, 11)
VIRTUAL_WIDGET(codec0_out, output, 12)
VIRTUAL_WIDGET(codec1_out, output, 13)
VIRTUAL_WIDGET(codec0_in, input, 14)
