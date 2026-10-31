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

NV_STATUS NV_API_CALL nv_add_mapping_context_to_file(
    nv_state_t *nv,
    nv_usermap_access_params_t *nvuap,
    NvU32       prot,
    void       *pAllocPriv,
    NvU64       pageIndex,
    NvU32       fd
)
{
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS NV_API_CALL nv_alloc_user_mapping(
    nv_state_t *nv,
    void       *pAllocPrivate,
    NvU64       pageIndex,
    NvU32       pageOffset,
    NvU64       size,
    NvU32       protect,
    NvU64      *pUserAddress,
    void      **ppPrivate
)
{
    return NV_ERR_NOT_SUPPORTED;
}

void NV_API_CALL nv_free_user_mapping(
    nv_state_t *nv,
    void       *pAllocPrivate,
    NvU64       userAddress,
    void       *pPrivate
)
{

}

/* Kernel page cache attributes, independent of user VMAs. */
int nv_encode_caching(
    pgprot_t *prot,
    NvU32     cache_type,
    nv_memory_type_t memory_type
)
{
    pgprot_t tmp;

    if (prot == NULL)
    {
        tmp = __pgprot(0);
        prot = &tmp;
    }

    switch (cache_type)
    {
        case NV_MEMORY_UNCACHED_WEAK:
#if defined(NV_PGPROT_UNCACHED_WEAK)
            *prot = NV_PGPROT_UNCACHED_WEAK(*prot);
            break;
#endif
        case NV_MEMORY_UNCACHED:
            *prot = (memory_type == NV_MEMORY_TYPE_SYSTEM) ?
                    NV_PGPROT_UNCACHED(*prot) :
                    NV_PGPROT_UNCACHED_DEVICE(*prot);
            break;
#if defined(NV_PGPROT_WRITE_COMBINED)
        case NV_MEMORY_DEFAULT:
        case NV_MEMORY_WRITECOMBINED:
            if (NV_ALLOW_WRITE_COMBINING(memory_type))
            {
                *prot = NV_PGPROT_WRITE_COMBINED(*prot);
                break;
            }

            /*
             * If WC support is unavailable, we need to return an error
             * code to the caller, but need not print a warning.
             *
             * For frame buffer memory, callers are expected to use the
             * UC- memory type if we report WC as unsupported, which
             * translates to the effective memory type WC if a WC MTRR
             * exists or else UC.
             */
            return 1;
#endif
        case NV_MEMORY_CACHED:
            if (!NV_ALLOW_CACHING(memory_type))
            {
                nv_printf(NV_DBG_ERRORS,
                    "NVRM: VM: memory type %d does not allow caching!\n",
                    memory_type);
                return 1;
            }
            break;

        default:
            nv_printf(NV_DBG_ERRORS,
                "NVRM: VM: cache type %d not supported for memory type %d!\n",
                cache_type, memory_type);
            return 1;
    }
    return 0;
}

void NV_API_CALL nv_acquire_mmap_lock(
    nv_state_t *nv
)
{
    nv_linux_state_t *nvl = NV_GET_NVL_FROM_NV_STATE(nv);
    down(&nvl->mmap_lock);
}

void NV_API_CALL nv_release_mmap_lock(
    nv_state_t *nv
)
{
    nv_linux_state_t *nvl = NV_GET_NVL_FROM_NV_STATE(nv);
    up(&nvl->mmap_lock);
}

NvBool NV_API_CALL nv_get_all_mappings_revoked_locked(
    nv_state_t *nv
)
{
    nv_linux_state_t *nvl = NV_GET_NVL_FROM_NV_STATE(nv);

    // Caller must hold nvl->mmap_lock for all decisions based on this
    return nvl->all_mappings_revoked;
}


/* No file-backed user mappings exist. Kernel mappings are explicitly owned. */
NV_STATUS NV_API_CALL nv_revoke_gpu_mappings(nv_state_t *nv)
{
    nv_acquire_mmap_lock(nv);
    NV_GET_NVL_FROM_NV_STATE(nv)->all_mappings_revoked = NV_TRUE;
    nv_release_mmap_lock(nv);
    return NV_OK;
}
void NV_API_CALL nv_set_safe_to_mmap_locked(nv_state_t *nv, NvBool safe)
{ NV_GET_NVL_FROM_NV_STATE(nv)->safe_to_mmap = safe; }
