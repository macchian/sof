#
# Topology for Cometlake with da7219 headset on SSP0, max98357a spk on SSP1
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

# Include Cannonlake DSP configuration
include(`platform/intel/cnl.m4')
include(`platform/intel/dmic.m4')

DEBUG_START

#
# Define the pipelines
#
# PCM0 ----> volume -----> SSP1   (speaker - maxim98357a, BE link 0)
# PCM1 <---> volume <----> SSP0   (headset - da7219, BE link 1)
# PCM2 <---- DMIC01 (dmic0 capture, BE link 2)
# PCM5 ----> volume -----> iDisp1 (HDMI/DP playback, BE link 3)
# PCM6 ----> volume -----> iDisp2 (HDMI/DP playback, BE link 4)
# PCM7 ----> volume -----> iDisp3 (HDMI/DP playback, BE link 5)
#

dnl PIPELINE_PCM_ADD(pipeline,
dnl     pipe id, pcm, max channels, format,
dnl     frames, deadline, priority, core)

# Low Latency playback pipeline 1 on PCM 1 using max 2 channels of s32le.
# Schedule 48 frames per 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-volume-playback.m4,
	1, 1, 2, s32le,
	48, 1000, 0, 0)

# Low Latency capture pipeline 2 on PCM 1 using max 2 channels of s32le.
# Schedule 48 frames per 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-volume-capture.m4,
	2, 1, 2, s32le,
	48, 1000, 0, 0)

# Passthrough capture pipeline 3 on PCM 2 using max 4 channels.
# Schedule 48 frames per 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-passthrough-capture.m4,
	3, 2, 4, s32le,
	48, 1000, 0, 0)

# Low Latency playback pipeline 4 on PCM 5 using max 2 channels of s32le.
# Schedule 48 frames per 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-volume-playback.m4,
	4, 5, 2, s32le,
	48, 1000, 0, 0)

# Low Latency playback pipeline 5 on PCM 6 using max 2 channels of s32le.
# Schedule 48 frames per 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-volume-playback.m4,
	5, 6, 2, s32le,
	48, 1000, 0, 0)

# Low Latency playback pipeline 6 on PCM 7 using max 2 channels of s32le.
# Schedule 48 frames per 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-volume-playback.m4,
	6, 7, 2, s32le,
	48, 1000, 0, 0)

# Low Latency playback pipeline 7 on PCM 0 using max 2 channels of s32le.
# Schedule 48 frames per 1000us deadline on core 0 with priority 0
PIPELINE_PCM_ADD(sof/pipe-src-volume-playback.m4,
	7, 0, 2, s32le,
	48, 1000, 0, 0)

#
# DAIs configuration
#

dnl DAI_ADD(pipeline,
dnl     pipe id, dai type, dai_index, dai_be,
dnl     buffer, periods, format,
dnl     frames, deadline, priority, core)

# playback DAI is SSP0 using 2 periods
# Buffers use s16le format, with 48 frame per 1000us on core 0 with priority 0
DAI_ADD(sof/pipe-dai-playback.m4,
	1, SSP, 0, SSP0-Codec,
	PIPELINE_SOURCE_1, 2, s16le,
	48, 1000, 0, 0)

# capture DAI is SSP0 using 2 periods
# Buffers use s16le format, with 48 frame per 1000us on core 0 with priority 0
DAI_ADD(sof/pipe-dai-capture.m4,
	2, SSP, 0, SSP0-Codec,
	PIPELINE_SINK_2, 2, s16le,
	48, 1000, 0, 0)

# capture DAI is DMIC01 using 2 periods
# Buffers use s32le format, with 48 frame per 1000us on core 0 with priority 0
DAI_ADD(sof/pipe-dai-capture.m4,
	3, DMIC, 0, dmic01,
	PIPELINE_SINK_3, 2, s32le,
	48, 1000, 0, 0)

# playback DAI is iDisp1 using 2 periods
# Buffers use s32le format, with 48 frame per 1000us on core 0 with priority 0
DAI_ADD(sof/pipe-dai-playback.m4,
	4, HDA, 0, iDisp1,
	PIPELINE_SOURCE_4, 2, s32le,
	48, 1000, 0, 0, SCHEDULE_TIME_DOMAIN_TIMER)

# playback DAI is iDisp2 using 2 periods
# Buffers use s32le format, with 48 frame per 1000us on core 0 with priority 0
DAI_ADD(sof/pipe-dai-playback.m4,
	5, HDA, 1, iDisp2,
	PIPELINE_SOURCE_5, 2, s32le,
	48, 1000, 0, 0, SCHEDULE_TIME_DOMAIN_TIMER)

# playback DAI is iDisp3 using 2 periods
# Buffers use s32le format, with 48 frame per 1000us on core 0 with priority 0
DAI_ADD(sof/pipe-dai-playback.m4,
	6, HDA, 2, iDisp3,
	PIPELINE_SOURCE_6, 2, s32le,
	48, 1000, 0, 0, SCHEDULE_TIME_DOMAIN_TIMER)

# playback DAI is SSP1 using 2 periods
# Buffers use s16le format, with 48 frame per 1000us on core 0 with priority 0
DAI_ADD(sof/pipe-dai-playback.m4,
	7, SSP, 1, SSP1-Codec,
	PIPELINE_SOURCE_7, 2, s16le,
	48, 1000, 0, 0)

# PCM Low Latency, id 0
dnl PCM_PLAYBACK_ADD(name, pcm_id, playback)
PCM_PLAYBACK_ADD(Speakers, 0, PIPELINE_PCM_7)
PCM_DUPLEX_ADD(Headset, 1, PIPELINE_PCM_1, PIPELINE_PCM_2)
PCM_CAPTURE_ADD(DMIC01, 2, PIPELINE_PCM_3)
PCM_PLAYBACK_ADD(HDMI1, 5, PIPELINE_PCM_4)
PCM_PLAYBACK_ADD(HDMI2, 6, PIPELINE_PCM_5)
PCM_PLAYBACK_ADD(HDMI3, 7, PIPELINE_PCM_6)

#
# BE configurations - overrides config in ACPI if present
#

#SSP 1 (ID: 0)
DAI_CONFIG(SSP, 1, 0, SSP1-Codec,
	SSP_CONFIG(I2S, SSP_CLOCK(mclk, 24000000, codec_mclk_in),
		SSP_CLOCK(bclk, 1500000, codec_slave),
		SSP_CLOCK(fsync, 46875, codec_slave),
		SSP_TDM(2, 16, 3, 3),
		SSP_CONFIG_DATA(SSP, 1, 16)))

#SSP 0 (ID: 1)
DAI_CONFIG(SSP, 0, 1, SSP0-Codec,
	SSP_CONFIG(I2S, SSP_CLOCK(mclk, 24000000, codec_mclk_in),
		SSP_CLOCK(bclk, 2400000, codec_slave),
		SSP_CLOCK(fsync, 48000, codec_slave),
		SSP_TDM(2, 25, 3, 3),
		SSP_CONFIG_DATA(SSP, 0, 16)))

# dmic01 (ID: 2)
DAI_CONFIG(DMIC, 0, 2, dmic01,
	DMIC_CONFIG(1, 500000, 4800000, 40, 60, 48000,
		DMIC_WORD_LENGTH(s32le), DMIC, 0,
		PDM_CONFIG(DMIC, 0, FOUR_CH_PDM0_PDM1)))

# 3 HDMI/DP outputs (ID: 3,4,5)
DAI_CONFIG(HDA, 0, 3, iDisp1)
DAI_CONFIG(HDA, 1, 4, iDisp2)
DAI_CONFIG(HDA, 2, 5, iDisp3)


DEBUG_END
