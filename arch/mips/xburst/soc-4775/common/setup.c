/*
 * JZSOC Clock and Power Manager
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2006 Ingenic Semiconductor Inc.
 */
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/io.h>
#include <linux/delay.h>
#include <linux/module.h>
#include <linux/err.h>
#include <linux/proc_fs.h>
#include <linux/ioport.h>

#include <soc/cpm.h>
#include <soc/base.h>
#include <soc/extal.h>
#include <mach/jzcpm_pwc.h>
#include <mach/platform.h>

extern void reset_keep_power(void);

/*
 * Bring up the priority of CPU on both AHB0 & AHB2
 */
void __init setup_priority(unsigned int base, unsigned int target, unsigned int value)
{
        if(base != HARB0_IOBASE)
                if(base != HARB2_IOBASE)
                        printk("%s: Invalid value.\n", __FUNCTION__);

        if(value > 3 || target > 20)
                printk("%s: Invalid value.\n", __FUNCTION__);

        printk("%s: BUS--0x%x, TARGET--0x%x, VALUE--0x%x\n", __FUNCTION__, base, target, value);
        outl((inl(base) | (value << target)), base);
        printk("%s: VALUE after setup--0x%x\n", __FUNCTION__, inl(base));
}

void __init cpm_reset(void)
{
#ifndef CONFIG_FPGA_TEST
	unsigned long clkgr = cpm_inl(CPM_CLKGR);
#if 1
	cpm_outl(clkgr & ~(1<<19|1<<23|1<<24|1<<25),CPM_CLKGR);
	mdelay(1);
	//cpm_outl(0x27f87ffe,CPM_CLKGR);
#ifdef CONFIG_NAND_DRIVER
	cpm_outl(0x7de87ffe,CPM_CLKGR);
#else
	cpm_outl(0x7df87ffe,CPM_CLKGR);
#endif
	mdelay(1);
#endif
	cpm_pwc_init();
#endif
}

int __init setup_init(void)
{
	cpm_reset();
#ifdef CONFIG_RESET_KEEP_POWER
	reset_keep_power();
#endif
        // CPU on AHB0 & AHB2
        setup_priority(HARB0_IOBASE, 6, 3);
        setup_priority(HARB2_IOBASE, 10, 3);

	return 0;
}
void __cpuinit jzcpu_timer_setup(void);
void __cpuinit jz_clocksource_init(void);
void __init init_all_clk(void);
/* used by linux-mti code */
int coherentio;			/* init to 0, no DMA cache coherency */
int hw_coherentio;		/* init to 0, no HW DMA cache coherency */

void __init plat_mem_setup(void)
{
	/* jz mips cpu special */
	__asm__ (
		"li    $2, 0xa9000000 \n\t"
		"mtc0  $2, $5, 4      \n\t"
		"nop                  \n\t"
		::"r"(2));

	/* use IO_BASE, so that we can use phy addr on hard manual
	 * directly with in(bwlq)/out(bwlq) in io.h.
	 */
	set_io_port_base(IO_BASE);
	ioport_resource.start	= 0x00000000;
	ioport_resource.end	= 0xffffffff;
	iomem_resource.start	= 0x00000000;
	iomem_resource.end	= 0xffffffff;
	setup_init();
	init_all_clk();

#ifdef CONFIG_ANDROID_PMEM
	/* reserve memory for pmem. */
	board_pmem_setup();
#endif
	return;
}

void __init plat_time_init(void)
{
	jzcpu_timer_setup();
	jz_clocksource_init();
}
