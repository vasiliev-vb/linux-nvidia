/*
 * tegra_asoc_machine_alt_t18x.h - Additional defines for T186
 *
 * Copyright (c) 2015 NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __TEGRA_ASOC_MACHINE_ALT_T18X_H__
#define __TEGRA_ASOC_MACHINE_ALT_T18X_H__
enum tegra186_xbar_dai_link {
	TEGRA186_DAI_LINK_ADMAIF1,
	TEGRA186_DAI_LINK_ADMAIF2,
	TEGRA186_DAI_LINK_ADMAIF3,
	TEGRA186_DAI_LINK_ADMAIF4,
	TEGRA186_DAI_LINK_ADMAIF5,
	TEGRA186_DAI_LINK_ADMAIF6,
	TEGRA186_DAI_LINK_ADMAIF7,
	TEGRA186_DAI_LINK_ADMAIF8,
	TEGRA186_DAI_LINK_ADMAIF9,
	TEGRA186_DAI_LINK_ADMAIF10,
	TEGRA186_DAI_LINK_ADMAIF11,
	TEGRA186_DAI_LINK_ADMAIF12,
	TEGRA186_DAI_LINK_ADMAIF13,
	TEGRA186_DAI_LINK_ADMAIF14,
	TEGRA186_DAI_LINK_ADMAIF15,
	TEGRA186_DAI_LINK_ADMAIF16,
	TEGRA186_DAI_LINK_ADMAIF17,
	TEGRA186_DAI_LINK_ADMAIF18,
	TEGRA186_DAI_LINK_ADMAIF19,
	TEGRA186_DAI_LINK_ADMAIF20,
	TEGRA186_DAI_LINK_ADMAIF1_CODEC,
	TEGRA186_DAI_LINK_ADMAIF2_CODEC,
	TEGRA186_DAI_LINK_ADMAIF3_CODEC,
	TEGRA186_DAI_LINK_ADMAIF4_CODEC,
	TEGRA186_DAI_LINK_ADMAIF5_CODEC,
	TEGRA186_DAI_LINK_ADMAIF6_CODEC,
	TEGRA186_DAI_LINK_ADMAIF7_CODEC,
	TEGRA186_DAI_LINK_ADMAIF8_CODEC,
	TEGRA186_DAI_LINK_ADMAIF9_CODEC,
	TEGRA186_DAI_LINK_ADMAIF10_CODEC,
	TEGRA186_DAI_LINK_ADSP_ADMAIF1,
	TEGRA186_DAI_LINK_ADSP_ADMAIF2,
	TEGRA186_DAI_LINK_ADSP_ADMAIF3,
	TEGRA186_DAI_LINK_ADSP_ADMAIF4,
	TEGRA186_DAI_LINK_ADSP_ADMAIF5,
	TEGRA186_DAI_LINK_ADSP_ADMAIF6,
	TEGRA186_DAI_LINK_ADSP_ADMAIF7,
	TEGRA186_DAI_LINK_ADSP_ADMAIF8,
	TEGRA186_DAI_LINK_ADSP_ADMAIF9,
	TEGRA186_DAI_LINK_ADSP_ADMAIF10,
	TEGRA186_DAI_LINK_ADSP_PCM1,
	TEGRA186_DAI_LINK_ADSP_PCM2,
	TEGRA186_DAI_LINK_ADSP_COMPR1,
	TEGRA186_DAI_LINK_ADSP_COMPR2,
	TEGRA186_DAI_LINK_AMX1_1,
	TEGRA186_DAI_LINK_AMX1_2,
	TEGRA186_DAI_LINK_AMX1_3,
	TEGRA186_DAI_LINK_AMX1_4,
	TEGRA186_DAI_LINK_AMX1,
	TEGRA186_DAI_LINK_AMX2_1,
	TEGRA186_DAI_LINK_AMX2_2,
	TEGRA186_DAI_LINK_AMX2_3,
	TEGRA186_DAI_LINK_AMX2_4,
	TEGRA186_DAI_LINK_AMX2,
	TEGRA186_DAI_LINK_AMX3_1,
	TEGRA186_DAI_LINK_AMX3_2,
	TEGRA186_DAI_LINK_AMX3_3,
	TEGRA186_DAI_LINK_AMX3_4,
	TEGRA186_DAI_LINK_AMX3,
	TEGRA186_DAI_LINK_AMX4_1,
	TEGRA186_DAI_LINK_AMX4_2,
	TEGRA186_DAI_LINK_AMX4_3,
	TEGRA186_DAI_LINK_AMX4_4,
	TEGRA186_DAI_LINK_AMX4,
	TEGRA186_DAI_LINK_ADX1,
	TEGRA186_DAI_LINK_ADX1_1,
	TEGRA186_DAI_LINK_ADX1_2,
	TEGRA186_DAI_LINK_ADX1_3,
	TEGRA186_DAI_LINK_ADX1_4,
	TEGRA186_DAI_LINK_ADX2,
	TEGRA186_DAI_LINK_ADX2_1,
	TEGRA186_DAI_LINK_ADX2_2,
	TEGRA186_DAI_LINK_ADX2_3,
	TEGRA186_DAI_LINK_ADX2_4,
	TEGRA186_DAI_LINK_ADX3,
	TEGRA186_DAI_LINK_ADX3_1,
	TEGRA186_DAI_LINK_ADX3_2,
	TEGRA186_DAI_LINK_ADX3_3,
	TEGRA186_DAI_LINK_ADX3_4,
	TEGRA186_DAI_LINK_ADX4,
	TEGRA186_DAI_LINK_ADX4_1,
	TEGRA186_DAI_LINK_ADX4_2,
	TEGRA186_DAI_LINK_ADX4_3,
	TEGRA186_DAI_LINK_ADX4_4,
	TEGRA186_DAI_LINK_MIXER1_RX1,
	TEGRA186_DAI_LINK_MIXER1_RX2,
	TEGRA186_DAI_LINK_MIXER1_RX3,
	TEGRA186_DAI_LINK_MIXER1_RX4,
	TEGRA186_DAI_LINK_MIXER1_RX5,
	TEGRA186_DAI_LINK_MIXER1_RX6,
	TEGRA186_DAI_LINK_MIXER1_RX7,
	TEGRA186_DAI_LINK_MIXER1_RX8,
	TEGRA186_DAI_LINK_MIXER1_RX9,
	TEGRA186_DAI_LINK_MIXER1_RX10,
	TEGRA186_DAI_LINK_MIXER1_TX1,
	TEGRA186_DAI_LINK_MIXER1_TX2,
	TEGRA186_DAI_LINK_MIXER1_TX3,
	TEGRA186_DAI_LINK_MIXER1_TX4,
	TEGRA186_DAI_LINK_MIXER1_TX5,
	TEGRA186_DAI_LINK_SFC1_RX,
	TEGRA186_DAI_LINK_SFC1_TX,
	TEGRA186_DAI_LINK_SFC2_RX,
	TEGRA186_DAI_LINK_SFC2_TX,
	TEGRA186_DAI_LINK_SFC3_RX,
	TEGRA186_DAI_LINK_SFC3_TX,
	TEGRA186_DAI_LINK_SFC4_RX,
	TEGRA186_DAI_LINK_SFC4_TX,
	TEGRA186_DAI_LINK_MVC1_RX,
	TEGRA186_DAI_LINK_MVC1_TX,
	TEGRA186_DAI_LINK_MVC2_RX,
	TEGRA186_DAI_LINK_MVC2_TX,
	TEGRA186_DAI_LINK_OPE1_RX,
	TEGRA186_DAI_LINK_OPE1_TX,
	TEGRA186_DAI_LINK_AFC1_RX,
	TEGRA186_DAI_LINK_AFC1_TX,
	TEGRA186_DAI_LINK_AFC2_RX,
	TEGRA186_DAI_LINK_AFC2_TX,
	TEGRA186_DAI_LINK_AFC3_RX,
	TEGRA186_DAI_LINK_AFC3_TX,
	TEGRA186_DAI_LINK_AFC4_RX,
	TEGRA186_DAI_LINK_AFC4_TX,
	TEGRA186_DAI_LINK_AFC5_RX,
	TEGRA186_DAI_LINK_AFC5_TX,
	TEGRA186_DAI_LINK_AFC6_RX,
	TEGRA186_DAI_LINK_AFC6_TX,
	TEGRA186_DAI_LINK_ASRC1_RX1,
	TEGRA186_DAI_LINK_ASRC1_RX2,
	TEGRA186_DAI_LINK_ASRC1_RX3,
	TEGRA186_DAI_LINK_ASRC1_RX4,
	TEGRA186_DAI_LINK_ASRC1_RX5,
	TEGRA186_DAI_LINK_ASRC1_RX6,
	TEGRA186_DAI_LINK_ASRC1_RX7,
	TEGRA186_DAI_LINK_ASRC1_TX1,
	TEGRA186_DAI_LINK_ASRC1_TX2,
	TEGRA186_DAI_LINK_ASRC1_TX3,
	TEGRA186_DAI_LINK_ASRC1_TX4,
	TEGRA186_DAI_LINK_ASRC1_TX5,
	TEGRA186_DAI_LINK_ASRC1_TX6,
	TEGRA186_XBAR_DAI_LINKS, /* Total number of xbar dai links */
};

enum tegra186_xbar_codec_conf {
	TEGRA186_CODEC_AMX1_CONF,
	TEGRA186_CODEC_AMX2_CONF,
	TEGRA186_CODEC_AMX3_CONF,
	TEGRA186_CODEC_AMX4_CONF,
	TEGRA186_CODEC_ADX1_CONF,
	TEGRA186_CODEC_ADX2_CONF,
	TEGRA186_CODEC_ADX3_CONF,
	TEGRA186_CODEC_ADX4_CONF,
	TEGRA186_CODEC_SFC1_CONF,
	TEGRA186_CODEC_SFC2_CONF,
	TEGRA186_CODEC_SFC3_CONF,
	TEGRA186_CODEC_SFC4_CONF,
	TEGRA186_CODEC_MVC1_CONF,
	TEGRA186_CODEC_MVC2_CONF,
	TEGRA186_CODEC_OPE1_CONF,
	TEGRA186_CODEC_AFC1_CONF,
	TEGRA186_CODEC_AFC2_CONF,
	TEGRA186_CODEC_AFC3_CONF,
	TEGRA186_CODEC_AFC4_CONF,
	TEGRA186_CODEC_AFC5_CONF,
	TEGRA186_CODEC_AFC6_CONF,
	TEGRA186_CODEC_I2S1_CONF,
	TEGRA186_CODEC_I2S2_CONF,
	TEGRA186_CODEC_I2S3_CONF,
	TEGRA186_CODEC_I2S4_CONF,
	TEGRA186_CODEC_I2S5_CONF,
	TEGRA186_CODEC_I2S6_CONF,
	TEGRA186_CODEC_DMIC1_CONF,
	TEGRA186_CODEC_SPDIF_CONF,
	TEGRA186_CODEC_DSPK1_CONF,
	TEGRA186_CODEC_DSPK2_CONF,
	TEGRA186_CODEC_ASRC1_CONF,
	TEGRA186_XBAR_CODEC_CONF, /* Total number of xbar codec conf */
};

struct snd_soc_dai_link *tegra_machine_get_dai_link_t18x(void);

int tegra_machine_append_dai_link_t18x(struct snd_soc_dai_link *link,
		unsigned int link_size);

struct snd_soc_codec_conf *tegra_machine_get_codec_conf_t18x(void);

int tegra_machine_append_codec_conf_t18x(struct snd_soc_codec_conf *conf,
		unsigned int conf_size);

unsigned int tegra_machine_get_codec_dai_link_idx_t18x(const char *codec_name);

unsigned int tegra_machine_get_bclk_ratio_t18x(
	struct snd_soc_pcm_runtime *rtd);
unsigned int tegra_machine_get_rx_mask_t18x(
	struct snd_soc_pcm_runtime *rtd);
unsigned int tegra_machine_get_tx_mask_t18x(
	struct snd_soc_pcm_runtime *rtd);
#endif
