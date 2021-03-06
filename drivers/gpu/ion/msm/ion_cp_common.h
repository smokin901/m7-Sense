/*
 * Copyright (c) 2012, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef ION_CP_COMMON_H
#define ION_CP_COMMON_H

#include <asm-generic/errno-base.h>
#include <linux/msm_ion.h>

#define ION_CP_V1	1
#define ION_CP_V2	2

#if defined(CONFIG_ION_MSM)
int ion_cp_change_chunks_state(unsigned long chunks, unsigned int nchunks,
			unsigned int chunk_size, enum cp_mem_usage usage,
			int lock);

#else
static inline int ion_cp_change_chunks_state(unsigned long chunks,
			unsigned int nchunks, unsigned int chunk_size,
			enum cp_mem_usage usage, int lock)
{
	return -ENODEV;
}
#endif

#endif
