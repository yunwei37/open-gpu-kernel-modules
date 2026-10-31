/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2026 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#include "linux_nvswitch.h"
#include "nv-time.h"
#include <linux/slab.h>
#include <linux/version.h>
#include <linux/ctype.h>
#include <linux/dma-mapping.h>
NvU64
nvswitch_os_get_platform_time
(
    void
)
{
    struct timespec64 ts;

    ktime_get_raw_ts64(&ts);
    return (NvU64) timespec64_to_ns(&ts);
}

//
// Get current time in seconds.nanoseconds
// In this implementation, the time is from epoch time
// (midnight UTC of January 1, 1970).
// This implementation cannot be used for polling loops
// due to clock skew during system startup (bug 3302382,
// 3297170, 3273847, 3277478, 200693329).
// Instead, nvswitch_os_get_platform_time() is used
// for polling loops
//
NvU64
nvswitch_os_get_platform_time_epoch
(
    void
)
{
    struct timespec64 ts;

    ktime_get_real_ts64(&ts);
    return (NvU64) timespec64_to_ns(&ts);
}

void
nvswitch_os_print
(
    const int  log_level,
    const char *fmt,
    ...
)
{
    va_list arglist;
    char   *kern_level;
    char    fmt_printk[NVSWITCH_LOG_BUFFER_SIZE];

    switch (log_level)
    {
        case NVSWITCH_DBG_LEVEL_MMIO:
        case NVSWITCH_DBG_LEVEL_NOISY:
            kern_level = KERN_DEBUG;
            break;
        case NVSWITCH_DBG_LEVEL_INFO:
        case NVSWITCH_DBG_LEVEL_SETUP:
            kern_level = KERN_INFO;
            break;
        case NVSWITCH_DBG_LEVEL_WARN:
            kern_level = KERN_WARNING;
            break;
        case NVSWITCH_DBG_LEVEL_ERROR:
            kern_level = KERN_ERR;
            break;
        default:
            kern_level = KERN_DEFAULT;
            break;
    }

    va_start(arglist, fmt);
    snprintf(fmt_printk, sizeof(fmt_printk), "%s%s", kern_level, fmt);
    vprintk(fmt_printk, arglist);
    va_end(arglist);
}

void
nvswitch_os_report_error
(
    void *os_handle,
    NvU32 error_code,
    const char *fmt,
    ...
)
{
    va_list args;
    va_start(args, fmt);
    vprintk(fmt, args);
    va_end(args);
}

void
nvswitch_os_override_platform
(
    void *os_handle,
    NvBool *rtlsim
)
{
    // Never run on RTL
    *rtlsim = NV_FALSE;
}

NvlStatus
nvswitch_os_read_registery_binary
(
    void *os_handle,
    const char *name,
    NvU8 *data,
    NvU32 length
)
{
    return -NVL_ERR_NOT_SUPPORTED;
}

NvU32
nvswitch_os_get_device_count
(
    void
)
{
    return 0; /* NVSwitch PCI frontend is not registered. */
}

NvlStatus nvswitch_os_read_registry_dword(void *os_handle, const char *name, NvU32 *data)
{ *data = 0; return -NVL_ERR_NOT_SUPPORTED; }
NvBool nvswitch_os_is_uuid_in_blacklist(NvUuid *uuid) { return NV_FALSE; }

NvlStatus
nvswitch_os_alloc_contig_memory
(
    void *os_handle,
    void **virt_addr,
    NvU32 size,
    NvBool force_dma32
)
{
    NvU32 gfp_flags;
    unsigned long nv_gfp_addr = 0;

    if (!virt_addr)
        return -NVL_BAD_ARGS;

    gfp_flags = GFP_KERNEL | (force_dma32 ? GFP_DMA32 : 0);
    NV_GET_FREE_PAGES(nv_gfp_addr, get_order(size), gfp_flags);

    if(!nv_gfp_addr)
    {
        pr_err("nvidia-nvswitch: unable to allocate kernel memory\n");
        return -NVL_NO_MEM;
    }

    *virt_addr = (void *)nv_gfp_addr;

    return NVL_SUCCESS;
}

void
nvswitch_os_free_contig_memory
(
    void *os_handle,
    void *virt_addr,
    NvU32 size
)
{
    NV_FREE_PAGES((unsigned long)virt_addr, get_order(size));
}

static inline int
_nvswitch_to_pci_dma_direction
(
    NvU32 direction
)
{
    if (direction == NVSWITCH_DMA_DIR_TO_SYSMEM)
        return DMA_FROM_DEVICE;
    else if (direction == NVSWITCH_DMA_DIR_FROM_SYSMEM)
        return DMA_TO_DEVICE;
    else
        return DMA_BIDIRECTIONAL;
}

NvlStatus
nvswitch_os_map_dma_region
(
    void *os_handle,
    void *cpu_addr,
    NvU64 *dma_handle,
    NvU32 size,
    NvU32 direction
)
{
    int dma_dir;
    struct pci_dev *pdev = (struct pci_dev *)os_handle;

    if (!pdev || !cpu_addr || !dma_handle)
        return -NVL_BAD_ARGS;

    dma_dir = _nvswitch_to_pci_dma_direction(direction);

    *dma_handle = (NvU64)dma_map_single(&pdev->dev, cpu_addr, size, dma_dir);

    if (dma_mapping_error(&pdev->dev, *dma_handle))
    {
        pr_err("nvidia-nvswitch: unable to create PCI DMA mapping\n");
        return -NVL_ERR_GENERIC;
    }

    return NVL_SUCCESS;
}

NvlStatus
nvswitch_os_unmap_dma_region
(
    void *os_handle,
    void *cpu_addr,
    NvU64 dma_handle,
    NvU32 size,
    NvU32 direction
)
{
    int dma_dir;
    struct pci_dev *pdev = (struct pci_dev *)os_handle;

    if (!pdev || !cpu_addr)
        return -NVL_BAD_ARGS;

    dma_dir = _nvswitch_to_pci_dma_direction(direction);

    dma_unmap_single(&pdev->dev, dma_handle, size, dma_dir);

    return NVL_SUCCESS;
}

NvlStatus
nvswitch_os_set_dma_mask
(
    void *os_handle,
    NvU32 dma_addr_width
)
{
    struct pci_dev *pdev = (struct pci_dev *)os_handle;

    if (!pdev)
        return -NVL_BAD_ARGS;

    if (dma_set_mask(&pdev->dev, DMA_BIT_MASK(dma_addr_width)))
        return -NVL_ERR_GENERIC;

    return NVL_SUCCESS;
}

NvlStatus
nvswitch_os_sync_dma_region_for_cpu
(
    void *os_handle,
    NvU64 dma_handle,
    NvU32 size,
    NvU32 direction
)
{
    int dma_dir;
    struct pci_dev *pdev = (struct pci_dev *)os_handle;

    if (!pdev)
        return -NVL_BAD_ARGS;

    dma_dir = _nvswitch_to_pci_dma_direction(direction);

    dma_sync_single_for_cpu(&pdev->dev, dma_handle, size, dma_dir);

    return NVL_SUCCESS;
}

NvlStatus
nvswitch_os_sync_dma_region_for_device
(
    void *os_handle,
    NvU64 dma_handle,
    NvU32 size,
    NvU32 direction
)
{
    int dma_dir;
    struct pci_dev *pdev = (struct pci_dev *)os_handle;

    if (!pdev)
        return -NVL_BAD_ARGS;

    dma_dir = _nvswitch_to_pci_dma_direction(direction);

    dma_sync_single_for_device(&pdev->dev, dma_handle, size, dma_dir);

    return NVL_SUCCESS;
}

static inline void *
_nvswitch_os_malloc
(
    NvLength size
)
{
    void *ptr = NULL;

    if (!NV_MAY_SLEEP())
    {
        if (size <= NVSWITCH_KMALLOC_LIMIT)
        {
            ptr = kmalloc(size, NV_GFP_ATOMIC);
        }
    }
    else
    {
        if (size <= NVSWITCH_KMALLOC_LIMIT)
        {
            ptr = kmalloc(size, NV_GFP_NO_OOM);
        }

        if (ptr == NULL)
        {
            ptr = vmalloc(size);
        }
    }

    return ptr;
}

void *
nvswitch_os_malloc_trace
(
    NvLength size,
    const char *file,
    NvU32 line
)
{
#if defined(NV_MEM_LOGGER)
    void *ptr = _nvswitch_os_malloc(size);
    if (ptr)
    {
        nv_memdbg_add(ptr, size, file, line);
    }

    return ptr;
#else
    return _nvswitch_os_malloc(size);
#endif
}

static inline void
_nvswitch_os_free
(
    void *ptr
)
{
    if (!ptr)
        return;

    if (is_vmalloc_addr(ptr))
    {
        vfree(ptr);
    }
    else
    {
        kfree(ptr);
    }
}

void
nvswitch_os_free
(
    void *ptr
)
{
#if defined (NV_MEM_LOGGER)
    if (ptr == NULL)
        return;

    nv_memdbg_remove(ptr, 0, NULL, 0);

    return _nvswitch_os_free(ptr);
#else
    return _nvswitch_os_free(ptr);
#endif
}

NvLength
nvswitch_os_strlen
(
    const char *str
)
{
    return strlen(str);
}

int
nvswitch_os_strncmp
(
    const char *s1,
    const char *s2,
    NvLength length
)
{
    return strncmp(s1, s2, length);
}

char*
nvswitch_os_strncat
(
    char *s1,
    const char *s2,
    NvLength length
)
{
    return strncat(s1, s2, length);
}

void *
nvswitch_os_memset
(
    void *dest,
    int value,
    NvLength size
)
{
     return memset(dest, value, size);
}

void *
nvswitch_os_memcpy
(
    void *dest,
    const void *src,
    NvLength size
)
{
    return memcpy(dest, src, size);
}

int
nvswitch_os_memcmp
(
    const void *s1,
    const void *s2,
    NvLength size
)
{
    return memcmp(s1, s2, size);
}

NvU32
nvswitch_os_mem_read32
(
    const volatile void * address
)
{
    return (*(const volatile NvU32*)(address));
}

void
nvswitch_os_mem_write32
(
    volatile void *address,
    NvU32 data
)
{
    (*(volatile NvU32 *)(address)) = data;
}

NvU64
nvswitch_os_mem_read64
(
    const volatile void * address
)
{
    return (*(const volatile NvU64 *)(address));
}

void
nvswitch_os_mem_write64
(
    volatile void *address,
    NvU64 data
)
{
    (*(volatile NvU64 *)(address)) = data;
}

int
nvswitch_os_snprintf
(
    char *dest,
    NvLength size,
    const char *fmt,
    ...
)
{
    va_list arglist;
    int chars_written;

    va_start(arglist, fmt);
    chars_written = vsnprintf(dest, size, fmt, arglist);
    va_end(arglist);

    return chars_written;
}

int
nvswitch_os_vsnprintf
(
    char *buf,
    NvLength size,
    const char *fmt,
    va_list arglist
)
{
    return vsnprintf(buf, size, fmt, arglist);
}

void
nvswitch_os_assert_log
(
    const char *fmt,
    ...
)
{
    if (printk_ratelimit())
    {
        va_list arglist;
        char fmt_printk[NVSWITCH_LOG_BUFFER_SIZE];

        va_start(arglist, fmt);
        vsnprintf(fmt_printk, sizeof(fmt_printk), fmt, arglist);
        va_end(arglist);
        nvswitch_os_print(NVSWITCH_DBG_LEVEL_ERROR, "%s", fmt_printk);
        WARN_ON(1);
     }
     os_dbg_breakpoint();
}

/*
 * Sleep for specified milliseconds. Yields the CPU to scheduler.
 */
void
nvswitch_os_sleep
(
    unsigned int ms
)
{
    NV_STATUS status;
    status = nv_sleep_ms(ms);

    if (status != NV_OK)
    {
        if (printk_ratelimit())
        {
            nvswitch_os_print(NVSWITCH_DBG_LEVEL_ERROR, "NVSwitch: requested"
                              " sleep duration %d msec exceeded %d msec\n",
                              ms, NV_MAX_ISR_DELAY_MS);
            WARN_ON(1);
        }
    }
}

NvlStatus
nvswitch_os_acquire_fabric_mgmt_cap
(
    void *osPrivate,
    NvU64 capDescriptor
)
{
    return -NVL_ERR_NOT_SUPPORTED;
}

int
nvswitch_os_is_fabric_manager
(
    void *osPrivate
)
{
    return 0;
}

int
nvswitch_os_is_admin
(
    void
)
{
    return 1; /* Trusted kernel owner. */
}

#define NV_KERNEL_RELEASE    ((LINUX_VERSION_CODE >> 16) & 0x0ff)
#define NV_KERNEL_VERSION    ((LINUX_VERSION_CODE >> 8)  & 0x0ff)
#define NV_KERNEL_SUBVERSION ((LINUX_VERSION_CODE)       & 0x0ff)

NvlStatus
nvswitch_os_get_os_version
(
    NvU32 *pMajorVer,
    NvU32 *pMinorVer,
    NvU32 *pBuildNum
)
{
    if (pMajorVer)
        *pMajorVer = NV_KERNEL_RELEASE;
    if (pMinorVer)
        *pMinorVer = NV_KERNEL_VERSION;
    if (pBuildNum)
        *pBuildNum = NV_KERNEL_SUBVERSION;

    return NVL_SUCCESS;
}

/*!
 * @brief: OS specific handling to add an event.
 */
NvlStatus
nvswitch_os_add_client_event
(
    void            *osHandle,
    void            *osPrivate,
    NvU32           eventId
)
{
    return -NVL_ERR_NOT_SUPPORTED;
}

/*!
 * @brief: OS specific handling to remove all events corresponding to osPrivate.
 */
NvlStatus
nvswitch_os_remove_client_event
(
    void            *osHandle,
    void            *osPrivate
)
{
    return -NVL_ERR_NOT_SUPPORTED;
}

/*!
 * @brief: OS specific handling to notify an event.
 */
NvlStatus
nvswitch_os_notify_client_event
(
    void *osHandle,
    void *osPrivate,
    NvU32 eventId
)
{
    return -NVL_ERR_NOT_SUPPORTED;
}

/*!
 * @brief: Gets OS specific support for the REGISTER_EVENTS ioctl
 */
NvlStatus
nvswitch_os_get_supported_register_events_params
(
    NvBool *many_events,
    NvBool *os_descriptor
)
{
    *many_events   = NV_FALSE;
    *os_descriptor = NV_FALSE;
    return NVL_SUCCESS;
}

NvlStatus
nvswitch_os_get_pid
(
    NvU32 *pPid
)
{
    if (pPid != NULL)
    {
        *pPid = task_pid_nr(current);
    }
    
    return NVL_SUCCESS;
}

int nvswitch_init(void) { return 0; }
void nvswitch_exit(void) {}
