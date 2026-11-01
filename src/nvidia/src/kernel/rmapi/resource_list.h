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

//
// No include guards - this file is included multiple times, each time with a
// different definition for RS_ENTRY
//
// Some of those definitions of RS_ENTRY may depend on declarations in various
// other header files. Include "resource_list_required_includes.h" to pull them
// in.
//

//
// Table describing all RsResource subclasses.
//
// Internal Class - there is a RM internal class representing all classes
// exported to RM clients. The internal name of the class should be similar to
// the symbolic name used by clients. If there is ambiguity between RM internal
// classes, e.g.: between the PMU engine (OBJPMU) and the exported class, it's
// recommended to use Api as the suffix to disambiguate; for example, OBJPMU
// (the engine) vs PmuApi (the per-client api object). It's also recommended to
// avoid using Object, Resource, etc as those terms don't improve clarity.
// If there is no ambiguity, there is no need to add the Api suffix; for example,
// Channel is preferred over ChannelApi (there is no other Channel object in
// RM).
//
// Multi-Instance - NV_TRUE if there can be multiple instances of this object's
// *internal* class id under a parent.
//
// This list should eventually replace the similar lists in nvapi.c and
// rmctrl.c. The number of fields in the table should be kept minimal, just
// enough to create the object, with as much of the detail being specified
// within the class itself.
//
// In the future we should consider switching to a registration approach or
// generating with NVOC and/or annotating the class definition.
//
// RS-TODO: Rename classes that have 'Object' in their names
//



RS_ENTRY(
    /* External Class         */ NV01_ROOT,
    /* Internal Class         */ RmClientResource,
    /* Multi-Instance         */ NV_FALSE,
    /* Parents                */ RS_ROOT_OBJECT,
    /* Alloc Param Info       */ RS_OPTIONAL(NvHandle),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_ALLOC | RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_DUP |
                                 RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV_EVENT_BUFFER,
    /* Internal Class         */ EventBuffer,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(RmClientResource)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_EVENT_BUFFER_ALLOC_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV_OPERATIONAL_EVENT_BUFFER_BIND,
    /* Internal Class         */ OpEventBufferBind,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(RmClientResource)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_OPERATIONAL_EVENT_BUFFER_BIND_ALLOC_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV01_DEVICE_0,
    /* Internal Class         */ Device,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(RmClientResource)),
    /* Alloc Param Info       */ RS_OPTIONAL(NV0080_ALLOC_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
    /* Channels can have a CHANNEL_GROUP, a DEVICE, or a CONTEXT_SHARE (starting in Volta) as parents */
    /* RS-TODO: Update channel parent list when CONTEXT_SHARE is added */
RS_ENTRY(
    /* External Class         */ KEPLER_CHANNEL_GPFIFO_A,
    /* Internal Class         */ KernelChannel,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device), classId(KernelChannelGroupApi)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_CHANNEL_ALLOC_PARAMS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_HIGH,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_FREE |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ VOLTA_CHANNEL_GPFIFO_A,
    /* Internal Class         */ KernelChannel,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device), classId(KernelChannelGroupApi)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_CHANNEL_ALLOC_PARAMS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_HIGH,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_FREE |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ BLACKWELL_CHANNEL_GPFIFO_A,
    /* Internal Class         */ KernelChannel,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device), classId(KernelChannelGroupApi)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_CHANNEL_ALLOC_PARAMS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_HIGH,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_FREE |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ BLACKWELL_CHANNEL_GPFIFO_B,
    /* Internal Class         */ KernelChannel,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device), classId(KernelChannelGroupApi)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_CHANNEL_ALLOC_PARAMS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_HIGH,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_FREE |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ FERMI_CONTEXT_SHARE_A,
    /* Internal Class         */ KernelCtxShareApi,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(KernelChannelGroupApi)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_CTXSHARE_ALLOCATION_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPU_GROUP_LOCK |
                                 RS_FLAGS_ALLOC_RPC_TO_ALL | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ KERNEL_WATCHDOG,
    /* Internal Class         */ KernelWatchdog,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Subdevice)),
    /* Alloc Param Info       */ RS_NONE,
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_INTERNAL_ONLY,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ KERNEL_GRAPHICS_CONTEXT,
    /* Internal Class         */ KernelGraphicsContext,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(KernelChannelGroupApi), classId(KernelChannel)),
    /* Alloc Param Info       */ RS_NONE,
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPU_GROUP_LOCK |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_INTERNAL_ONLY |
                                 RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV20_SUBDEVICE_0,
    /* Internal Class         */ Subdevice,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device)),
    /* Alloc Param Info       */ RS_OPTIONAL(NV2080_ALLOC_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ KEPLER_CHANNEL_GROUP_A,
    /* Internal Class         */ KernelChannelGroupApi,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_CHANNEL_GROUP_ALLOCATION_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_HIGH,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_FREE |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV01_MEMORY_LOCAL_USER,
    /* Internal Class         */ VideoMemory,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device), classId(Subdevice)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_MEMORY_ALLOCATION_PARAMS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_FREE |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV01_MEMORY_LOCAL_PHYSICAL,
    /* Internal Class         */ PhysicalMemory,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_PHYSICAL_MEMORY_ALLOCATION_PARAMS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_PRIVILEGED | RS_FLAGS_ALLOC_CPU_PLUGIN_FOR_SRIOV | RS_FLAGS_ACQUIRE_GPUS_LOCK,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV50_MEMORY_VIRTUAL,
    /* Internal Class         */ VirtualMemory,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_MEMORY_ALLOCATION_PARAMS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_FREE |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV01_MEMORY_SYSTEM,
    /* Internal Class         */ SystemMemory,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_MEMORY_ALLOCATION_PARAMS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_FREE |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV01_MEMORY_VIRTUAL,
    /* Internal Class         */ VirtualMemoryRange,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_MEMORY_VIRTUAL_ALLOCATION_PARAMS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK |
                                 RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ FERMI_VASPACE_A,
    /* Internal Class         */ VaSpaceApi,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Device), classId(Subdevice)),
    /* Alloc Param Info       */ RS_REQUIRED(NV_VASPACE_ALLOCATION_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_FREE |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
    /* Subdevice Children: */
RS_ENTRY(
    /* External Class         */ NV50_THIRD_PARTY_P2P,
    /* Internal Class         */ ThirdPartyP2P,
    /* Multi-Instance         */ NV_FALSE,
    /* Parents                */ RS_LIST(classId(Subdevice)),
    /* Alloc Param Info       */ RS_OPTIONAL(NV503C_ALLOC_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK | RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV40_I2C,
    /* Internal Class         */ I2cApi,
    /* Multi-Instance         */ NV_FALSE,
    /* Parents                */ RS_LIST(classId(Subdevice)),
    /* Alloc Param Info       */ RS_NONE,
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK | RS_FLAGS_ALLOC_RPC_TO_PHYS_RM,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ HOPPER_USERMODE_A,
    /* Internal Class         */ UserModeApi,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(Subdevice)),
    /* Alloc Param Info       */ RS_OPTIONAL(NV_HOPPER_USERMODE_A_PARAMS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK,
    /* Required Access Rights */ RS_ACCESS_NONE
)
    /* Display classes: */
RS_ENTRY(
    /* External Class         */ NV04_DISPLAY_COMMON,
    /* Internal Class         */ DispCommon,
    /* Multi-Instance         */ NV_FALSE,
    /* Parents                */ RS_LIST(classId(Device)),
    /* Alloc Param Info       */ RS_NONE,
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK_ON_FREE | RS_FLAGS_ALLOC_RPC_TO_ALL,
    /* Required Access Rights */ RS_ACCESS_NONE
)

    /* Classes allocated under channel: */
RS_ENTRY(
    /* External Class         */ BLACKWELL_DMA_COPY_B,
    /* Internal Class         */ KernelCeContext,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(KernelChannel)),
    /* Alloc Param Info       */ RS_OPTIONAL(NVB0B5_ALLOCATION_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_CHANNEL_DESCENDANT_COMMON |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)

RS_ENTRY(
    /* External Class         */ BLACKWELL_B,
    /* Internal Class         */ KernelGraphicsObject,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(KernelChannel)),
    /* Alloc Param Info       */ RS_OPTIONAL(NV_GR_ALLOCATION_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_CHANNEL_DESCENDANT_COMMON |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ FERMI_TWOD_A,
    /* Internal Class         */ KernelGraphicsObject,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_LIST(classId(KernelChannel)),
    /* Alloc Param Info       */ RS_OPTIONAL(NV_GR_ALLOCATION_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_CHANNEL_DESCENDANT_COMMON |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_ALLOC_GSP_PLUGIN_FOR_VGPU_GSP,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV01_CONTEXT_DMA,
    /* Internal Class         */ ContextDma,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_ANY_PARENT,
    /* Alloc Param Info       */ RS_REQUIRED(NV_CONTEXT_DMA_ALLOCATION_PARAMS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK,
    /* Required Access Rights */ RS_ACCESS_NONE
)
RS_ENTRY(
    /* External Class         */ NV01_EVENT_KERNEL_CALLBACK_EX,
    /* Internal Class         */ EventApi,
    /* Multi-Instance         */ NV_TRUE,
    /* Parents                */ RS_ANY_PARENT,
    /* Alloc Param Info       */ RS_REQUIRED(NV0005_ALLOC_PARAMETERS),
    /* Resource Free Priority */ RS_FREE_PRIORITY_DEFAULT,
    /* Flags                  */ RS_FLAGS_ALLOC_NON_PRIVILEGED | RS_FLAGS_ACQUIRE_GPUS_LOCK |
                                 RS_FLAGS_ACQUIRE_RO_API_LOCK_ON_ALLOC | RS_FLAGS_DUAL_CLIENT_LOCK,
    /* Required Access Rights */ RS_ACCESS_NONE
)
#if RMCFG_CLASS_NV_CE_UTILS && (defined(DEBUG) || defined(DEVELOP))
#endif



// Undefine the entry macro to simplify call sites
#undef RS_ENTRY
