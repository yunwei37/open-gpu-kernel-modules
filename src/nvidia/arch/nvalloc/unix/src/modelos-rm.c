// SPDX-License-Identifier: MIT
#include <nv.h>
#include <os/os.h>
#include <osapi.h>
#include <core/thread_state.h>
#include "rmapi/rmapi.h"

NV_STATUS NV_API_CALL modelos_rm_alloc(nvidia_stack_t *sp, NvHandle client,
    NvHandle parent, NvHandle *object, NvU32 cls, void *params, NvU32 size)
{
    NV_STATUS status; void *fp; RM_API *api;
    NV_ENTER_RM_RUNTIME(sp,fp);
    api = rmapiGetInterface(RMAPI_EXTERNAL_KERNEL);
    status = api->Alloc(api, client, parent, object, cls, params, size);
    NV_EXIT_RM_RUNTIME(sp,fp); return status;
}
NV_STATUS NV_API_CALL modelos_rm_control(nvidia_stack_t *sp, NvHandle client,
    NvHandle object, NvU32 cmd, void *params, NvU32 size)
{
    NV_STATUS status; void *fp; RM_API *api;
    NV_ENTER_RM_RUNTIME(sp,fp);
    api = rmapiGetInterface(RMAPI_EXTERNAL_KERNEL);
    status = api->Control(api, client, object, cmd, params, size);
    NV_EXIT_RM_RUNTIME(sp,fp); return status;
}
NV_STATUS NV_API_CALL modelos_rm_free(nvidia_stack_t *sp, NvHandle client, NvHandle object)
{
    NV_STATUS status; void *fp; RM_API *api;
    NV_ENTER_RM_RUNTIME(sp,fp);
    api = rmapiGetInterface(RMAPI_EXTERNAL_KERNEL);
    status = api->Free(api, client, object);
    NV_EXIT_RM_RUNTIME(sp,fp); return status;
}
NV_STATUS NV_API_CALL modelos_rm_map_cpu(nvidia_stack_t *sp, NvHandle client,
    NvHandle device, NvHandle memory, NvU64 offset, NvU64 length, void **addr, NvU32 flags)
{
    NV_STATUS status; void *fp; RM_API *api;
    NV_ENTER_RM_RUNTIME(sp,fp);
    api = rmapiGetInterface(RMAPI_EXTERNAL_KERNEL);
    status = api->MapToCpu(api, client, device, memory, offset, length, addr, flags);
    NV_EXIT_RM_RUNTIME(sp,fp); return status;
}
NV_STATUS NV_API_CALL modelos_rm_map_dma(nvidia_stack_t *sp, NVOS46_PARAMETERS *params)
{
    NV_STATUS status; void *fp; RM_API *api;
    NV_ENTER_RM_RUNTIME(sp,fp);
    api = rmapiGetInterface(RMAPI_EXTERNAL_KERNEL);
    status = api->Map(api, params);
    NV_EXIT_RM_RUNTIME(sp,fp); return status;
}
