#ifndef __ISP_REGS_H__
#define __ISP_REGS_H__

#include "ovisp-isp.h"
const struct isp_reg_t isp_mipi_regs_init[] = {
	// add new US settings
	{0x60100, 0x01},//Software reset
	{0x6301b, 0xf0},//isp clock enable
	{0x63025, 0x40},//clock divider
	{0x6301a, 0xf0},
	{0x63041, 0xf8},//dma clock
	/* frame out : use mipi 1 */
	/*{0x63108, 0x04},*/
	/* system initial */
	/* next setting about calibration */
/* #if 1 */
/* 	{0x65000, 0x3f}, */
/* 	{0x65001, 0x42}, */
/* 	{0x65002, 0x21}, */
/* 	{0x65003, 0xff}, */
/* 	{0x65005, 0x10}, */
/* #else */
/* 	{0x65000, 0x7f}, */
/* 	{0x65001, 0x07}, */
/* 	{0x65002, 0xe5}, */
/* 	{0x65003, 0x0f}, */
/* 	{0x65005, 0x10}, */

/* #endif */
/* #ifdef CONFIG_ANDROID */
/* 	{0x63b35, 0x04}, */
/* #endif */
	//{0x63022, 0x81},
	//{0x65007, 0x20},
};

const struct isp_reg_t isp_dvp_regs_init[] = {
	{0x60100, 0x01},//Software reset
	{0x6301b, 0xf0},//isp clock enable
	{0x63025, 0x40},//clock divider
	{0x6301a, 0xf0},
	{0x63041, 0xf8},
	/* ISP TOP REG */
#if 0
	{0x65000, 0x3f},
	{0x65001, 0x6f},//turn off local boost
	{0x65002, 0x9b},
	{0x65003, 0xff},
	{0x65004, 0x21},//turn on EDR
	{0x65005, 0x52},
	{0x65006, 0x02},
	{0x65008, 0x00},
	{0x65009, 0x00},

#else
	{0x65000, 0x51},
	{0x65001, 0x42},
	{0x65002, 0x21},
	{0x65003, 0x0f},
	{0x65005, 0x10},
#endif
#ifdef CONFIG_ANDROID
	{0x63b35, 0x04},
#endif
};

const struct isp_reg_t isp_set_live_mode_regs[] = {

	{0x65600, 0x18},//sigma
	{0x65601, 0x1a},
	{0x65602, 0x1d},
	{0x65603, 0x20},
	{0x65604, 0x28},
	{0x65605, 0x2c},

	{0x65606, 0x00},//gsl
	{0x65607, 0x00},
	{0x65608, 0x00},
	{0x65609, 0x00},
	{0x6560a, 0x00},
	{0x6560b, 0x00},
	{0x6560c, 0x00},//rbsl
	{0x6560d, 0x00},
	{0x6560e, 0x00},
	{0x6560f, 0x00},
	{0x65610, 0x00},
	{0x65611, 0x00},

	{0x66100, 0x08},//1
	{0x66101, 0x0a},//2
	{0x66102, 0x0d},//4
	{0x66103, 0x10},//8
	{0x66104, 0x18},//16
	{0x66105, 0x18},//32

	{OVISP_REG_END, 0x00},
};
#endif/*__ISP_REGS_H__*/
