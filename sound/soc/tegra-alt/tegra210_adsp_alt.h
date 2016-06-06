/*
 * tegra210_adsp_alt.h - Tegra210 ADSP header
 *
 * Copyright (c) 2014-2016 NVIDIA CORPORATION.  All rights reserved.
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

#ifndef __TEGRA210_ADSP_ALT_H__
#define __TEGRA210_ADSP_ALT_H__

/* This enum is linked with tegra210_adsp_mux_texts array. Any thing
   changed in enum define should be also reflected in text array */
enum tegra210_adsp_virt_regs {
	TEGRA210_ADSP_NONE,

	/* End-point virtual regs */
	TEGRA210_ADSP_FRONT_END1,
	TEGRA210_ADSP_FRONT_END2,
	TEGRA210_ADSP_FRONT_END3,
	TEGRA210_ADSP_FRONT_END4,
	TEGRA210_ADSP_FRONT_END5,

	TEGRA210_ADSP_EAVB,

	TEGRA210_ADSP_ADMAIF1,
	TEGRA210_ADSP_ADMAIF2,
	TEGRA210_ADSP_ADMAIF3,
	TEGRA210_ADSP_ADMAIF4,
	TEGRA210_ADSP_ADMAIF5,
	TEGRA210_ADSP_ADMAIF6,
	TEGRA210_ADSP_ADMAIF7,
	TEGRA210_ADSP_ADMAIF8,
	TEGRA210_ADSP_ADMAIF9,
	TEGRA210_ADSP_ADMAIF10,
	TEGRA210_ADSP_ADMAIF11,
	TEGRA210_ADSP_ADMAIF12,
	TEGRA210_ADSP_ADMAIF13,
	TEGRA210_ADSP_ADMAIF14,
	TEGRA210_ADSP_ADMAIF15,
	TEGRA210_ADSP_ADMAIF16,
	TEGRA210_ADSP_ADMAIF17,
	TEGRA210_ADSP_ADMAIF18,
	TEGRA210_ADSP_ADMAIF19,
	TEGRA210_ADSP_ADMAIF20,

	/* Virtual regs for apps */
	TEGRA210_ADSP_APM_IN1,
	TEGRA210_ADSP_APM_IN2,
	TEGRA210_ADSP_APM_IN3,
	TEGRA210_ADSP_APM_IN4,
	TEGRA210_ADSP_APM_IN5,
	TEGRA210_ADSP_APM_IN6,
	TEGRA210_ADSP_APM_IN7,
	TEGRA210_ADSP_APM_IN8,

	TEGRA210_ADSP_APM_OUT1,
	TEGRA210_ADSP_APM_OUT2,
	TEGRA210_ADSP_APM_OUT3,
	TEGRA210_ADSP_APM_OUT4,
	TEGRA210_ADSP_APM_OUT5,
	TEGRA210_ADSP_APM_OUT6,
	TEGRA210_ADSP_APM_OUT7,
	TEGRA210_ADSP_APM_OUT8,

	TEGRA210_ADSP_PLUGIN_ADMA1,
	TEGRA210_ADSP_PLUGIN_ADMA2,
	TEGRA210_ADSP_PLUGIN_ADMA3,
	TEGRA210_ADSP_PLUGIN_ADMA4,
	TEGRA210_ADSP_PLUGIN_ADMA5,
	TEGRA210_ADSP_PLUGIN_ADMA6,
	TEGRA210_ADSP_PLUGIN_ADMA7,
	TEGRA210_ADSP_PLUGIN_ADMA8,
	TEGRA210_ADSP_PLUGIN_ADMA9,
	TEGRA210_ADSP_PLUGIN_ADMA10,
	TEGRA210_ADSP_PLUGIN_ADMA1_TX,
	TEGRA210_ADSP_PLUGIN_ADMA2_TX,
	TEGRA210_ADSP_PLUGIN_ADMA3_TX,
	TEGRA210_ADSP_PLUGIN_ADMA4_TX,
	TEGRA210_ADSP_PLUGIN_ADMA5_TX,
	TEGRA210_ADSP_PLUGIN_ADMA6_TX,
	TEGRA210_ADSP_PLUGIN_ADMA7_TX,
	TEGRA210_ADSP_PLUGIN_ADMA8_TX,
	TEGRA210_ADSP_PLUGIN_ADMA9_TX,
	TEGRA210_ADSP_PLUGIN_ADMA10_TX,

	TEGRA210_ADSP_PLUGIN1,
	TEGRA210_ADSP_PLUGIN2,
	TEGRA210_ADSP_PLUGIN3,
	TEGRA210_ADSP_PLUGIN4,
	TEGRA210_ADSP_PLUGIN5,
	TEGRA210_ADSP_PLUGIN6,
	TEGRA210_ADSP_PLUGIN7,
	TEGRA210_ADSP_PLUGIN8,
	TEGRA210_ADSP_PLUGIN9,
	TEGRA210_ADSP_PLUGIN10,

	TEGRA210_ADSP_VIRT_REG_MAX,
};

/* Supports widget id 0x0 - 0xFF */
#define TEGRA210_ADSP_WIDGET_SOURCE_SHIFT	0
#define TEGRA210_ADSP_WIDGET_SOURCE_MASK	(0xff << TEGRA210_ADSP_WIDGET_SOURCE_SHIFT)

#define TEGRA210_ADSP_WIDGET_EN_SHIFT		31
#define TEGRA210_ADSP_WIDGET_EN_MASK		(0x1 << TEGRA210_ADSP_WIDGET_EN_SHIFT)

/* TODO : Check if we can remove these macros */
#define ADSP_FE_START		TEGRA210_ADSP_FRONT_END1
#define ADSP_FE_END			TEGRA210_ADSP_FRONT_END5
#define ADSP_ADMAIF_START	TEGRA210_ADSP_ADMAIF1
#define ADSP_ADMAIF_END		TEGRA210_ADSP_ADMAIF20
#define ADSP_EAVB_START		TEGRA210_ADSP_EAVB
#define ADSP_FE_COUNT		ADSP_EAVB_START
#define APM_IN_START		TEGRA210_ADSP_APM_IN1
#define APM_IN_END			TEGRA210_ADSP_APM_IN8
#define APM_OUT_START		TEGRA210_ADSP_APM_OUT1
#define APM_OUT_END			TEGRA210_ADSP_APM_OUT8
#define ADMA_START			TEGRA210_ADSP_PLUGIN_ADMA1
#define ADMA_END			TEGRA210_ADSP_PLUGIN_ADMA10
#define ADMA_TX_START			TEGRA210_ADSP_PLUGIN_ADMA1_TX
#define ADMA_TX_END			TEGRA210_ADSP_PLUGIN_ADMA10_TX
#define PLUGIN_START		TEGRA210_ADSP_PLUGIN1
#define PLUGIN_END			TEGRA210_ADSP_PLUGIN10

#define IS_APM_IN(reg)			((reg >= APM_IN_START) && (reg <= APM_IN_END))
#define IS_APM_OUT(reg) 		((reg >= APM_OUT_START) && (reg <= APM_OUT_END))
#define IS_APM(reg)				(IS_APM_IN(reg) | IS_APM_OUT(reg))
#define IS_PLUGIN(reg)			((reg >= PLUGIN_START) && (reg <= PLUGIN_END))
#define IS_ADMA_RX(reg)		((reg >= ADMA_START) && (reg <= ADMA_END))
#define IS_ADMA_TX(reg)		((reg >= ADMA_TX_START) && (reg <= ADMA_TX_END))
#define IS_ADMA(reg)		(IS_ADMA_RX(reg) || IS_ADMA_TX(reg))
#define IS_ADSP_APP(reg) 		(IS_APM(reg) | IS_PLUGIN(reg) | IS_ADMA(reg))
#define IS_ADSP_FE(reg)			(((reg >= ADSP_FE_START) && (reg <= ADSP_FE_END)) || \
									(reg == ADSP_EAVB_START))
#define IS_ADSP_ADMAIF(reg) 	((reg >= ADSP_ADMAIF_START) && (reg <= ADSP_ADMAIF_END))

/* ADSP_MSG_FLAGs */
#define TEGRA210_ADSP_MSG_FLAG_SEND	0x0
#define TEGRA210_ADSP_MSG_FLAG_HOLD	0x1
#define TEGRA210_ADSP_MSG_FLAG_NEED_ACK 0x2

/* TODO : Remove hard-coding and get data from DTS */
#define TEGRA210_ADSP_ADMA_CHANNEL_START	10
#define TEGRA210_ADSP_ADMA_CHANNEL_COUNT	10

#define TEGRA210_ADSP_ADMA_CHANNEL_START_HV  16

/* ADSP base index for widget name update */
#define TEGRA210_ADSP_ROUTE_BASE	((TEGRA210_ADSP_ADMAIF20 * 11) + \
					(8 * TEGRA210_ADSP_APM_OUT1))
#define TEGRA210_ADSP_WIDGET_BASE	((TEGRA210_ADSP_ADMAIF20 * 3) + \
									(TEGRA210_ADSP_PLUGIN1 - TEGRA210_ADSP_APM_IN1) * 2)

#endif
