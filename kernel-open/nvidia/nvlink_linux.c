/*
 * SPDX-FileCopyrightText: Copyright (c) 2015-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include "conftest.h"

#include "nvlink_os.h"
#include "nvlink_linux.h"
#include "nvlink_errors.h"
#include "nvlink_export.h"
#include "nvlink_proto.h"
#include "nv-linux.h"

#include "nv-time.h"


#include <linux/module.h>


#include <linux/device.h>
#include <linux/string.h>
#include <linux/mutex.h>

#define MAX_ERROR_STRING           512

/* Kernel NVLink library support, without a device, fd or procfs layer. */
int __init nvlink_core_init(void)
{
    return nvlink_lib_initialize() == NVL_SUCCESS ? 0 : -ENODEV;
}
void nvlink_core_exit(void) { nvlink_lib_unload(); }

void
nvlink_print
(
    const char *file,
    int         line,
    const char *function,
    int         log_level,
    const char *fmt,
    ...
)
{
    va_list arglist;
    char    nv_string[MAX_ERROR_STRING];
    char   *sys_log_level;

    switch (log_level) {
    case NVLINK_DBG_LEVEL_INFO:
        sys_log_level = KERN_INFO;
        break;
    case NVLINK_DBG_LEVEL_SETUP:
        sys_log_level = KERN_DEBUG;
        break;
    case NVLINK_DBG_LEVEL_USERERRORS:
        sys_log_level = KERN_NOTICE;
        break;
    case NVLINK_DBG_LEVEL_WARNINGS:
        sys_log_level = KERN_WARNING;
        break;
    case NVLINK_DBG_LEVEL_ERRORS:
        sys_log_level = KERN_ERR;
        break;
    default:
        sys_log_level = KERN_INFO;
        break;
    }

    va_start(arglist, fmt);
    vsnprintf(nv_string, sizeof(nv_string), fmt, arglist);
    va_end(arglist);

    nv_string[sizeof(nv_string) - 1] = '\0';
    printk("%snvidia-nvlink: %s", sys_log_level, nv_string);
}

void * nvlink_malloc(NvLength size)
{
   return kmalloc(size, GFP_KERNEL);
}

void nvlink_free(void *ptr)
{
    return kfree(ptr);
}

char * nvlink_strcpy(char *dest, const char *src)
{
    return strcpy(dest, src);
}

int nvlink_strcmp(const char *dest, const char *src)
{
    return strcmp(dest, src);
}

NvLength nvlink_strlen(const char *s)
{
    return strlen(s);
}

int nvlink_snprintf(char *dest, NvLength size, const char *fmt, ...)
{
    va_list arglist;
    int chars_written;

    va_start(arglist, fmt);
    chars_written = vsnprintf(dest, size, fmt, arglist);
    va_end(arglist);

    return chars_written;
}

NvU32 nvlink_memRd32(const volatile void * address)
{
    return (*(const volatile NvU32*)(address));
}

void nvlink_memWr32(volatile void *address, NvU32 data)
{
    (*(volatile NvU32 *)(address)) = data;
}

NvU64 nvlink_memRd64(const volatile void * address)
{
    return (*(const volatile NvU64 *)(address));
}

void nvlink_memWr64(volatile void *address, NvU64 data)
{
    (*(volatile NvU64 *)(address)) = data;
}

void * nvlink_memset(void *dest, int value, NvLength size)
{
     return memset(dest, value, size);
}

void * nvlink_memcpy(void *dest, const void *src, NvLength size)
{
    return memcpy(dest, src, size);
}

int nvlink_memcmp(const void *s1, const void *s2, NvLength size)
{
    return memcmp(s1, s2, size);
}

/*
 * Sleep for specified milliseconds. Yields the CPU to scheduler.
 */
void nvlink_sleep(unsigned int ms)
{
    NV_STATUS status;

    status = nv_sleep_ms(ms);

    if (status !=  NV_OK)
    {
        if (printk_ratelimit())
        {
            nvlink_print(NVLINK_DBG_ERRORS, "NVLink: requested sleep duration"
                         " %d msec exceeded %d msec\n",
                         ms, NV_MAX_ISR_DELAY_MS);
            WARN_ON(1);
        }
    }
}

void nvlink_assert(int cond)
{
    if ((cond) == 0x0)
    {
        if (printk_ratelimit())
        {
            nvlink_print(NVLINK_DBG_ERRORS, "NVLink: Assertion failed!\n");
            WARN_ON(1);
        }

        dbg_breakpoint();
    }
}

void * nvlink_allocLock(void)
{
    struct semaphore *sema;

    sema = nvlink_malloc(sizeof(*sema));
    if (sema == NULL)
    {
        nvlink_print(NVLINK_DBG_ERRORS, "Failed to allocate sema!\n");
        return NULL;
    }
    sema_init(sema, 1);

    return sema;
}

void nvlink_acquireLock(void *hLock)
{
    down(hLock);
}

void nvlink_releaseLock(void *hLock)
{
    up(hLock);
}

void nvlink_freeLock(void *hLock)
{
    if (NULL == hLock)
    {
        return;
    }

    NVLINK_FREE(hLock);
}

NvBool nvlink_isLockOwner(void *hLock)
{
    return NV_TRUE;
}

NvlStatus nvlink_acquire_fabric_mgmt_cap(void *osPrivate, NvU64 capDescriptor)
{
    return NVL_ERR_NOT_SUPPORTED;
}

int nvlink_is_fabric_manager(void *osPrivate)
{
    return 0;
}

int nvlink_is_admin(void)
{
    return 1;
}

NvU64 nvlink_get_platform_time(void)
{
    return nv_ktime_get_raw_ns();
}
