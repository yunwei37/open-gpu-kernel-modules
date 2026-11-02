#define NVOC_SUBDEVICE_H_PRIVATE_ACCESS_ALLOWED

// Version of generated metadata structures
#ifdef NVOC_METADATA_VERSION
#undef NVOC_METADATA_VERSION
#endif
#define NVOC_METADATA_VERSION 2

#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_subdevice_nvoc.h"


#ifdef DEBUG
char __nvoc_class_id_uniqueness_check__4b01b3 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Subdevice;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_GpuResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_INotifier;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Notifier;

// Forward declarations for Subdevice
void __nvoc_init__GpuResource(GpuResource*);
void __nvoc_init__Notifier(Notifier*);
void __nvoc_init__Subdevice(Subdevice*, RmHalspecOwner *pRmhalspecowner, GpuHalspecOwner *pGpuhalspecowner);
void __nvoc_init_funcTable_Subdevice(Subdevice*, RmHalspecOwner *pRmhalspecowner, GpuHalspecOwner *pGpuhalspecowner);
NV_STATUS __nvoc_ctor_Subdevice(Subdevice*, RmHalspecOwner *pRmhalspecowner, GpuHalspecOwner *pGpuhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);
void __nvoc_init_dataField_Subdevice(Subdevice*, RmHalspecOwner *pRmhalspecowner, GpuHalspecOwner *pGpuhalspecowner);
void __nvoc_dtor_Subdevice(Dynamic*);

// Structures used within RTTI (run-time type information)
extern const struct NVOC_CASTINFO __nvoc_castinfo__Subdevice;
extern const struct NVOC_EXPORT_INFO __nvoc_export_info__Subdevice;

// Down-thunk(s) to bridge Subdevice methods from ancestors (if any)
NvBool __nvoc_down_thunk_RmResource_resAccessCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super^2
NvBool __nvoc_down_thunk_RmResource_resShareCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControlSerialization_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControlSerialization_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControl_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControl_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_down_thunk_GpuResource_resControl(struct RsResource *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_down_thunk_GpuResource_resMap(struct RsResource *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, struct RsCpuMapping *pCpuMapping);    // super
NV_STATUS __nvoc_down_thunk_GpuResource_resUnmap(struct RsResource *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RsCpuMapping *pCpuMapping);    // super
NvBool __nvoc_down_thunk_GpuResource_rmresShareCallback(struct RmResource *pGpuResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super
PEVENTNOTIFICATION * __nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr(struct INotifier *pNotifier);    // super
struct NotifShare * __nvoc_down_thunk_Notifier_inotifyGetNotificationShare(struct INotifier *pNotifier);    // super
void __nvoc_down_thunk_Notifier_inotifySetNotificationShare(struct INotifier *pNotifier, struct NotifShare *pNotifShare);    // super
NV_STATUS __nvoc_down_thunk_Notifier_inotifyUnregisterEvent(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // super
NV_STATUS __nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // super
void __nvoc_down_thunk_Subdevice_resPreDestruct(struct RsResource *pResource);    // this
NV_STATUS __nvoc_down_thunk_Subdevice_gpuresInternalControlForward(struct GpuResource *pSubdevice, NvU32 command, void *pParams, NvU32 size);    // this

// Up-thunk(s) to bridge Subdevice methods to ancestors (if any)
NvBool __nvoc_up_thunk_RsResource_rmresCanCopy(struct RmResource *pResource);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresIsDuplicate(struct RmResource *pResource, NvHandle hMemory, NvBool *pDuplicate);    // super^2
void __nvoc_up_thunk_RsResource_rmresPreDestruct(struct RmResource *pResource);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresControl(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresControlFilter(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresMap(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresUnmap(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // super^2
NvBool __nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported(struct RmResource *pResource);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresMapTo(struct RmResource *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // super^2
NV_STATUS __nvoc_up_thunk_RsResource_rmresUnmapFrom(struct RmResource *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // super^2
NvU32 __nvoc_up_thunk_RsResource_rmresGetRefCount(struct RmResource *pResource);    // super^2
void __nvoc_up_thunk_RsResource_rmresAddAdditionalDependants(struct RsClient *pClient, struct RmResource *pResource, RsResourceRef *pReference);    // super^2
NvBool __nvoc_up_thunk_RmResource_gpuresAccessCallback(struct GpuResource *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super
NV_STATUS __nvoc_up_thunk_RmResource_gpuresGetMemInterMapParams(struct GpuResource *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RmResource_gpuresCheckMemInterUnmap(struct GpuResource *pRmResource, NvBool bSubdeviceHandleProvided);    // super
NV_STATUS __nvoc_up_thunk_RmResource_gpuresGetMemoryMappingDescriptor(struct GpuResource *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // super
NV_STATUS __nvoc_up_thunk_RmResource_gpuresControlSerialization_Prologue(struct GpuResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_up_thunk_RmResource_gpuresControlSerialization_Epilogue(struct GpuResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RmResource_gpuresControl_Prologue(struct GpuResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_up_thunk_RmResource_gpuresControl_Epilogue(struct GpuResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NvBool __nvoc_up_thunk_RsResource_gpuresCanCopy(struct GpuResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_gpuresIsDuplicate(struct GpuResource *pResource, NvHandle hMemory, NvBool *pDuplicate);    // super
void __nvoc_up_thunk_RsResource_gpuresPreDestruct(struct GpuResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_gpuresControlFilter(struct GpuResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NvBool __nvoc_up_thunk_RsResource_gpuresIsPartialUnmapSupported(struct GpuResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_gpuresMapTo(struct GpuResource *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_gpuresUnmapFrom(struct GpuResource *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // super
NvU32 __nvoc_up_thunk_RsResource_gpuresGetRefCount(struct GpuResource *pResource);    // super
void __nvoc_up_thunk_RsResource_gpuresAddAdditionalDependants(struct RsClient *pClient, struct GpuResource *pResource, RsResourceRef *pReference);    // super
NV_STATUS __nvoc_up_thunk_GpuResource_subdeviceControl(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_GpuResource_subdeviceMap(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, struct RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_up_thunk_GpuResource_subdeviceUnmap(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RsCpuMapping *pCpuMapping);    // this
NvBool __nvoc_up_thunk_GpuResource_subdeviceShareCallback(struct Subdevice *pGpuResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // this
NV_STATUS __nvoc_up_thunk_GpuResource_subdeviceGetRegBaseOffsetAndSize(struct Subdevice *pGpuResource, struct OBJGPU *pGpu, NvU32 *pOffset, NvU32 *pSize);    // this
NV_STATUS __nvoc_up_thunk_GpuResource_subdeviceGetMapAddrSpace(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, NvU32 mapFlags, NV_ADDRESS_SPACE *pAddrSpace);    // this
NvHandle __nvoc_up_thunk_GpuResource_subdeviceGetInternalObjectHandle(struct Subdevice *pGpuResource);    // this
NvBool __nvoc_up_thunk_RmResource_subdeviceAccessCallback(struct Subdevice *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // this
NV_STATUS __nvoc_up_thunk_RmResource_subdeviceGetMemInterMapParams(struct Subdevice *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_subdeviceCheckMemInterUnmap(struct Subdevice *pRmResource, NvBool bSubdeviceHandleProvided);    // this
NV_STATUS __nvoc_up_thunk_RmResource_subdeviceGetMemoryMappingDescriptor(struct Subdevice *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // this
NV_STATUS __nvoc_up_thunk_RmResource_subdeviceControlSerialization_Prologue(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_subdeviceControlSerialization_Epilogue(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_subdeviceControl_Prologue(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_subdeviceControl_Epilogue(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_subdeviceCanCopy(struct Subdevice *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_subdeviceIsDuplicate(struct Subdevice *pResource, NvHandle hMemory, NvBool *pDuplicate);    // this
NV_STATUS __nvoc_up_thunk_RsResource_subdeviceControlFilter(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_subdeviceIsPartialUnmapSupported(struct Subdevice *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_subdeviceMapTo(struct Subdevice *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_subdeviceUnmapFrom(struct Subdevice *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // this
NvU32 __nvoc_up_thunk_RsResource_subdeviceGetRefCount(struct Subdevice *pResource);    // this
void __nvoc_up_thunk_RsResource_subdeviceAddAdditionalDependants(struct RsClient *pClient, struct Subdevice *pResource, RsResourceRef *pReference);    // this
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_subdeviceGetNotificationListPtr(struct Subdevice *pNotifier);    // this
struct NotifShare * __nvoc_up_thunk_Notifier_subdeviceGetNotificationShare(struct Subdevice *pNotifier);    // this
void __nvoc_up_thunk_Notifier_subdeviceSetNotificationShare(struct Subdevice *pNotifier, struct NotifShare *pNotifShare);    // this
NV_STATUS __nvoc_up_thunk_Notifier_subdeviceUnregisterEvent(struct Subdevice *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // this
NV_STATUS __nvoc_up_thunk_Notifier_subdeviceGetOrAllocNotifShare(struct Subdevice *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // this

// Class-specific details for Subdevice
const struct NVOC_CLASS_DEF __nvoc_class_def_Subdevice = 
{
    .classInfo.size =               sizeof(Subdevice),
    .classInfo.classId =            classId(Subdevice),
    .classInfo.visibility =         NVOC_EVENT_VISIBILITY_NONEVENT,
    .classInfo.providerId =         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
    .classInfo.name =               "Subdevice",
#endif
    .objCreatefn =        &__nvoc_objCreateDynamic_Subdevice,
    .pCastInfo =          &__nvoc_castinfo__Subdevice,
    .pExportInfo =        &__nvoc_export_info__Subdevice
};

// By default, all exported methods are enabled.
#if !defined(NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG)
#define NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(x)      (0)
#endif

// Exported trampoline function definitions
#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00060048u)
static NV_STATUS subdeviceCtrlCmdBiosGetInfoV2__EXPORT(void *pSubdevice, void *pBiosInfoParams) {
    return subdeviceCtrlCmdBiosGetInfoV2_DISPATCH(pSubdevice, pBiosInfoParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00060048u)


















#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00010518u)
static NV_STATUS subdeviceCtrlCmdBusGetPciBarInfo__EXPORT(void *pSubdevice, void *pBarInfoParams) {
    return subdeviceCtrlCmdBusGetPciBarInfo_IMPL(pSubdevice, pBarInfoParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00010518u)












































































































































#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0005c0c0u)
static NV_STATUS subdeviceCtrlCmdMemSysGetStaticConfig__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdMemSysGetStaticConfig_DISPATCH(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0005c0c0u)




#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdMemSysL2InvalidateEvict__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdMemSysL2InvalidateEvict_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)




































#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0005c040u)
static NV_STATUS subdeviceCtrlCmdFifoGetDeviceInfoTable__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdFifoGetDeviceInfoTable_DISPATCH(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0005c040u)






#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000001d8u)
static NV_STATUS subdeviceCtrlCmdInternalFifoGetNumChannels__EXPORT(void *pSubdevice, void *pNumChannelsParams) {
    return subdeviceCtrlCmdInternalFifoGetNumChannels_IMPL(pSubdevice, pNumChannelsParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000001d8u)
















































#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetInfo_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000100c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetCaps__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetCaps_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000100c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetGlobalSmOrder__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetGlobalSmOrder_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetFloorsweepingMasks__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetFloorsweepingMasks_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetPpcMasks__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetPpcMasks_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetZcullInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetZcullInfo_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetRopInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetRopInfo_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c1c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetContextBuffersInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetContextBuffersInfo_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c1c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifier__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifier_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifierV2__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifierV2_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetSmIssueThrottleCtrl__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetSmIssueThrottleCtrl_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetFecsRecordSize__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetFecsRecordSize_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetFecsTraceDefines__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetFecsTraceDefines_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)
static NV_STATUS subdeviceCtrlCmdKGrInternalStaticGetPdbProperties__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdKGrInternalStaticGetPdbProperties_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c0c0u)









#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00030118u)
static NV_STATUS subdeviceCtrlCmdGpuGetInfoV2__EXPORT(void *pSubdevice, void *pGpuInfoParams) {
    return subdeviceCtrlCmdGpuGetInfoV2_IMPL(pSubdevice, pGpuInfoParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00030118u)
































#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00000448u)
static NV_STATUS subdeviceCtrlCmdGpuGetOEMBoardInfo__EXPORT(void *pSubdevice, void *pBoardInfo) {
    return subdeviceCtrlCmdGpuGetOEMBoardInfo_IMPL(pSubdevice, pBoardInfo);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00000448u)




























#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00010018u)
static NV_STATUS subdeviceCtrlCmdGpuGetMaxSupportedPageSize__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdGpuGetMaxSupportedPageSize_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00010018u)
















#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00010048u)
static NV_STATUS subdeviceCtrlCmdGpuGetConstructedFalconInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdGpuGetConstructedFalconInfo_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00010048u)



















#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00010118u)
static NV_STATUS subdeviceCtrlCmdEventSetNotification__EXPORT(void *pSubdevice, void *pSetEventParams) {
    return subdeviceCtrlCmdEventSetNotification_IMPL(pSubdevice, pSetEventParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00010118u)










































#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00000004u)
static NV_STATUS subdeviceCtrlCmdCeUpdatePceLceMappingsV2__EXPORT(void *pSubdevice, void *pCeUpdatePceLceMappingsParams) {
    return subdeviceCtrlCmdCeUpdatePceLceMappingsV2_KERNEL(pSubdevice, pCeUpdatePceLceMappingsParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00000004u)


#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000100c0u)
static NV_STATUS subdeviceCtrlCmdCeGetPceConfigForLceType__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdCeGetPceConfigForLceType_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000100c0u)




























#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00040549u)
static NV_STATUS subdeviceCtrlCmdGspGetFeatures__EXPORT(void *pSubdevice, void *pGspFeaturesParams) {
    return subdeviceCtrlCmdGspGetFeatures_DISPATCH(pSubdevice, pGspFeaturesParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00040549u)



























#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdDisplayGetIpVersion__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdDisplayGetIpVersion_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdDisplayGetStaticInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdDisplayGetStaticInfo_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)


#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdDisplayWriteInstMem__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdDisplayWriteInstMem_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)

















#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000004c0u)
static NV_STATUS subdeviceCtrlCmdInternalGetUserRegisterAccessMap__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdInternalGetUserRegisterAccessMap_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000004c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c4c0u)
static NV_STATUS subdeviceCtrlCmdInternalGetDeviceInfoTable__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdInternalGetDeviceInfoTable_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c4c0u)














#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000400c0u)
static NV_STATUS subdeviceCtrlCmdGmmuGetStaticInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdGmmuGetStaticInfo_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000400c0u)





#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdInternalGmmuCopyReservedSplitGVASpacePdesServer__EXPORT(void *pSubdevice, void *pCopyServerReservedPdesParams) {
    return subdeviceCtrlCmdInternalGmmuCopyReservedSplitGVASpacePdesServer_IMPL(pSubdevice, pCopyServerReservedPdesParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)



#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdCeUpdateClassDB__EXPORT(void *pSubdevice, void *params) {
    return subdeviceCtrlCmdCeUpdateClassDB_IMPL(pSubdevice, params);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c040u)
static NV_STATUS subdeviceCtrlCmdCeGetFaultMethodBufferSize__EXPORT(void *pSubdevice, void *params) {
    return subdeviceCtrlCmdCeGetFaultMethodBufferSize_IMPL(pSubdevice, params);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0001c040u)


#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00000044u)
static NV_STATUS subdeviceCtrlCmdCeGetHubPceMaskV2__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdCeGetHubPceMaskV2_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00000044u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdIntrGetKernelTable__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdIntrGetKernelTable_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)





#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdInternalPerfGpuBoostSyncGetInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdInternalPerfGpuBoostSyncGetInfo_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)








#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000400c0u)
static NV_STATUS subdeviceCtrlCmdBifGetStaticInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdBifGetStaticInfo_DISPATCH(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000400c0u)


































#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdInternalNvlinkGetNvlinkDeviceInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdInternalNvlinkGetNvlinkDeviceInfo_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)

















#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdInternalGetPcieP2pCaps__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdInternalGetPcieP2pCaps_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)













#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdInternalPostInitBrightcStateLoad__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdInternalPostInitBrightcStateLoad_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdInternalSetStaticEdidData__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdInternalSetStaticEdidData_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)

















#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdInternalConfComputeGetStaticInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdInternalConfComputeGetStaticInfo_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)








#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdInternalInitUserSharedData__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdInternalInitUserSharedData_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdInternalUserSharedDataSetDataPoll__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdInternalUserSharedDataSetDataPoll_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)






























#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)
static NV_STATUS subdeviceCtrlCmdCcuMap__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdCcuMap_IMPL(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000000c0u)



#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000400c0u)
static NV_STATUS subdeviceCtrlCmdCcuGetSampleInfo__EXPORT(void *pSubdevice, void *pParams) {
    return subdeviceCtrlCmdCcuGetSampleInfo_DISPATCH(pSubdevice, pParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x000400c0u)




// Exported method array
static const struct NVOC_EXPORTED_METHOD_DEF __nvoc_exported_method_def_Subdevice[] = 
{
    {               /*  [0] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x30118u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdGpuGetInfoV2__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x30118u)
        /*flags=*/      0x30118u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800102u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_INFO_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetInfoV2"
#endif
    },
    {               /*  [22] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x448u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdGpuGetOEMBoardInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x448u)
        /*flags=*/      0x448u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080013fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_OEM_BOARD_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetOEMBoardInfo"
#endif
    },
    {               /*  [62] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10018u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdGpuGetMaxSupportedPageSize__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10018u)
        /*flags=*/      0x10018u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800188u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_MAX_SUPPORTED_PAGE_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetMaxSupportedPageSize"
#endif
    },
    {               /*  [86] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10048u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdGpuGetConstructedFalconInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10048u)
        /*flags=*/      0x10048u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x208001b0u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_CONSTRUCTED_FALCON_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetConstructedFalconInfo"
#endif
    },
    {               /*  [104] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10118u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdEventSetNotification__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10118u)
        /*flags=*/      0x10118u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800301u,
        /*paramSize=*/  sizeof(NV2080_CTRL_EVENT_SET_NOTIFICATION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdEventSetNotification"
#endif
    },
    {               /*  [128] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x60048u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdBiosGetInfoV2__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x60048u)
        /*flags=*/      0x60048u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800810u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BIOS_GET_INFO_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBiosGetInfoV2"
#endif
    },
    {               /*  [130] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdDisplayGetStaticInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a01u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_DISPLAY_GET_STATIC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDisplayGetStaticInfo"
#endif
    },
    {               /*  [132] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdMemSysGetStaticConfig__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5c0c0u)
        /*flags=*/      0x5c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a1cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_MEMSYS_GET_STATIC_CONFIG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMemSysGetStaticConfig"
#endif
    },
    {               /*  [135] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x100c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetCaps__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x100c0u)
        /*flags=*/      0x100c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a1fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetCaps"
#endif
    },
    {               /*  [137] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetGlobalSmOrder__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a22u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_GLOBAL_SM_ORDER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetGlobalSmOrder"
#endif
    },
    {               /*  [140] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetFloorsweepingMasks__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a26u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_FLOORSWEEPING_MASKS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetFloorsweepingMasks"
#endif
    },
    {               /*  [143] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a2au,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetInfo"
#endif
    },
    {               /*  [144] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetZcullInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a2cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_ZCULL_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetZcullInfo"
#endif
    },
    {               /*  [145] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetRopInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a2eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_ROP_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetRopInfo"
#endif
    },
    {               /*  [146] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetPpcMasks__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a30u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_PPC_MASKS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetPpcMasks"
#endif
    },
    {               /*  [147] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c1c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetContextBuffersInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c1c0u)
        /*flags=*/      0x1c1c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a32u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_CONTEXT_BUFFERS_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetContextBuffersInfo"
#endif
    },
    {               /*  [148] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifier__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a34u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_SM_ISSUE_RATE_MODIFIER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifier"
#endif
    },
    {               /*  [154] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetFecsRecordSize__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a3du,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_FECS_RECORD_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetFecsRecordSize"
#endif
    },
    {               /*  [156] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetFecsTraceDefines__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a3fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_FECS_TRACE_DEFINES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetFecsTraceDefines"
#endif
    },
    {               /*  [157] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c4c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalGetDeviceInfoTable__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c4c0u)
        /*flags=*/      0x1c4c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a40u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GET_DEVICE_INFO_TABLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGetDeviceInfoTable"
#endif
    },
    {               /*  [158] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalGetUserRegisterAccessMap__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4c0u)
        /*flags=*/      0x4c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a41u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GPU_GET_USER_REGISTER_ACCESS_MAP_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGetUserRegisterAccessMap"
#endif
    },
    {               /*  [163] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetPdbProperties__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a48u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_PDB_PROPERTIES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetPdbProperties"
#endif
    },
    {               /*  [164] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdDisplayWriteInstMem__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a49u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_DISPLAY_WRITE_INST_MEM_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDisplayWriteInstMem"
#endif
    },
    {               /*  [166] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdDisplayGetIpVersion__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a4bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_DISPLAY_GET_IP_VERSION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDisplayGetIpVersion"
#endif
    },
    {               /*  [178] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdGmmuGetStaticInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400c0u)
        /*flags=*/      0x400c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a59u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GMMU_GET_STATIC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGmmuGetStaticInfo"
#endif
    },
    {               /*  [180] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdIntrGetKernelTable__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a5cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_INTR_GET_KERNEL_TABLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdIntrGetKernelTable"
#endif
    },
    {               /*  [183] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1d8u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalFifoGetNumChannels__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1d8u)
        /*flags=*/      0x1d8u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a61u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_FIFO_GET_NUM_CHANNELS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalFifoGetNumChannels"
#endif
    },
    {               /*  [193] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdMemSysL2InvalidateEvict__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a6cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_MEMSYS_L2_INVALIDATE_EVICT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMemSysL2InvalidateEvict"
#endif
    },
    {               /*  [212] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalPerfGpuBoostSyncGetInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a80u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_PERF_GPU_BOOST_SYNC_GET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfGpuBoostSyncGetInfo"
#endif
    },
    {               /*  [219] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalNvlinkGetNvlinkDeviceInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a87u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_NVLINK_GET_NVLINK_DEVICE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalNvlinkGetNvlinkDeviceInfo"
#endif
    },
    {               /*  [242] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalGmmuCopyReservedSplitGVASpacePdesServer__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a9fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GMMU_COPY_RESERVED_SPLIT_GVASPACE_PDES_TO_SERVER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGmmuCopyReservedSplitGVASpacePdesServer"
#endif
    },
    {               /*  [248] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdBifGetStaticInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400c0u)
        /*flags=*/      0x400c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800aacu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_BIF_GET_STATIC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBifGetStaticInfo"
#endif
    },
    {               /*  [253] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdCcuGetSampleInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400c0u)
        /*flags=*/      0x400c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ab2u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_CCU_SAMPLE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCcuGetSampleInfo"
#endif
    },
    {               /*  [254] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdCcuMap__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ab3u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_CCU_MAP_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCcuMap"
#endif
    },
    {               /*  [258] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalGetPcieP2pCaps__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ab8u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GET_PCIE_P2P_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGetPcieP2pCaps"
#endif
    },
    {               /*  [270] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalPostInitBrightcStateLoad__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ac6u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_INIT_BRIGHTC_STATE_LOAD_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPostInitBrightcStateLoad"
#endif
    },
    {               /*  [294] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalSetStaticEdidData__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800adfu,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_INTERNAL_SET_STATIC_EDID_DATA_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalSetStaticEdidData"
#endif
    },
    {               /*  [310] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalConfComputeGetStaticInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800af3u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_CONF_COMPUTE_GET_STATIC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalConfComputeGetStaticInfo"
#endif
    },
    {               /*  [316] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalInitUserSharedData__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800afeu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_INIT_USER_SHARED_DATA_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalInitUserSharedData"
#endif
    },
    {               /*  [317] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdInternalUserSharedDataSetDataPoll__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800affu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_USER_SHARED_DATA_SET_DATA_POLL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalUserSharedDataSetDataPoll"
#endif
    },
    {               /*  [319] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifierV2__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800b03u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_SM_ISSUE_RATE_MODIFIER_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifierV2"
#endif
    },
    {               /*  [320] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdKGrInternalStaticGetSmIssueThrottleCtrl__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0c0u)
        /*flags=*/      0x1c0c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800b05u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_SM_ISSUE_THROTTLE_CTRL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetSmIssueThrottleCtrl"
#endif
    },
    {               /*  [338] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5c040u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdFifoGetDeviceInfoTable__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5c040u)
        /*flags=*/      0x5c040u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801112u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FIFO_GET_DEVICE_INFO_TABLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFifoGetDeviceInfoTable"
#endif
    },
    {               /*  [443] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10518u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdBusGetPciBarInfo__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10518u)
        /*flags=*/      0x10518u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801803u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_PCI_BAR_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetPciBarInfo"
#endif
    },
    {               /*  [522] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdCeUpdateClassDB__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xc0u)
        /*flags=*/      0xc0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a06u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_UPDATE_CLASS_DB_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeUpdateClassDB"
#endif
    },
    {               /*  [524] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c040u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdCeGetFaultMethodBufferSize__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c040u)
        /*flags=*/      0x1c040u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a08u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_GET_FAULT_METHOD_BUFFER_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeGetFaultMethodBufferSize"
#endif
    },
    {               /*  [529] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdCeUpdatePceLceMappingsV2__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a0du,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_UPDATE_PCE_LCE_MAPPINGS_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeUpdatePceLceMappingsV2"
#endif
    },
    {               /*  [530] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x44u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdCeGetHubPceMaskV2__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x44u)
        /*flags=*/      0x44u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a0eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_GET_HUB_PCE_MASK_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeGetHubPceMaskV2"
#endif
    },
    {               /*  [531] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x100c0u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdCeGetPceConfigForLceType__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x100c0u)
        /*flags=*/      0x100c0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a0fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_CE_GET_PCE_CONFIG_FOR_LCE_TYPE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeGetPceConfigForLceType"
#endif
    },
    {               /*  [618] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x40549u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &subdeviceCtrlCmdGspGetFeatures__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x40549u)
        /*flags=*/      0x40549u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803601u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GSP_GET_FEATURES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGspGetFeatures"
#endif
    },
};


// Metadata with per-class RTTI and vtable with ancestor(s)
static const struct NVOC_METADATA__Subdevice __nvoc_metadata__Subdevice = {
    .rtti.pClassDef = &__nvoc_class_def_Subdevice,    // (subdevice) this
    .rtti.dtor      = &__nvoc_dtor_Subdevice,
    .rtti.offset    = 0,
    .metadata__GpuResource.rtti.pClassDef = &__nvoc_class_def_GpuResource,    // (gpures) super
    .metadata__GpuResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__GpuResource.rtti.offset    = NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource),
    .metadata__GpuResource.metadata__RmResource.rtti.pClassDef = &__nvoc_class_def_RmResource,    // (rmres) super^2
    .metadata__GpuResource.metadata__RmResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__GpuResource.metadata__RmResource.rtti.offset    = NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource),
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.rtti.pClassDef = &__nvoc_class_def_RsResource,    // (res) super^3
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.rtti.offset    = NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource),
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.pClassDef = &__nvoc_class_def_Object,    // (obj) super^4
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.offset    = NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
    .metadata__GpuResource.metadata__RmResource.metadata__RmResourceCommon.rtti.pClassDef = &__nvoc_class_def_RmResourceCommon,    // (rmrescmn) super^3
    .metadata__GpuResource.metadata__RmResource.metadata__RmResourceCommon.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__GpuResource.metadata__RmResource.metadata__RmResourceCommon.rtti.offset    = NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
    .metadata__Notifier.rtti.pClassDef = &__nvoc_class_def_Notifier,    // (notify) super
    .metadata__Notifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__Notifier.rtti.offset    = NV_OFFSETOF(Subdevice, __nvoc_base_Notifier),
    .metadata__Notifier.metadata__INotifier.rtti.pClassDef = &__nvoc_class_def_INotifier,    // (inotify) super^2
    .metadata__Notifier.metadata__INotifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__Notifier.metadata__INotifier.rtti.offset    = NV_OFFSETOF(Subdevice, __nvoc_base_Notifier.__nvoc_base_INotifier),

    .vtable.__subdevicePreDestruct__ = &subdevicePreDestruct_IMPL,    // virtual override (res) base (gpures)
    .metadata__GpuResource.vtable.__gpuresPreDestruct__ = &__nvoc_up_thunk_RsResource_gpuresPreDestruct,    // virtual inherited (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresPreDestruct__ = &__nvoc_up_thunk_RsResource_rmresPreDestruct,    // virtual inherited (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resPreDestruct__ = &__nvoc_down_thunk_Subdevice_resPreDestruct,    // virtual
    .vtable.__subdeviceInternalControlForward__ = &subdeviceInternalControlForward_IMPL,    // virtual override (gpures) base (gpures)
    .metadata__GpuResource.vtable.__gpuresInternalControlForward__ = &__nvoc_down_thunk_Subdevice_gpuresInternalControlForward,    // virtual
    .vtable.__subdeviceControl__ = &__nvoc_up_thunk_GpuResource_subdeviceControl,    // virtual inherited (gpures) base (gpures)
    .metadata__GpuResource.vtable.__gpuresControl__ = &gpuresControl_IMPL,    // virtual override (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresControl__ = &__nvoc_up_thunk_RsResource_rmresControl,    // virtual inherited (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resControl__ = &__nvoc_down_thunk_GpuResource_resControl,    // virtual
    .vtable.__subdeviceMap__ = &__nvoc_up_thunk_GpuResource_subdeviceMap,    // virtual inherited (gpures) base (gpures)
    .metadata__GpuResource.vtable.__gpuresMap__ = &gpuresMap_IMPL,    // virtual override (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresMap__ = &__nvoc_up_thunk_RsResource_rmresMap,    // virtual inherited (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resMap__ = &__nvoc_down_thunk_GpuResource_resMap,    // virtual
    .vtable.__subdeviceUnmap__ = &__nvoc_up_thunk_GpuResource_subdeviceUnmap,    // virtual inherited (gpures) base (gpures)
    .metadata__GpuResource.vtable.__gpuresUnmap__ = &gpuresUnmap_IMPL,    // virtual override (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresUnmap__ = &__nvoc_up_thunk_RsResource_rmresUnmap,    // virtual inherited (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resUnmap__ = &__nvoc_down_thunk_GpuResource_resUnmap,    // virtual
    .vtable.__subdeviceShareCallback__ = &__nvoc_up_thunk_GpuResource_subdeviceShareCallback,    // virtual inherited (gpures) base (gpures)
    .metadata__GpuResource.vtable.__gpuresShareCallback__ = &gpuresShareCallback_IMPL,    // virtual override (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresShareCallback__ = &__nvoc_down_thunk_GpuResource_rmresShareCallback,    // virtual override (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resShareCallback__ = &__nvoc_down_thunk_RmResource_resShareCallback,    // virtual
    .vtable.__subdeviceGetRegBaseOffsetAndSize__ = &__nvoc_up_thunk_GpuResource_subdeviceGetRegBaseOffsetAndSize,    // virtual inherited (gpures) base (gpures)
    .metadata__GpuResource.vtable.__gpuresGetRegBaseOffsetAndSize__ = &gpuresGetRegBaseOffsetAndSize_IMPL,    // virtual
    .vtable.__subdeviceGetMapAddrSpace__ = &__nvoc_up_thunk_GpuResource_subdeviceGetMapAddrSpace,    // virtual inherited (gpures) base (gpures)
    .metadata__GpuResource.vtable.__gpuresGetMapAddrSpace__ = &gpuresGetMapAddrSpace_IMPL,    // virtual
    .vtable.__subdeviceGetInternalObjectHandle__ = &__nvoc_up_thunk_GpuResource_subdeviceGetInternalObjectHandle,    // virtual inherited (gpures) base (gpures)
    .metadata__GpuResource.vtable.__gpuresGetInternalObjectHandle__ = &gpuresGetInternalObjectHandle_IMPL,    // virtual
    .vtable.__subdeviceAccessCallback__ = &__nvoc_up_thunk_RmResource_subdeviceAccessCallback,    // virtual inherited (rmres) base (gpures)
    .metadata__GpuResource.vtable.__gpuresAccessCallback__ = &__nvoc_up_thunk_RmResource_gpuresAccessCallback,    // virtual inherited (rmres) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresAccessCallback__ = &rmresAccessCallback_IMPL,    // virtual override (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resAccessCallback__ = &__nvoc_down_thunk_RmResource_resAccessCallback,    // virtual
    .vtable.__subdeviceGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_subdeviceGetMemInterMapParams,    // virtual inherited (rmres) base (gpures)
    .metadata__GpuResource.vtable.__gpuresGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_gpuresGetMemInterMapParams,    // virtual inherited (rmres) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresGetMemInterMapParams__ = &rmresGetMemInterMapParams_IMPL,    // virtual
    .vtable.__subdeviceCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_subdeviceCheckMemInterUnmap,    // virtual inherited (rmres) base (gpures)
    .metadata__GpuResource.vtable.__gpuresCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_gpuresCheckMemInterUnmap,    // virtual inherited (rmres) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresCheckMemInterUnmap__ = &rmresCheckMemInterUnmap_IMPL,    // virtual
    .vtable.__subdeviceGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_subdeviceGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (gpures)
    .metadata__GpuResource.vtable.__gpuresGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_gpuresGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresGetMemoryMappingDescriptor__ = &rmresGetMemoryMappingDescriptor_IMPL,    // virtual
    .vtable.__subdeviceControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_subdeviceControlSerialization_Prologue,    // virtual inherited (rmres) base (gpures)
    .metadata__GpuResource.vtable.__gpuresControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_gpuresControlSerialization_Prologue,    // virtual inherited (rmres) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresControlSerialization_Prologue__ = &rmresControlSerialization_Prologue_IMPL,    // virtual override (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resControlSerialization_Prologue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Prologue,    // virtual
    .vtable.__subdeviceControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_subdeviceControlSerialization_Epilogue,    // virtual inherited (rmres) base (gpures)
    .metadata__GpuResource.vtable.__gpuresControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_gpuresControlSerialization_Epilogue,    // virtual inherited (rmres) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresControlSerialization_Epilogue__ = &rmresControlSerialization_Epilogue_IMPL,    // virtual override (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resControlSerialization_Epilogue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Epilogue,    // virtual
    .vtable.__subdeviceControl_Prologue__ = &__nvoc_up_thunk_RmResource_subdeviceControl_Prologue,    // virtual inherited (rmres) base (gpures)
    .metadata__GpuResource.vtable.__gpuresControl_Prologue__ = &__nvoc_up_thunk_RmResource_gpuresControl_Prologue,    // virtual inherited (rmres) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresControl_Prologue__ = &rmresControl_Prologue_IMPL,    // virtual override (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resControl_Prologue__ = &__nvoc_down_thunk_RmResource_resControl_Prologue,    // virtual
    .vtable.__subdeviceControl_Epilogue__ = &__nvoc_up_thunk_RmResource_subdeviceControl_Epilogue,    // virtual inherited (rmres) base (gpures)
    .metadata__GpuResource.vtable.__gpuresControl_Epilogue__ = &__nvoc_up_thunk_RmResource_gpuresControl_Epilogue,    // virtual inherited (rmres) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresControl_Epilogue__ = &rmresControl_Epilogue_IMPL,    // virtual override (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resControl_Epilogue__ = &__nvoc_down_thunk_RmResource_resControl_Epilogue,    // virtual
    .vtable.__subdeviceCanCopy__ = &__nvoc_up_thunk_RsResource_subdeviceCanCopy,    // virtual inherited (res) base (gpures)
    .metadata__GpuResource.vtable.__gpuresCanCopy__ = &__nvoc_up_thunk_RsResource_gpuresCanCopy,    // virtual inherited (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresCanCopy__ = &__nvoc_up_thunk_RsResource_rmresCanCopy,    // virtual inherited (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resCanCopy__ = &resCanCopy_IMPL,    // virtual
    .vtable.__subdeviceIsDuplicate__ = &__nvoc_up_thunk_RsResource_subdeviceIsDuplicate,    // virtual inherited (res) base (gpures)
    .metadata__GpuResource.vtable.__gpuresIsDuplicate__ = &__nvoc_up_thunk_RsResource_gpuresIsDuplicate,    // virtual inherited (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresIsDuplicate__ = &__nvoc_up_thunk_RsResource_rmresIsDuplicate,    // virtual inherited (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resIsDuplicate__ = &resIsDuplicate_IMPL,    // virtual
    .vtable.__subdeviceControlFilter__ = &__nvoc_up_thunk_RsResource_subdeviceControlFilter,    // virtual inherited (res) base (gpures)
    .metadata__GpuResource.vtable.__gpuresControlFilter__ = &__nvoc_up_thunk_RsResource_gpuresControlFilter,    // virtual inherited (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresControlFilter__ = &__nvoc_up_thunk_RsResource_rmresControlFilter,    // virtual inherited (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resControlFilter__ = &resControlFilter_IMPL,    // virtual
    .vtable.__subdeviceIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_subdeviceIsPartialUnmapSupported,    // inline virtual inherited (res) base (gpures) body
    .metadata__GpuResource.vtable.__gpuresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_gpuresIsPartialUnmapSupported,    // inline virtual inherited (res) base (rmres) body
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported,    // inline virtual inherited (res) base (res) body
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resIsPartialUnmapSupported__ = &resIsPartialUnmapSupported_d69453,    // inline virtual body
    .vtable.__subdeviceMapTo__ = &__nvoc_up_thunk_RsResource_subdeviceMapTo,    // virtual inherited (res) base (gpures)
    .metadata__GpuResource.vtable.__gpuresMapTo__ = &__nvoc_up_thunk_RsResource_gpuresMapTo,    // virtual inherited (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresMapTo__ = &__nvoc_up_thunk_RsResource_rmresMapTo,    // virtual inherited (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resMapTo__ = &resMapTo_IMPL,    // virtual
    .vtable.__subdeviceUnmapFrom__ = &__nvoc_up_thunk_RsResource_subdeviceUnmapFrom,    // virtual inherited (res) base (gpures)
    .metadata__GpuResource.vtable.__gpuresUnmapFrom__ = &__nvoc_up_thunk_RsResource_gpuresUnmapFrom,    // virtual inherited (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresUnmapFrom__ = &__nvoc_up_thunk_RsResource_rmresUnmapFrom,    // virtual inherited (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resUnmapFrom__ = &resUnmapFrom_IMPL,    // virtual
    .vtable.__subdeviceGetRefCount__ = &__nvoc_up_thunk_RsResource_subdeviceGetRefCount,    // virtual inherited (res) base (gpures)
    .metadata__GpuResource.vtable.__gpuresGetRefCount__ = &__nvoc_up_thunk_RsResource_gpuresGetRefCount,    // virtual inherited (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresGetRefCount__ = &__nvoc_up_thunk_RsResource_rmresGetRefCount,    // virtual inherited (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resGetRefCount__ = &resGetRefCount_IMPL,    // virtual
    .vtable.__subdeviceAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_subdeviceAddAdditionalDependants,    // virtual inherited (res) base (gpures)
    .metadata__GpuResource.vtable.__gpuresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_gpuresAddAdditionalDependants,    // virtual inherited (res) base (rmres)
    .metadata__GpuResource.metadata__RmResource.vtable.__rmresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_rmresAddAdditionalDependants,    // virtual inherited (res) base (res)
    .metadata__GpuResource.metadata__RmResource.metadata__RsResource.vtable.__resAddAdditionalDependants__ = &resAddAdditionalDependants_IMPL,    // virtual
    .vtable.__subdeviceGetNotificationListPtr__ = &__nvoc_up_thunk_Notifier_subdeviceGetNotificationListPtr,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyGetNotificationListPtr__ = &notifyGetNotificationListPtr_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationListPtr__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr,    // pure virtual
    .vtable.__subdeviceGetNotificationShare__ = &__nvoc_up_thunk_Notifier_subdeviceGetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyGetNotificationShare__ = &notifyGetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationShare,    // pure virtual
    .vtable.__subdeviceSetNotificationShare__ = &__nvoc_up_thunk_Notifier_subdeviceSetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifySetNotificationShare__ = &notifySetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifySetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifySetNotificationShare,    // pure virtual
    .vtable.__subdeviceUnregisterEvent__ = &__nvoc_up_thunk_Notifier_subdeviceUnregisterEvent,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyUnregisterEvent__ = &notifyUnregisterEvent_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyUnregisterEvent__ = &__nvoc_down_thunk_Notifier_inotifyUnregisterEvent,    // pure virtual
    .vtable.__subdeviceGetOrAllocNotifShare__ = &__nvoc_up_thunk_Notifier_subdeviceGetOrAllocNotifShare,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyGetOrAllocNotifShare__ = &notifyGetOrAllocNotifShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyGetOrAllocNotifShare__ = &__nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare,    // pure virtual
};


// Dynamic down-casting information
const struct NVOC_CASTINFO __nvoc_castinfo__Subdevice = {
    .numRelatives = 8,
    .relatives = {
        &__nvoc_metadata__Subdevice.rtti,    // [0]: (subdevice) this
        &__nvoc_metadata__Subdevice.metadata__GpuResource.rtti,    // [1]: (gpures) super
        &__nvoc_metadata__Subdevice.metadata__GpuResource.metadata__RmResource.rtti,    // [2]: (rmres) super^2
        &__nvoc_metadata__Subdevice.metadata__GpuResource.metadata__RmResource.metadata__RsResource.rtti,    // [3]: (res) super^3
        &__nvoc_metadata__Subdevice.metadata__GpuResource.metadata__RmResource.metadata__RsResource.metadata__Object.rtti,    // [4]: (obj) super^4
        &__nvoc_metadata__Subdevice.metadata__GpuResource.metadata__RmResource.metadata__RmResourceCommon.rtti,    // [5]: (rmrescmn) super^3
        &__nvoc_metadata__Subdevice.metadata__Notifier.rtti,    // [6]: (notify) super
        &__nvoc_metadata__Subdevice.metadata__Notifier.metadata__INotifier.rtti,    // [7]: (inotify) super^2
    }
};

// 2 down-thunk(s) defined to bridge methods in Subdevice from superclasses

// subdevicePreDestruct: virtual override (res) base (gpures)
void __nvoc_down_thunk_Subdevice_resPreDestruct(struct RsResource *pResource) {
    subdevicePreDestruct((struct Subdevice *)(((unsigned char *) pResource) - NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// subdeviceInternalControlForward: virtual override (gpures) base (gpures)
NV_STATUS __nvoc_down_thunk_Subdevice_gpuresInternalControlForward(struct GpuResource *pSubdevice, NvU32 command, void *pParams, NvU32 size) {
    return subdeviceInternalControlForward((struct Subdevice *)(((unsigned char *) pSubdevice) - NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource)), command, pParams, size);
}


// 28 up-thunk(s) defined to bridge methods in Subdevice to superclasses

// subdeviceControl: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_subdeviceControl(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return gpuresControl((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource)), pCallContext, pParams);
}

// subdeviceMap: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_subdeviceMap(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, struct RsCpuMapping *pCpuMapping) {
    return gpuresMap((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource)), pCallContext, pParams, pCpuMapping);
}

// subdeviceUnmap: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_subdeviceUnmap(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RsCpuMapping *pCpuMapping) {
    return gpuresUnmap((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource)), pCallContext, pCpuMapping);
}

// subdeviceShareCallback: virtual inherited (gpures) base (gpures)
NvBool __nvoc_up_thunk_GpuResource_subdeviceShareCallback(struct Subdevice *pGpuResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return gpuresShareCallback((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource)), pInvokingClient, pParentRef, pSharePolicy);
}

// subdeviceGetRegBaseOffsetAndSize: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_subdeviceGetRegBaseOffsetAndSize(struct Subdevice *pGpuResource, struct OBJGPU *pGpu, NvU32 *pOffset, NvU32 *pSize) {
    return gpuresGetRegBaseOffsetAndSize((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource)), pGpu, pOffset, pSize);
}

// subdeviceGetMapAddrSpace: virtual inherited (gpures) base (gpures)
NV_STATUS __nvoc_up_thunk_GpuResource_subdeviceGetMapAddrSpace(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, NvU32 mapFlags, NV_ADDRESS_SPACE *pAddrSpace) {
    return gpuresGetMapAddrSpace((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource)), pCallContext, mapFlags, pAddrSpace);
}

// subdeviceGetInternalObjectHandle: virtual inherited (gpures) base (gpures)
NvHandle __nvoc_up_thunk_GpuResource_subdeviceGetInternalObjectHandle(struct Subdevice *pGpuResource) {
    return gpuresGetInternalObjectHandle((struct GpuResource *)(((unsigned char *) pGpuResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource)));
}

// subdeviceAccessCallback: virtual inherited (rmres) base (gpures)
NvBool __nvoc_up_thunk_RmResource_subdeviceAccessCallback(struct Subdevice *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pInvokingClient, pAllocParams, accessRight);
}

// subdeviceGetMemInterMapParams: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_subdeviceGetMemInterMapParams(struct Subdevice *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return rmresGetMemInterMapParams((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pParams);
}

// subdeviceCheckMemInterUnmap: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_subdeviceCheckMemInterUnmap(struct Subdevice *pRmResource, NvBool bSubdeviceHandleProvided) {
    return rmresCheckMemInterUnmap((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource)), bSubdeviceHandleProvided);
}

// subdeviceGetMemoryMappingDescriptor: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_subdeviceGetMemoryMappingDescriptor(struct Subdevice *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc) {
    return rmresGetMemoryMappingDescriptor((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource)), ppMemDesc);
}

// subdeviceControlSerialization_Prologue: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_subdeviceControlSerialization_Prologue(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControlSerialization_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// subdeviceControlSerialization_Epilogue: virtual inherited (rmres) base (gpures)
void __nvoc_up_thunk_RmResource_subdeviceControlSerialization_Epilogue(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControlSerialization_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// subdeviceControl_Prologue: virtual inherited (rmres) base (gpures)
NV_STATUS __nvoc_up_thunk_RmResource_subdeviceControl_Prologue(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControl_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// subdeviceControl_Epilogue: virtual inherited (rmres) base (gpures)
void __nvoc_up_thunk_RmResource_subdeviceControl_Epilogue(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControl_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource)), pCallContext, pParams);
}

// subdeviceCanCopy: virtual inherited (res) base (gpures)
NvBool __nvoc_up_thunk_RsResource_subdeviceCanCopy(struct Subdevice *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// subdeviceIsDuplicate: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_subdeviceIsDuplicate(struct Subdevice *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), hMemory, pDuplicate);
}

// subdeviceControlFilter: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_subdeviceControlFilter(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// subdeviceIsPartialUnmapSupported: inline virtual inherited (res) base (gpures) body
NvBool __nvoc_up_thunk_RsResource_subdeviceIsPartialUnmapSupported(struct Subdevice *pResource) {
    return resIsPartialUnmapSupported((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// subdeviceMapTo: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_subdeviceMapTo(struct Subdevice *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// subdeviceUnmapFrom: virtual inherited (res) base (gpures)
NV_STATUS __nvoc_up_thunk_RsResource_subdeviceUnmapFrom(struct Subdevice *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// subdeviceGetRefCount: virtual inherited (res) base (gpures)
NvU32 __nvoc_up_thunk_RsResource_subdeviceGetRefCount(struct Subdevice *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// subdeviceAddAdditionalDependants: virtual inherited (res) base (gpures)
void __nvoc_up_thunk_RsResource_subdeviceAddAdditionalDependants(struct RsClient *pClient, struct Subdevice *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource)), pReference);
}

// subdeviceGetNotificationListPtr: virtual inherited (notify) base (notify)
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_subdeviceGetNotificationListPtr(struct Subdevice *pNotifier) {
    return notifyGetNotificationListPtr((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(Subdevice, __nvoc_base_Notifier)));
}

// subdeviceGetNotificationShare: virtual inherited (notify) base (notify)
struct NotifShare * __nvoc_up_thunk_Notifier_subdeviceGetNotificationShare(struct Subdevice *pNotifier) {
    return notifyGetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(Subdevice, __nvoc_base_Notifier)));
}

// subdeviceSetNotificationShare: virtual inherited (notify) base (notify)
void __nvoc_up_thunk_Notifier_subdeviceSetNotificationShare(struct Subdevice *pNotifier, struct NotifShare *pNotifShare) {
    notifySetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(Subdevice, __nvoc_base_Notifier)), pNotifShare);
}

// subdeviceUnregisterEvent: virtual inherited (notify) base (notify)
NV_STATUS __nvoc_up_thunk_Notifier_subdeviceUnregisterEvent(struct Subdevice *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent) {
    return notifyUnregisterEvent((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(Subdevice, __nvoc_base_Notifier)), hNotifierClient, hNotifierResource, hEventClient, hEvent);
}

// subdeviceGetOrAllocNotifShare: virtual inherited (notify) base (notify)
NV_STATUS __nvoc_up_thunk_Notifier_subdeviceGetOrAllocNotifShare(struct Subdevice *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare) {
    return notifyGetOrAllocNotifShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(Subdevice, __nvoc_base_Notifier)), hNotifierClient, hNotifierResource, ppNotifShare);
}


const struct NVOC_EXPORT_INFO __nvoc_export_info__Subdevice = 
{
    .numEntries=     50,
    .pExportEntries= __nvoc_exported_method_def_Subdevice
};


// Destruct Subdevice object.
void __nvoc_subdeviceDestruct(Subdevice*);
void __nvoc_dtor_GpuResource(Dynamic*);
void __nvoc_dtor_Notifier(Dynamic*);
void __nvoc_dtor_Subdevice(Dynamic* pThis) {

    Subdevice *__nvoc_this = (Subdevice *) pThis;

// Call destructor.
    __nvoc_subdeviceDestruct(__nvoc_this);

// Recurse to superclass destructors.
    __nvoc_dtor_GpuResource((Dynamic *) &__nvoc_this->__nvoc_base_GpuResource);
    __nvoc_dtor_Notifier((Dynamic *) &__nvoc_this->__nvoc_base_Notifier);

    PORT_UNREFERENCED_VARIABLE(__nvoc_this);
}
void __nvoc_init_dataField_Subdevice(Subdevice *pThis, RmHalspecOwner *pRmhalspecowner, GpuHalspecOwner *pGpuhalspecowner) {
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    ChipHal *chipHal = &pGpuhalspecowner->chipHal;
    const unsigned long chipHal_HalVarIdx = (unsigned long)chipHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(pGpuhalspecowner);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);
    PORT_UNREFERENCED_VARIABLE(chipHal);
    PORT_UNREFERENCED_VARIABLE(chipHal_HalVarIdx);
}


// Construct Subdevice object.
NV_STATUS __nvoc_ctor_GpuResource(GpuResource *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);    // inline
NV_STATUS __nvoc_ctor_Notifier(Notifier *pNotifier, struct CALL_CONTEXT *pCallContext);    // inline
NV_STATUS __nvoc_ctor_Subdevice(Subdevice *pResource, RmHalspecOwner *pRmhalspecowner, GpuHalspecOwner *pGpuhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams) {    // inline
    NV_STATUS status = NV_OK;

    // Recurse to ancestor constructor(s).
    status = __nvoc_ctor_GpuResource(&pResource->__nvoc_base_GpuResource, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_Subdevice_fail_GpuResource;
    status = __nvoc_ctor_Notifier(&pResource->__nvoc_base_Notifier, pCallContext);
    if (status != NV_OK) goto __nvoc_ctor_Subdevice_fail_Notifier;

    // Initialize data fields.
    __nvoc_init_dataField_Subdevice(pResource, pRmhalspecowner, pGpuhalspecowner);

    // Call the constructor for this class.
    status = __nvoc_subdeviceConstruct(pResource, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_Subdevice_fail__init;
    goto __nvoc_ctor_Subdevice_exit; // Success

    // Unwind on error.
__nvoc_ctor_Subdevice_fail__init:
    __nvoc_dtor_Notifier((Dynamic *)&pResource->__nvoc_base_Notifier);
__nvoc_ctor_Subdevice_fail_Notifier:
    __nvoc_dtor_GpuResource((Dynamic *)&pResource->__nvoc_base_GpuResource);
__nvoc_ctor_Subdevice_fail_GpuResource:
__nvoc_ctor_Subdevice_exit:
    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_Subdevice_1(Subdevice *pThis, RmHalspecOwner *pRmhalspecowner, GpuHalspecOwner *pGpuhalspecowner) {
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    ChipHal *chipHal = &pGpuhalspecowner->chipHal;
    const unsigned long chipHal_HalVarIdx = (unsigned long)chipHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(pGpuhalspecowner);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);
    PORT_UNREFERENCED_VARIABLE(chipHal);
    PORT_UNREFERENCED_VARIABLE(chipHal_HalVarIdx);

    // subdeviceCtrlCmdBiosGetInfoV2 -- halified (2 hals) exported (id=0x20800810) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBiosGetInfoV2__ = &subdeviceCtrlCmdBiosGetInfoV2_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBiosGetInfoV2__ = &subdeviceCtrlCmdBiosGetInfoV2_92bfc3;
    }

    // subdeviceCtrlCmdBiosGetSKUInfo -- halified (2 hals) exported (id=0x20800808)
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBiosGetSKUInfo__ = &subdeviceCtrlCmdBiosGetSKUInfo_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBiosGetSKUInfo__ = &subdeviceCtrlCmdBiosGetSKUInfo_KERNEL;
    }

    // subdeviceCtrlCmdBiosGetPostTime -- halified (2 hals) exported (id=0x20800809) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBiosGetPostTime__ = &subdeviceCtrlCmdBiosGetPostTime_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBiosGetPostTime__ = &subdeviceCtrlCmdBiosGetPostTime_92bfc3;
    }

    // subdeviceCtrlCmdClkPmumonClkDomainsGetSamples -- halified (2 hals) exported (id=0x20801037) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdClkPmumonClkDomainsGetSamples__ = &subdeviceCtrlCmdClkPmumonClkDomainsGetSamples_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdClkPmumonClkDomainsGetSamples__ = &subdeviceCtrlCmdClkPmumonClkDomainsGetSamples_92bfc3;
    }

    // subdeviceCtrlCmdBusGetPcieReqAtomicsCaps -- halified (2 hals) exported (id=0x20801829) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBusGetPcieReqAtomicsCaps__ = &subdeviceCtrlCmdBusGetPcieReqAtomicsCaps_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBusGetPcieReqAtomicsCaps__ = &subdeviceCtrlCmdBusGetPcieReqAtomicsCaps_92bfc3;
    }

    // subdeviceCtrlCmdBusGetPcieSupportedGpuAtomics -- halified (2 hals) exported (id=0x2080182a) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBusGetPcieSupportedGpuAtomics__ = &subdeviceCtrlCmdBusGetPcieSupportedGpuAtomics_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBusGetPcieSupportedGpuAtomics__ = &subdeviceCtrlCmdBusGetPcieSupportedGpuAtomics_92bfc3;
    }

    // subdeviceCtrlCmdBusGetPcieCplAtomicsCaps -- halified (2 hals) exported (id=0x20801830) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBusGetPcieCplAtomicsCaps__ = &subdeviceCtrlCmdBusGetPcieCplAtomicsCaps_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBusGetPcieCplAtomicsCaps__ = &subdeviceCtrlCmdBusGetPcieCplAtomicsCaps_92bfc3;
    }

    // subdeviceCtrlCmdBusGetC2CInfo -- halified (2 hals) exported (id=0x2080182b) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBusGetC2CInfo__ = &subdeviceCtrlCmdBusGetC2CInfo_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBusGetC2CInfo__ = &subdeviceCtrlCmdBusGetC2CInfo_92bfc3;
    }

    // subdeviceCtrlCmdBusGetC2CLpwrStats -- halified (2 hals) exported (id=0x20801831) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBusGetC2CLpwrStats__ = &subdeviceCtrlCmdBusGetC2CLpwrStats_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBusGetC2CLpwrStats__ = &subdeviceCtrlCmdBusGetC2CLpwrStats_92bfc3;
    }

    // subdeviceCtrlCmdBusSetC2CLpwrStateVote -- halified (2 hals) exported (id=0x20801832) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBusSetC2CLpwrStateVote__ = &subdeviceCtrlCmdBusSetC2CLpwrStateVote_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBusSetC2CLpwrStateVote__ = &subdeviceCtrlCmdBusSetC2CLpwrStateVote_92bfc3;
    }

    // subdeviceCtrlCmdBusSetC2CIdleThreshold -- halified (2 hals) exported (id=0x20801836) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBusSetC2CIdleThreshold__ = &subdeviceCtrlCmdBusSetC2CIdleThreshold_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBusSetC2CIdleThreshold__ = &subdeviceCtrlCmdBusSetC2CIdleThreshold_92bfc3;
    }

    // subdeviceCtrlCmdBusSetP2pMapping -- halified (2 hals) exported (id=0x2080182e) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBusSetP2pMapping__ = &subdeviceCtrlCmdBusSetP2pMapping_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBusSetP2pMapping__ = &subdeviceCtrlCmdBusSetP2pMapping_5baef9;
    }

    // subdeviceCtrlCmdBusUnsetP2pMapping -- halified (2 hals) exported (id=0x2080182f) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBusUnsetP2pMapping__ = &subdeviceCtrlCmdBusUnsetP2pMapping_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBusUnsetP2pMapping__ = &subdeviceCtrlCmdBusUnsetP2pMapping_5baef9;
    }

    // subdeviceCtrlCmdBusGetNvlinkCaps -- halified (2 hals) exported (id=0x20803001)
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBusGetNvlinkCaps__ = &subdeviceCtrlCmdBusGetNvlinkCaps_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBusGetNvlinkCaps__ = &subdeviceCtrlCmdBusGetNvlinkCaps_IMPL;
    }

    // subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamplesV2 -- halified (2 hals) exported (id=0x20802096)
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamplesV2__ = &subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamplesV2_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamplesV2__ = &subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamplesV2_KERNEL;
    }

    // subdeviceCtrlCmdPerfReservePerfmonHw -- halified (2 hals) exported (id=0x20802093) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdPerfReservePerfmonHw__ = &subdeviceCtrlCmdPerfReservePerfmonHw_395e98;
    }
    else
    {
        pThis->__subdeviceCtrlCmdPerfReservePerfmonHw__ = &subdeviceCtrlCmdPerfReservePerfmonHw_KERNEL;
    }

    // subdeviceCtrlCmdPerfGetLevelInfo_V2 -- halified (2 hals) exported (id=0x2080200b) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdPerfGetLevelInfo_V2__ = &subdeviceCtrlCmdPerfGetLevelInfo_V2_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdPerfGetLevelInfo_V2__ = &subdeviceCtrlCmdPerfGetLevelInfo_V2_92bfc3;
    }

    // subdeviceCtrlCmdPerfGetCurrentPstate -- halified (2 hals) exported (id=0x20802068) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdPerfGetCurrentPstate__ = &subdeviceCtrlCmdPerfGetCurrentPstate_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdPerfGetCurrentPstate__ = &subdeviceCtrlCmdPerfGetCurrentPstate_92bfc3;
    }

    // subdeviceCtrlCmdPerfGetVideoEnginePerfmonSample -- halified (2 hals) exported (id=0x20802087) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdPerfGetVideoEnginePerfmonSample__ = &subdeviceCtrlCmdPerfGetVideoEnginePerfmonSample_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdPerfGetVideoEnginePerfmonSample__ = &subdeviceCtrlCmdPerfGetVideoEnginePerfmonSample_92bfc3;
    }

    // subdeviceCtrlCmdPerfGetPowerstate -- halified (2 hals) exported (id=0x2080205a) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdPerfGetPowerstate__ = &subdeviceCtrlCmdPerfGetPowerstate_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdPerfGetPowerstate__ = &subdeviceCtrlCmdPerfGetPowerstate_92bfc3;
    }

    // subdeviceCtrlCmdPerfNotifyVideoevent -- halified (2 hals) exported (id=0x2080205d) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdPerfNotifyVideoevent__ = &subdeviceCtrlCmdPerfNotifyVideoevent_ac1694;
    }
    else
    {
        pThis->__subdeviceCtrlCmdPerfNotifyVideoevent__ = &subdeviceCtrlCmdPerfNotifyVideoevent_92bfc3;
    }

    // subdeviceCtrlCmdFbGetOfflinedPages -- halified (2 hals) exported (id=0x20801322) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdFbGetOfflinedPages__ = &subdeviceCtrlCmdFbGetOfflinedPages_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdFbGetOfflinedPages__ = &subdeviceCtrlCmdFbGetOfflinedPages_92bfc3;
    }

    // subdeviceCtrlCmdFbGetLTCInfoForFBP -- halified (2 hals) exported (id=0x20801328) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdFbGetLTCInfoForFBP__ = &subdeviceCtrlCmdFbGetLTCInfoForFBP_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdFbGetLTCInfoForFBP__ = &subdeviceCtrlCmdFbGetLTCInfoForFBP_92bfc3;
    }

    // subdeviceCtrlCmdFbGetDynamicOfflinedPages -- halified (2 hals) exported (id=0x20801348) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdFbGetDynamicOfflinedPages__ = &subdeviceCtrlCmdFbGetDynamicOfflinedPages_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdFbGetDynamicOfflinedPages__ = &subdeviceCtrlCmdFbGetDynamicOfflinedPages_92bfc3;
    }

    // subdeviceCtrlCmdMemSysGetStaticConfig -- halified (2 hals) exported (id=0x20800a1c) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdMemSysGetStaticConfig__ = &subdeviceCtrlCmdMemSysGetStaticConfig_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdMemSysGetStaticConfig__ = &subdeviceCtrlCmdMemSysGetStaticConfig_92bfc3;
    }

    // subdeviceCtrlCmdMemSysGetMIGMemoryPartitionTable -- halified (2 hals) exported (id=0x20800a6b) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdMemSysGetMIGMemoryPartitionTable__ = &subdeviceCtrlCmdMemSysGetMIGMemoryPartitionTable_395e98;
    }
    else
    {
        pThis->__subdeviceCtrlCmdMemSysGetMIGMemoryPartitionTable__ = &subdeviceCtrlCmdMemSysGetMIGMemoryPartitionTable_92bfc3;
    }

    // subdeviceCtrlCmdMemSysQueryDramEncryptionPendingConfiguration -- halified (2 hals) exported (id=0x20801355) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdMemSysQueryDramEncryptionPendingConfiguration__ = &subdeviceCtrlCmdMemSysQueryDramEncryptionPendingConfiguration_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdMemSysQueryDramEncryptionPendingConfiguration__ = &subdeviceCtrlCmdMemSysQueryDramEncryptionPendingConfiguration_92bfc3;
    }

    // subdeviceCtrlCmdMemSysSetDramEncryptionConfiguration -- halified (2 hals) exported (id=0x20801356) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdMemSysSetDramEncryptionConfiguration__ = &subdeviceCtrlCmdMemSysSetDramEncryptionConfiguration_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdMemSysSetDramEncryptionConfiguration__ = &subdeviceCtrlCmdMemSysSetDramEncryptionConfiguration_92bfc3;
    }

    // subdeviceCtrlCmdMemSysQueryDramEncryptionStatus -- halified (2 hals) exported (id=0x20801358) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdMemSysQueryDramEncryptionStatus__ = &subdeviceCtrlCmdMemSysQueryDramEncryptionStatus_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdMemSysQueryDramEncryptionStatus__ = &subdeviceCtrlCmdMemSysQueryDramEncryptionStatus_92bfc3;
    }

    // subdeviceCtrlCmdFifoDisableChannelsForKeyRotation -- halified (2 hals) exported (id=0x2080111a) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdFifoDisableChannelsForKeyRotation__ = &subdeviceCtrlCmdFifoDisableChannelsForKeyRotation_395e98;
    }
    else
    {
        pThis->__subdeviceCtrlCmdFifoDisableChannelsForKeyRotation__ = &subdeviceCtrlCmdFifoDisableChannelsForKeyRotation_IMPL;
    }

    // subdeviceCtrlCmdFifoDisableChannelsForKeyRotationV2 -- halified (2 hals) exported (id=0x2080111b) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdFifoDisableChannelsForKeyRotationV2__ = &subdeviceCtrlCmdFifoDisableChannelsForKeyRotationV2_395e98;
    }
    else
    {
        pThis->__subdeviceCtrlCmdFifoDisableChannelsForKeyRotationV2__ = &subdeviceCtrlCmdFifoDisableChannelsForKeyRotationV2_IMPL;
    }

    // subdeviceCtrlCmdFifoRotateKeys -- halified (2 hals) exported (id=0x2080111c) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdFifoRotateKeys__ = &subdeviceCtrlCmdFifoRotateKeys_395e98;
    }
    else
    {
        pThis->__subdeviceCtrlCmdFifoRotateKeys__ = &subdeviceCtrlCmdFifoRotateKeys_IMPL;
    }

    // subdeviceCtrlCmdFifoDisableUsermodeChannels -- halified (2 hals) exported (id=0x20801117) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdFifoDisableUsermodeChannels__ = &subdeviceCtrlCmdFifoDisableUsermodeChannels_ac1694;
    }
    else
    {
        pThis->__subdeviceCtrlCmdFifoDisableUsermodeChannels__ = &subdeviceCtrlCmdFifoDisableUsermodeChannels_5baef9;
    }

    // subdeviceCtrlCmdFifoGetUserdLocation -- halified (2 hals) exported (id=0x2080110d) body
    if (( ((chipHal_HalVarIdx >> 5) == 1UL) && ((1UL << (chipHal_HalVarIdx & 0x1f)) & 0x000003e0UL) )) /* ChipHal: TU102 | TU104 | TU106 | TU116 | TU117 */ 
    {
        pThis->__subdeviceCtrlCmdFifoGetUserdLocation__ = &subdeviceCtrlCmdFifoGetUserdLocation_IMPL;
    }
    // default
    else
    {
        pThis->__subdeviceCtrlCmdFifoGetUserdLocation__ = &subdeviceCtrlCmdFifoGetUserdLocation_395e98;
    }

    // subdeviceCtrlCmdFifoObjschedGetCaps -- halified (2 hals) exported (id=0x20801122) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdFifoObjschedGetCaps__ = &subdeviceCtrlCmdFifoObjschedGetCaps_ac1694;
    }
    else
    {
        pThis->__subdeviceCtrlCmdFifoObjschedGetCaps__ = &subdeviceCtrlCmdFifoObjschedGetCaps_5baef9;
    }

    // subdeviceCtrlCmdFifoConfigCtxswTimeout -- halified (2 hals) exported (id=0x20801110) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdFifoConfigCtxswTimeout__ = &subdeviceCtrlCmdFifoConfigCtxswTimeout_ac1694;
    }
    else
    {
        pThis->__subdeviceCtrlCmdFifoConfigCtxswTimeout__ = &subdeviceCtrlCmdFifoConfigCtxswTimeout_5baef9;
    }

    // subdeviceCtrlCmdFifoGetDeviceInfoTable -- halified (2 hals) exported (id=0x20801112) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdFifoGetDeviceInfoTable__ = &subdeviceCtrlCmdFifoGetDeviceInfoTable_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdFifoGetDeviceInfoTable__ = &subdeviceCtrlCmdFifoGetDeviceInfoTable_92bfc3;
    }

    // subdeviceCtrlCmdFifoUpdateChannelInfo -- halified (2 hals) exported (id=0x20801116) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdFifoUpdateChannelInfo__ = &subdeviceCtrlCmdFifoUpdateChannelInfo_395e98;
    }
    else
    {
        pThis->__subdeviceCtrlCmdFifoUpdateChannelInfo__ = &subdeviceCtrlCmdFifoUpdateChannelInfo_IMPL;
    }

    // subdeviceCtrlCmdKGrCtxswPmMode -- halified (2 hals) exported (id=0x20801207) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdKGrCtxswPmMode__ = &subdeviceCtrlCmdKGrCtxswPmMode_395e98;
    }
    else
    {
        pThis->__subdeviceCtrlCmdKGrCtxswPmMode__ = &subdeviceCtrlCmdKGrCtxswPmMode_IMPL;
    }

    // subdeviceCtrlCmdGpuQueryEccStatus -- halified (2 hals) exported (id=0x2080012f) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdGpuQueryEccStatus__ = &subdeviceCtrlCmdGpuQueryEccStatus_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdGpuQueryEccStatus__ = &subdeviceCtrlCmdGpuQueryEccStatus_92bfc3;
    }

    // subdeviceCtrlCmdGpuQueryIllumSupport -- halified (2 hals) exported (id=0x20800153) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdGpuQueryIllumSupport__ = &subdeviceCtrlCmdGpuQueryIllumSupport_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdGpuQueryIllumSupport__ = &subdeviceCtrlCmdGpuQueryIllumSupport_5baef9;
    }

    // subdeviceCtrlCmdGpuQueryScrubberStatus -- halified (2 hals) exported (id=0x2080015f) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdGpuQueryScrubberStatus__ = &subdeviceCtrlCmdGpuQueryScrubberStatus_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdGpuQueryScrubberStatus__ = &subdeviceCtrlCmdGpuQueryScrubberStatus_92bfc3;
    }

    // subdeviceCtrlCmdGetP2pCaps -- halified (2 hals) exported (id=0x208001a0) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdGetP2pCaps__ = &subdeviceCtrlCmdGetP2pCaps_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdGetP2pCaps__ = &subdeviceCtrlCmdGetP2pCaps_92bfc3;
    }

    // subdeviceCtrlCmdSetRcRecovery -- halified (2 hals) exported (id=0x2080220d) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdSetRcRecovery__ = &subdeviceCtrlCmdSetRcRecovery_ac1694;
    }
    else
    {
        pThis->__subdeviceCtrlCmdSetRcRecovery__ = &subdeviceCtrlCmdSetRcRecovery_5baef9;
    }

    // subdeviceCtrlCmdGetRcRecovery -- halified (2 hals) exported (id=0x2080220e) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdGetRcRecovery__ = &subdeviceCtrlCmdGetRcRecovery_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdGetRcRecovery__ = &subdeviceCtrlCmdGetRcRecovery_5baef9;
    }

    // subdeviceCtrlCmdCeGetCaps -- halified (2 hals) exported (id=0x20802a01)
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdCeGetCaps__ = &subdeviceCtrlCmdCeGetCaps_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdCeGetCaps__ = &subdeviceCtrlCmdCeGetCaps_IMPL;
    }

    // subdeviceCtrlCmdCeGetCapsV2 -- halified (2 hals) exported (id=0x20802a03)
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdCeGetCapsV2__ = &subdeviceCtrlCmdCeGetCapsV2_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdCeGetCapsV2__ = &subdeviceCtrlCmdCeGetCapsV2_IMPL;
    }

    // subdeviceCtrlCmdCeGetAllCaps -- halified (2 hals) exported (id=0x20802a0a)
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdCeGetAllCaps__ = &subdeviceCtrlCmdCeGetAllCaps_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdCeGetAllCaps__ = &subdeviceCtrlCmdCeGetAllCaps_IMPL;
    }

    // subdeviceCtrlCmdGpuQueryEccConfiguration -- halified (2 hals) exported (id=0x20800133) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdGpuQueryEccConfiguration__ = &subdeviceCtrlCmdGpuQueryEccConfiguration_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdGpuQueryEccConfiguration__ = &subdeviceCtrlCmdGpuQueryEccConfiguration_92bfc3;
    }

    // subdeviceCtrlCmdGpuSetEccConfiguration -- halified (2 hals) exported (id=0x20800134) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdGpuSetEccConfiguration__ = &subdeviceCtrlCmdGpuSetEccConfiguration_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdGpuSetEccConfiguration__ = &subdeviceCtrlCmdGpuSetEccConfiguration_92bfc3;
    }

    // subdeviceCtrlCmdGpuResetEccErrorStatus -- halified (2 hals) exported (id=0x20800136) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdGpuResetEccErrorStatus__ = &subdeviceCtrlCmdGpuResetEccErrorStatus_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdGpuResetEccErrorStatus__ = &subdeviceCtrlCmdGpuResetEccErrorStatus_92bfc3;
    }

    // subdeviceCtrlCmdGspGetFeatures -- halified (2 hals) exported (id=0x20803601) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdGspGetFeatures__ = &subdeviceCtrlCmdGspGetFeatures_KERNEL;
    }
    else
    {
        pThis->__subdeviceCtrlCmdGspGetFeatures__ = &subdeviceCtrlCmdGspGetFeatures_92bfc3;
    }

    // subdeviceCtrlCmdBifGetStaticInfo -- halified (2 hals) exported (id=0x20800aac) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdBifGetStaticInfo__ = &subdeviceCtrlCmdBifGetStaticInfo_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdBifGetStaticInfo__ = &subdeviceCtrlCmdBifGetStaticInfo_92bfc3;
    }

    // subdeviceCtrlCmdInternalGetLocalAtsConfig -- halified (2 hals) exported (id=0x20800afb) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdInternalGetLocalAtsConfig__ = &subdeviceCtrlCmdInternalGetLocalAtsConfig_395e98;
    }
    else
    {
        pThis->__subdeviceCtrlCmdInternalGetLocalAtsConfig__ = &subdeviceCtrlCmdInternalGetLocalAtsConfig_92bfc3;
    }

    // subdeviceCtrlCmdInternalSetPeerAtsConfig -- halified (2 hals) exported (id=0x20800afc) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdInternalSetPeerAtsConfig__ = &subdeviceCtrlCmdInternalSetPeerAtsConfig_395e98;
    }
    else
    {
        pThis->__subdeviceCtrlCmdInternalSetPeerAtsConfig__ = &subdeviceCtrlCmdInternalSetPeerAtsConfig_92bfc3;
    }

    // subdeviceCtrlCmdCcuGetSampleInfo -- halified (2 hals) exported (id=0x20800ab2) body
    if (( ((rmVariantHal_HalVarIdx >> 5) == 0UL) && ((1UL << (rmVariantHal_HalVarIdx & 0x1f)) & 0x00000001UL) )) /* RmVariantHal: VF */ 
    {
        pThis->__subdeviceCtrlCmdCcuGetSampleInfo__ = &subdeviceCtrlCmdCcuGetSampleInfo_VF;
    }
    else
    {
        pThis->__subdeviceCtrlCmdCcuGetSampleInfo__ = &subdeviceCtrlCmdCcuGetSampleInfo_5baef9;
    }
} // End __nvoc_init_funcTable_Subdevice_1 with approximately 112 basic block(s).


// Initialize vtable(s) for 86 virtual method(s).
void __nvoc_init_funcTable_Subdevice(Subdevice *pThis, RmHalspecOwner *pRmhalspecowner, GpuHalspecOwner *pGpuhalspecowner) {

    // Initialize vtable(s) with 56 per-object function pointer(s).
    __nvoc_init_funcTable_Subdevice_1(pThis, pRmhalspecowner, pGpuhalspecowner);
}

// Initialize newly constructed object.
void __nvoc_init__Subdevice(Subdevice *pThis, RmHalspecOwner *pRmhalspecowner, GpuHalspecOwner *pGpuhalspecowner) {

    // Initialize pointers to inherited data.
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;    // (obj) super^4
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource;    // (res) super^3
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;    // (rmrescmn) super^3
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource;    // (rmres) super^2
    pThis->__nvoc_pbase_GpuResource = &pThis->__nvoc_base_GpuResource;    // (gpures) super
    pThis->__nvoc_pbase_INotifier = &pThis->__nvoc_base_Notifier.__nvoc_base_INotifier;    // (inotify) super^2
    pThis->__nvoc_pbase_Notifier = &pThis->__nvoc_base_Notifier;    // (notify) super
    pThis->__nvoc_pbase_Subdevice = pThis;    // (subdevice) this

    // Recurse to superclass initialization function(s).
    __nvoc_init__GpuResource(&pThis->__nvoc_base_GpuResource);
    __nvoc_init__Notifier(&pThis->__nvoc_base_Notifier);

    // Pointer(s) to metadata structures(s)
    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.__nvoc_metadata_ptr = &__nvoc_metadata__Subdevice.metadata__GpuResource.metadata__RmResource.metadata__RsResource.metadata__Object;    // (obj) super^4
    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_metadata_ptr = &__nvoc_metadata__Subdevice.metadata__GpuResource.metadata__RmResource.metadata__RsResource;    // (res) super^3
    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon.__nvoc_metadata_ptr = &__nvoc_metadata__Subdevice.metadata__GpuResource.metadata__RmResource.metadata__RmResourceCommon;    // (rmrescmn) super^3
    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_metadata_ptr = &__nvoc_metadata__Subdevice.metadata__GpuResource.metadata__RmResource;    // (rmres) super^2
    pThis->__nvoc_base_GpuResource.__nvoc_metadata_ptr = &__nvoc_metadata__Subdevice.metadata__GpuResource;    // (gpures) super
    pThis->__nvoc_base_Notifier.__nvoc_base_INotifier.__nvoc_metadata_ptr = &__nvoc_metadata__Subdevice.metadata__Notifier.metadata__INotifier;    // (inotify) super^2
    pThis->__nvoc_base_Notifier.__nvoc_metadata_ptr = &__nvoc_metadata__Subdevice.metadata__Notifier;    // (notify) super
    pThis->__nvoc_metadata_ptr = &__nvoc_metadata__Subdevice;    // (subdevice) this

    // Initialize per-object vtables.
    __nvoc_init_funcTable_Subdevice(pThis, pRmhalspecowner, pGpuhalspecowner);
}

NV_STATUS __nvoc_objCreate_Subdevice(Subdevice **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams)
{
    NV_STATUS __nvoc_status;
    Object *__nvoc_pParentObj = NULL;
    Subdevice *__nvoc_pThis;
    RmHalspecOwner *pRmhalspecowner;
    GpuHalspecOwner *pGpuhalspecowner;

    // Don't allocate memory if the caller has already done so.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
    {
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_ppThis != NULL && *__nvoc_ppThis != NULL, NV_ERR_INVALID_PARAMETER);
        __nvoc_pThis = *__nvoc_ppThis;
    }

    // Allocate memory
    else
    {
        __nvoc_pThis = portMemAllocNonPaged(sizeof(Subdevice));
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_pThis != NULL, NV_ERR_NO_MEMORY);
    }

    // Zero is the initial value for everything.
    portMemSet(__nvoc_pThis, 0, sizeof(Subdevice));

    __nvoc_pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = __nvoc_createFlags;

    // pParent must be a valid object that derives from a halspec owner class.
    NV_CHECK_TRUE_OR_GOTO(__nvoc_status, LEVEL_ERROR, __nvoc_pParent != NULL, NV_ERR_INVALID_ARGUMENT, __nvoc_objCreate_Subdevice_cleanup);

    // Link the child into the parent unless flagged not to do so.
    if (!(__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        __nvoc_pParentObj = dynamicCast(__nvoc_pParent, Object);
        objAddChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        __nvoc_pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    // HALs are defined by the parent or the first super class.
    if ((pRmhalspecowner = dynamicCast(__nvoc_pParent, RmHalspecOwner)) == NULL)
        pRmhalspecowner = objFindAncestorOfType(RmHalspecOwner, __nvoc_pParent);
    NV_CHECK_TRUE_OR_GOTO(__nvoc_status, LEVEL_ERROR, pRmhalspecowner != NULL, NV_ERR_INVALID_ARGUMENT, __nvoc_objCreate_Subdevice_cleanup);
    if ((pGpuhalspecowner = dynamicCast(__nvoc_pParent, GpuHalspecOwner)) == NULL)
        pGpuhalspecowner = objFindAncestorOfType(GpuHalspecOwner, __nvoc_pParent);
    NV_CHECK_TRUE_OR_GOTO(__nvoc_status, LEVEL_ERROR, pGpuhalspecowner != NULL, NV_ERR_INVALID_ARGUMENT, __nvoc_objCreate_Subdevice_cleanup);

    // Initialize vtable, RTTI, etc., then call constructor.
    __nvoc_init__Subdevice(__nvoc_pThis, pRmhalspecowner, pGpuhalspecowner);
    __nvoc_status = __nvoc_ctor_Subdevice(__nvoc_pThis, pRmhalspecowner, pGpuhalspecowner, pCallContext, pParams);
    if (__nvoc_status != NV_OK) goto __nvoc_objCreate_Subdevice_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *__nvoc_ppThis = __nvoc_pThis;

    // Success
    return NV_OK;

    // Do not call destructors here since the constructor already called them.
__nvoc_objCreate_Subdevice_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (__nvoc_pParentObj != NULL)
        objRemoveChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);

    // Zero out memory that was allocated by caller.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(__nvoc_pThis, 0, sizeof(Subdevice));

    // Free memory allocated by `__nvoc_handleObjCreateMemAlloc`.
    else
    {
        portMemFree(__nvoc_pThis);
        *__nvoc_ppThis = NULL;
    }

    // Failure
    return __nvoc_status;
}

NV_STATUS __nvoc_objCreateDynamic_Subdevice(Dynamic **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, va_list __nvoc_args) {
    struct CALL_CONTEXT *pCallContext = va_arg(__nvoc_args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams = va_arg(__nvoc_args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    return __nvoc_objCreate_Subdevice((Subdevice **) __nvoc_ppThis, __nvoc_pParent, __nvoc_createFlags, pCallContext, pParams);
}

