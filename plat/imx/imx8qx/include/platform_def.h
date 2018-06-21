/*
 * Copyright (c) 2015-2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __PLATFORM_DEF_H__
#define __PLATFORM_DEF_H__

#define PLATFORM_LINKER_FORMAT		"elf64-littleaarch64"
#define PLATFORM_LINKER_ARCH		aarch64

#define PLATFORM_STACK_SIZE		0x400
#define CACHE_WRITEBACK_GRANULE		64

#define PLAT_PRIMARY_CPU		0x0
#define PLATFORM_MAX_CPU_PER_CLUSTER	4
#define PLATFORM_CLUSTER_COUNT		1
#define PLATFORM_CORE_COUNT		4

#define PWR_DOMAIN_AT_MAX_LVL           1
#define PLAT_MAX_PWR_LVL                2
#define PLAT_MAX_OFF_STATE              2
#define PLAT_MAX_RET_STATE              1

#define BL31_BASE			0x80000000
#define BL31_LIMIT			0x80020000

#define PLAT_VIRT_ADDR_SPACE_SIZE	(1ull << 32)
#define PLAT_PHY_ADDR_SPACE_SIZE	(1ull << 32)

#define MAX_XLAT_TABLES			8
#define MAX_MMAP_REGIONS		8

#define PLAT_GICD_BASE			0x51a00000
#define PLAT_GICD_SIZE			0x10000
#define PLAT_GICR_BASE			0x51b00000
#define PLAT_GICR_SIZE			0xc0000
#define IMX_BOOT_UART_BASE		0x5a060000
#define IMX_BOOT_UART_SIZE		0x1000
#define IMX_BOOT_UART_BAUDRATE		115200
#define IMX_BOOT_UART_CLK_IN_HZ		24000000
#define PLAT_CRASH_UART_BASE		IMX_BOOT_UART_BASE
#define PLAT__CRASH_UART_CLK_IN_HZ	24000000
#define IMX_CONSOLE_BAUDRATE		115200
#define SC_IPC_BASE			0x5d1b0000
#define SC_IPC_SIZE			0x10000

#define COUNTER_FREQUENCY		8000000

/* non-secure u-boot base */
#define PLAT_NS_IMAGE_OFFSET		0x80020000

#define DEBUG_CONSOLE			0
#define DEBUG_CONSOLE_A35		0
#define PLAT_IMX8QX			1

#endif /* __PLATFORM_DEF_H__ */