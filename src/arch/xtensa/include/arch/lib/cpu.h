/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2018 Intel Corporation. All rights reserved.
 *
 * Author: Rander Wang <rander.wang@linux.intel.com>
 */

#ifdef __SOF_LIB_CPU_H__

#ifndef __ARCH_LIB_CPU_H__
#define __ARCH_LIB_CPU_H__

#include <config.h>
#include <xtensa/config/core-isa.h>

#if CONFIG_SMP

void cpu_alloc_core_context(int id);

void arch_cpu_enable_core(int id);

void arch_cpu_disable_core(int id);

int arch_cpu_is_core_enabled(int id);

#else

static inline void arch_cpu_enable_core(int id) { }

static inline void arch_cpu_disable_core(int id) { }

static inline int arch_cpu_is_core_enabled(int id) { return 1; }

#endif

static inline int arch_cpu_get_id(void)
{
	int prid;
#if XCHAL_HAVE_PRID
	__asm__("rsr.prid %0" : "=a"(prid));
#else
	prid = PLATFORM_MASTER_CORE_ID;
#endif
	return prid;
}

static inline void cpu_write_threadptr(int threadptr)
{
#if XCHAL_HAVE_THREADPTR
	__asm__ __volatile__(
		"wur.threadptr %0" : : "a" (threadptr) : "memory");
#else
#error "Core support for XCHAL_HAVE_THREADPTR is required"
#endif
}

static inline int cpu_read_threadptr(void)
{
	int threadptr;
#if XCHAL_HAVE_THREADPTR
	__asm__ __volatile__(
		"rur.threadptr %0" : "=a"(threadptr));
#else
#error "Core support for XCHAL_HAVE_THREADPTR is required"
#endif
	return threadptr;
}

#endif /* __ARCH_LIB_CPU_H__ */

#else

#error "This file shouldn't be included from outside of sof/lib/cpu.h"

#endif /* __SOF_LIB_CPU_H__ */
