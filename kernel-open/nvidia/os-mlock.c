/*
 * SPDX-FileCopyrightText: Copyright (c) 1999-2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#define  __NO_VERSION__

#include "os-interface.h"
#include "nv-linux.h"

#if defined(NVCPU_FAMILY_X86) && defined(NV_FOLL_LONGTERM_PRESENT) && \
    (defined(NV_PIN_USER_PAGES_HAS_ARGS_VMAS) ||                      \
     defined(NV_GET_USER_PAGES_HAS_VMAS_ARG))
#define NV_NUM_PIN_PAGES_PER_ITERATION 0x80000
#endif

static inline int nv_follow_flavors(struct vm_area_struct *vma,
                                    unsigned long address,
                                    unsigned long *pfn)
{
#if NV_IS_EXPORT_SYMBOL_PRESENT_follow_pfnmap_start
    struct follow_pfnmap_args args = {};
    int rc;

    args.address = address;
    args.vma = vma;

    rc = follow_pfnmap_start(&args);
    if (rc)
        return rc;

    *pfn = args.pfn;

    follow_pfnmap_end(&args);

    return 0;
#elif NV_IS_EXPORT_SYMBOL_PRESENT_follow_pte
    int status = 0;
    spinlock_t *ptl;
    pte_t *ptep;

    if (!(vma->vm_flags & (VM_IO | VM_PFNMAP)))
        return status;

    //
    // The first argument of follow_pte() was changed from
    // mm_struct to vm_area_struct in kernel 6.10.
    //
#if defined(NV_FOLLOW_PTE_ARG1_VMA)
    status = follow_pte(vma, address, &ptep, &ptl);
#else
    status = follow_pte(vma->vm_mm, address, &ptep, &ptl);
#endif
    if (status)
        return status;

#if defined(NV_PTEP_GET_PRESENT)
    *pfn = pte_pfn(ptep_get(ptep));
#else
    *pfn = pte_pfn(READ_ONCE(*ptep));
#endif

    // The lock is acquired inside follow_pte()
    pte_unmap_unlock(ptep, ptl);
    return 0;
#else
    return -1;
#endif // NV_IS_EXPORT_SYMBOL_PRESENT_follow_pfnmap_start
}

static inline int nv_follow_pfn(struct vm_area_struct *vma,
                                unsigned long address,
                                unsigned long *pfn)
{
#if defined(NV_FOLLOW_PFN_PRESENT)
    return follow_pfn(vma, address, pfn);
#else
    return nv_follow_flavors(vma, address, pfn);
#endif
}

/*!
 * @brief Locates the PFNs for a user IO address range, and converts those to
 *        their associated PTEs.
 *
 * @param[in]     vma VMA that contains the virtual address range given by the
 *                    start and page count parameters.
 * @param[in]     start Beginning of the virtual address range of the IO PTEs.
 * @param[in]     page_count Number of pages containing the IO range being
 *                           mapped.
 * @param[in,out] pte_array Storage array for PTE addresses. Must be large
 *                          enough to contain at least page_count pointers.
 *
 * @return NV_OK if the PTEs were identified successfully, error otherwise.
 */
static NV_STATUS get_io_ptes(struct vm_area_struct *vma,
                             NvUPtr start,
                             NvU64 page_count,
                             NvU64 **pte_array)
{
    NvU64 i;
    unsigned long pfn;

    for (i = 0; i < page_count; i++)
    {
        if (nv_follow_pfn(vma, (start + (i * PAGE_SIZE)), &pfn) < 0)
        {
            return NV_ERR_INVALID_ADDRESS;
        }

        pte_array[i] = (NvU64 *)(pfn << PAGE_SHIFT);

        if (i == 0)
            continue;

        //
        // This interface is to be used for contiguous, uncacheable I/O regions.
        // Internally, osCreateOsDescriptorFromIoMemory() checks the user-provided
        // flags against this, and creates a single memory descriptor with the same
        // attributes. This check ensures the actual mapping supplied matches the
        // user's declaration. Ensure the PFNs represent a contiguous range,
        // error if they do not.
        //
        if ((NvU64)pte_array[i] != (((NvU64)pte_array[i-1]) + PAGE_SIZE))
        {
            return NV_ERR_INVALID_ADDRESS;
        }
    }
    return NV_OK;
}

NV_STATUS NV_API_CALL os_lookup_user_io_memory(
    void   *address,
    NvU64   page_count,
    NvU64 **pte_array
)
{
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS NV_API_CALL os_lock_user_pages(
    void   *address,
    NvU64   page_count,
    void  **page_array,
    NvU32   flags
)
{
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS NV_API_CALL os_unlock_user_pages(
    NvU64  page_count,
    void  *page_array,
    NvU32  flags
)
{
    return NV_ERR_NOT_SUPPORTED;
}
