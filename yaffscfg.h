/*
 * YAFFS: Yet another Flash File System . A NAND-flash specific file system.
 *
 * Copyright (C) 2002-2011 Aleph One Ltd.
 *   for Toby Churchill Ltd and Brightstar Engineering
 *
 * Created by Charles Manning <charles@aleph1.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License version 2.1 as
 * published by the Free Software Foundation.
 *
 * Note: Only YAFFS headers are LGPL, YAFFS C code is covered by GPL.
 */

/*
 * Header file for using yaffs in an application via
 * a direct interface.
 */


#ifndef __YAFFSCFG_H__
#define __YAFFSCFG_H__


#include "yportenv.h"

#define YAFFSFS_N_HANDLES	100

#define YAFFSFS_N_DSC		20

void yaffsfs_Lock(void);
void yaffsfs_Unlock(void);

u32 yaffsfs_CurrentTime(void);

void yaffsfs_SetError(int err);

void *yaffsfs_malloc(size_t size);
void yaffsfs_free(void *ptr);

int yaffsfs_CheckMemRegion(const void *addr, size_t size, int write_request);

void yaffsfs_OSInitialisation(void);

struct yaffsfs_DeviceConfiguration {
	const YCHAR *prefix;
	struct yaffs_dev *dev;
};


#endif

