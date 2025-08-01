/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2024 Intel Corporation. All rights reserved.
 */

#ifndef __SOF_LLEXT_MANAGER_H__
#define __SOF_LLEXT_MANAGER_H__

#include <stdbool.h>
#include <stdint.h>

#if CONFIG_LLEXT
#include <rimage/sof/user/manifest.h>

struct comp_dev;
struct comp_driver;
struct comp_ipc_config;

static inline bool module_is_llext(const struct sof_man_module *mod)
{
	return mod->type.load_type == SOF_MAN_MOD_TYPE_LLEXT ||
		mod->type.load_type == SOF_MAN_MOD_TYPE_LLEXT_AUX;
}

uintptr_t llext_manager_allocate_module(const struct comp_ipc_config *ipc_config,
					const void *ipc_specific_config);

int llext_manager_free_module(const uint32_t component_id);

int llext_manager_add_library(uint32_t module_id);

bool comp_is_llext(struct comp_dev *comp);
#else
#define module_is_llext(mod) false
#define llext_manager_allocate_module(ipc_config, ipc_specific_config) 0
#define llext_manager_free_module(component_id) 0
#define llext_manager_add_library(module_id) 0
#define comp_is_llext(comp) false
#endif

#if CONFIG_LLEXT_EXPERIMENTAL && !CONFIG_ADSP_IMR_CONTEXT_SAVE
int llext_manager_store_to_dram(void);
int llext_manager_restore_from_dram(void);
#else
#define llext_manager_store_to_dram() 0
#define llext_manager_restore_from_dram() -ENOSYS
#endif

#endif
