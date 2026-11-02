#define NVOC_DISP_OBJS_H_PRIVATE_ACCESS_ALLOWED

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
#include "g_disp_objs_nvoc.h"


#ifdef DEBUG
char __nvoc_class_id_uniqueness_check__e9980c = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_DisplayApi;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_INotifier;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Notifier;

// Forward declarations for DisplayApi
void __nvoc_init__RmResource(RmResource*);
void __nvoc_init__Notifier(Notifier*);
void __nvoc_init__DisplayApi(DisplayApi*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_init_funcTable_DisplayApi(DisplayApi*, RmHalspecOwner *pRmhalspecowner);
NV_STATUS __nvoc_ctor_DisplayApi(DisplayApi*, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);
void __nvoc_init_dataField_DisplayApi(DisplayApi*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_dtor_DisplayApi(Dynamic*);

// Structures used within RTTI (run-time type information)
extern const struct NVOC_CASTINFO __nvoc_castinfo__DisplayApi;
extern const struct NVOC_EXPORT_INFO __nvoc_export_info__DisplayApi;

// Down-thunk(s) to bridge DisplayApi methods from ancestors (if any)
NvBool __nvoc_down_thunk_RmResource_resAccessCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super
NvBool __nvoc_down_thunk_RmResource_resShareCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super
NV_STATUS __nvoc_down_thunk_RmResource_resControlSerialization_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_down_thunk_RmResource_resControlSerialization_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_down_thunk_RmResource_resControl_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_down_thunk_RmResource_resControl_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
PEVENTNOTIFICATION * __nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr(struct INotifier *pNotifier);    // super
struct NotifShare * __nvoc_down_thunk_Notifier_inotifyGetNotificationShare(struct INotifier *pNotifier);    // super
void __nvoc_down_thunk_Notifier_inotifySetNotificationShare(struct INotifier *pNotifier, struct NotifShare *pNotifShare);    // super
NV_STATUS __nvoc_down_thunk_Notifier_inotifyUnregisterEvent(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // super
NV_STATUS __nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // super
NV_STATUS __nvoc_down_thunk_DisplayApi_resControl(struct RsResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_down_thunk_DisplayApi_rmresControl_Prologue(struct RmResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // this
void __nvoc_down_thunk_DisplayApi_rmresControl_Epilogue(struct RmResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // this

// Up-thunk(s) to bridge DisplayApi methods to ancestors (if any)
NvBool __nvoc_up_thunk_RsResource_rmresCanCopy(struct RmResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresIsDuplicate(struct RmResource *pResource, NvHandle hMemory, NvBool *pDuplicate);    // super
void __nvoc_up_thunk_RsResource_rmresPreDestruct(struct RmResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresControl(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresControlFilter(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresMap(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresUnmap(struct RmResource *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // super
NvBool __nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported(struct RmResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresMapTo(struct RmResource *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_rmresUnmapFrom(struct RmResource *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // super
NvU32 __nvoc_up_thunk_RsResource_rmresGetRefCount(struct RmResource *pResource);    // super
void __nvoc_up_thunk_RsResource_rmresAddAdditionalDependants(struct RsClient *pClient, struct RmResource *pResource, RsResourceRef *pReference);    // super
NvBool __nvoc_up_thunk_RmResource_dispapiAccessCallback(struct DisplayApi *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // this
NvBool __nvoc_up_thunk_RmResource_dispapiShareCallback(struct DisplayApi *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispapiGetMemInterMapParams(struct DisplayApi *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispapiCheckMemInterUnmap(struct DisplayApi *pRmResource, NvBool bSubdeviceHandleProvided);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispapiGetMemoryMappingDescriptor(struct DisplayApi *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispapiControlSerialization_Prologue(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_dispapiControlSerialization_Epilogue(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_dispapiCanCopy(struct DisplayApi *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispapiIsDuplicate(struct DisplayApi *pResource, NvHandle hMemory, NvBool *pDuplicate);    // this
void __nvoc_up_thunk_RsResource_dispapiPreDestruct(struct DisplayApi *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispapiControlFilter(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispapiMap(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispapiUnmap(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // this
NvBool __nvoc_up_thunk_RsResource_dispapiIsPartialUnmapSupported(struct DisplayApi *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispapiMapTo(struct DisplayApi *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispapiUnmapFrom(struct DisplayApi *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // this
NvU32 __nvoc_up_thunk_RsResource_dispapiGetRefCount(struct DisplayApi *pResource);    // this
void __nvoc_up_thunk_RsResource_dispapiAddAdditionalDependants(struct RsClient *pClient, struct DisplayApi *pResource, RsResourceRef *pReference);    // this
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_dispapiGetNotificationListPtr(struct DisplayApi *pNotifier);    // this
struct NotifShare * __nvoc_up_thunk_Notifier_dispapiGetNotificationShare(struct DisplayApi *pNotifier);    // this
void __nvoc_up_thunk_Notifier_dispapiSetNotificationShare(struct DisplayApi *pNotifier, struct NotifShare *pNotifShare);    // this
NV_STATUS __nvoc_up_thunk_Notifier_dispapiUnregisterEvent(struct DisplayApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // this
NV_STATUS __nvoc_up_thunk_Notifier_dispapiGetOrAllocNotifShare(struct DisplayApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // this

// Class-specific details for DisplayApi
const struct NVOC_CLASS_DEF __nvoc_class_def_DisplayApi = 
{
    .classInfo.size =               sizeof(DisplayApi),
    .classInfo.classId =            classId(DisplayApi),
    .classInfo.visibility =         NVOC_EVENT_VISIBILITY_NONEVENT,
    .classInfo.providerId =         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
    .classInfo.name =               "DisplayApi",
#endif
    .objCreatefn =        &__nvoc_objCreateDynamic_DisplayApi,
    .pCastInfo =          &__nvoc_castinfo__DisplayApi,
    .pExportInfo =        &__nvoc_export_info__DisplayApi
};


// Metadata with per-class RTTI and vtable with ancestor(s)
static const struct NVOC_METADATA__DisplayApi __nvoc_metadata__DisplayApi = {
    .rtti.pClassDef = &__nvoc_class_def_DisplayApi,    // (dispapi) this
    .rtti.dtor      = &__nvoc_dtor_DisplayApi,
    .rtti.offset    = 0,
    .metadata__RmResource.rtti.pClassDef = &__nvoc_class_def_RmResource,    // (rmres) super
    .metadata__RmResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__RmResource.rtti.offset    = NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource),
    .metadata__RmResource.metadata__RsResource.rtti.pClassDef = &__nvoc_class_def_RsResource,    // (res) super^2
    .metadata__RmResource.metadata__RsResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__RmResource.metadata__RsResource.rtti.offset    = NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource),
    .metadata__RmResource.metadata__RsResource.metadata__Object.rtti.pClassDef = &__nvoc_class_def_Object,    // (obj) super^3
    .metadata__RmResource.metadata__RsResource.metadata__Object.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__RmResource.metadata__RsResource.metadata__Object.rtti.offset    = NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
    .metadata__RmResource.metadata__RmResourceCommon.rtti.pClassDef = &__nvoc_class_def_RmResourceCommon,    // (rmrescmn) super^2
    .metadata__RmResource.metadata__RmResourceCommon.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__RmResource.metadata__RmResourceCommon.rtti.offset    = NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
    .metadata__Notifier.rtti.pClassDef = &__nvoc_class_def_Notifier,    // (notify) super
    .metadata__Notifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__Notifier.rtti.offset    = NV_OFFSETOF(DisplayApi, __nvoc_base_Notifier),
    .metadata__Notifier.metadata__INotifier.rtti.pClassDef = &__nvoc_class_def_INotifier,    // (inotify) super^2
    .metadata__Notifier.metadata__INotifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__Notifier.metadata__INotifier.rtti.offset    = NV_OFFSETOF(DisplayApi, __nvoc_base_Notifier.__nvoc_base_INotifier),

    .vtable.__dispapiControl__ = &dispapiControl_IMPL,    // virtual override (res) base (rmres)
    .metadata__RmResource.vtable.__rmresControl__ = &__nvoc_up_thunk_RsResource_rmresControl,    // virtual inherited (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resControl__ = &__nvoc_down_thunk_DisplayApi_resControl,    // virtual
    .vtable.__dispapiControl_Prologue__ = &dispapiControl_Prologue_IMPL,    // virtual override (res) base (rmres)
    .metadata__RmResource.vtable.__rmresControl_Prologue__ = &__nvoc_down_thunk_DisplayApi_rmresControl_Prologue,    // virtual override (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resControl_Prologue__ = &__nvoc_down_thunk_RmResource_resControl_Prologue,    // virtual
    .vtable.__dispapiControl_Epilogue__ = &dispapiControl_Epilogue_IMPL,    // virtual override (res) base (rmres)
    .metadata__RmResource.vtable.__rmresControl_Epilogue__ = &__nvoc_down_thunk_DisplayApi_rmresControl_Epilogue,    // virtual override (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resControl_Epilogue__ = &__nvoc_down_thunk_RmResource_resControl_Epilogue,    // virtual
    .vtable.__dispapiAccessCallback__ = &__nvoc_up_thunk_RmResource_dispapiAccessCallback,    // virtual inherited (rmres) base (rmres)
    .metadata__RmResource.vtable.__rmresAccessCallback__ = &rmresAccessCallback_IMPL,    // virtual override (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resAccessCallback__ = &__nvoc_down_thunk_RmResource_resAccessCallback,    // virtual
    .vtable.__dispapiShareCallback__ = &__nvoc_up_thunk_RmResource_dispapiShareCallback,    // virtual inherited (rmres) base (rmres)
    .metadata__RmResource.vtable.__rmresShareCallback__ = &rmresShareCallback_IMPL,    // virtual override (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resShareCallback__ = &__nvoc_down_thunk_RmResource_resShareCallback,    // virtual
    .vtable.__dispapiGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_dispapiGetMemInterMapParams,    // virtual inherited (rmres) base (rmres)
    .metadata__RmResource.vtable.__rmresGetMemInterMapParams__ = &rmresGetMemInterMapParams_IMPL,    // virtual
    .vtable.__dispapiCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_dispapiCheckMemInterUnmap,    // virtual inherited (rmres) base (rmres)
    .metadata__RmResource.vtable.__rmresCheckMemInterUnmap__ = &rmresCheckMemInterUnmap_IMPL,    // virtual
    .vtable.__dispapiGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_dispapiGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (rmres)
    .metadata__RmResource.vtable.__rmresGetMemoryMappingDescriptor__ = &rmresGetMemoryMappingDescriptor_IMPL,    // virtual
    .vtable.__dispapiControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_dispapiControlSerialization_Prologue,    // virtual inherited (rmres) base (rmres)
    .metadata__RmResource.vtable.__rmresControlSerialization_Prologue__ = &rmresControlSerialization_Prologue_IMPL,    // virtual override (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resControlSerialization_Prologue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Prologue,    // virtual
    .vtable.__dispapiControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_dispapiControlSerialization_Epilogue,    // virtual inherited (rmres) base (rmres)
    .metadata__RmResource.vtable.__rmresControlSerialization_Epilogue__ = &rmresControlSerialization_Epilogue_IMPL,    // virtual override (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resControlSerialization_Epilogue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Epilogue,    // virtual
    .vtable.__dispapiCanCopy__ = &__nvoc_up_thunk_RsResource_dispapiCanCopy,    // virtual inherited (res) base (rmres)
    .metadata__RmResource.vtable.__rmresCanCopy__ = &__nvoc_up_thunk_RsResource_rmresCanCopy,    // virtual inherited (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resCanCopy__ = &resCanCopy_IMPL,    // virtual
    .vtable.__dispapiIsDuplicate__ = &__nvoc_up_thunk_RsResource_dispapiIsDuplicate,    // virtual inherited (res) base (rmres)
    .metadata__RmResource.vtable.__rmresIsDuplicate__ = &__nvoc_up_thunk_RsResource_rmresIsDuplicate,    // virtual inherited (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resIsDuplicate__ = &resIsDuplicate_IMPL,    // virtual
    .vtable.__dispapiPreDestruct__ = &__nvoc_up_thunk_RsResource_dispapiPreDestruct,    // virtual inherited (res) base (rmres)
    .metadata__RmResource.vtable.__rmresPreDestruct__ = &__nvoc_up_thunk_RsResource_rmresPreDestruct,    // virtual inherited (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resPreDestruct__ = &resPreDestruct_IMPL,    // virtual
    .vtable.__dispapiControlFilter__ = &__nvoc_up_thunk_RsResource_dispapiControlFilter,    // virtual inherited (res) base (rmres)
    .metadata__RmResource.vtable.__rmresControlFilter__ = &__nvoc_up_thunk_RsResource_rmresControlFilter,    // virtual inherited (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resControlFilter__ = &resControlFilter_IMPL,    // virtual
    .vtable.__dispapiMap__ = &__nvoc_up_thunk_RsResource_dispapiMap,    // virtual inherited (res) base (rmres)
    .metadata__RmResource.vtable.__rmresMap__ = &__nvoc_up_thunk_RsResource_rmresMap,    // virtual inherited (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resMap__ = &resMap_IMPL,    // virtual
    .vtable.__dispapiUnmap__ = &__nvoc_up_thunk_RsResource_dispapiUnmap,    // virtual inherited (res) base (rmres)
    .metadata__RmResource.vtable.__rmresUnmap__ = &__nvoc_up_thunk_RsResource_rmresUnmap,    // virtual inherited (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resUnmap__ = &resUnmap_IMPL,    // virtual
    .vtable.__dispapiIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_dispapiIsPartialUnmapSupported,    // inline virtual inherited (res) base (rmres) body
    .metadata__RmResource.vtable.__rmresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported,    // inline virtual inherited (res) base (res) body
    .metadata__RmResource.metadata__RsResource.vtable.__resIsPartialUnmapSupported__ = &resIsPartialUnmapSupported_d69453,    // inline virtual body
    .vtable.__dispapiMapTo__ = &__nvoc_up_thunk_RsResource_dispapiMapTo,    // virtual inherited (res) base (rmres)
    .metadata__RmResource.vtable.__rmresMapTo__ = &__nvoc_up_thunk_RsResource_rmresMapTo,    // virtual inherited (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resMapTo__ = &resMapTo_IMPL,    // virtual
    .vtable.__dispapiUnmapFrom__ = &__nvoc_up_thunk_RsResource_dispapiUnmapFrom,    // virtual inherited (res) base (rmres)
    .metadata__RmResource.vtable.__rmresUnmapFrom__ = &__nvoc_up_thunk_RsResource_rmresUnmapFrom,    // virtual inherited (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resUnmapFrom__ = &resUnmapFrom_IMPL,    // virtual
    .vtable.__dispapiGetRefCount__ = &__nvoc_up_thunk_RsResource_dispapiGetRefCount,    // virtual inherited (res) base (rmres)
    .metadata__RmResource.vtable.__rmresGetRefCount__ = &__nvoc_up_thunk_RsResource_rmresGetRefCount,    // virtual inherited (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resGetRefCount__ = &resGetRefCount_IMPL,    // virtual
    .vtable.__dispapiAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_dispapiAddAdditionalDependants,    // virtual inherited (res) base (rmres)
    .metadata__RmResource.vtable.__rmresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_rmresAddAdditionalDependants,    // virtual inherited (res) base (res)
    .metadata__RmResource.metadata__RsResource.vtable.__resAddAdditionalDependants__ = &resAddAdditionalDependants_IMPL,    // virtual
    .vtable.__dispapiGetNotificationListPtr__ = &__nvoc_up_thunk_Notifier_dispapiGetNotificationListPtr,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyGetNotificationListPtr__ = &notifyGetNotificationListPtr_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationListPtr__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr,    // pure virtual
    .vtable.__dispapiGetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispapiGetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyGetNotificationShare__ = &notifyGetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationShare,    // pure virtual
    .vtable.__dispapiSetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispapiSetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifySetNotificationShare__ = &notifySetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifySetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifySetNotificationShare,    // pure virtual
    .vtable.__dispapiUnregisterEvent__ = &__nvoc_up_thunk_Notifier_dispapiUnregisterEvent,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyUnregisterEvent__ = &notifyUnregisterEvent_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyUnregisterEvent__ = &__nvoc_down_thunk_Notifier_inotifyUnregisterEvent,    // pure virtual
    .vtable.__dispapiGetOrAllocNotifShare__ = &__nvoc_up_thunk_Notifier_dispapiGetOrAllocNotifShare,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyGetOrAllocNotifShare__ = &notifyGetOrAllocNotifShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyGetOrAllocNotifShare__ = &__nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare,    // pure virtual
};


// Dynamic down-casting information
const struct NVOC_CASTINFO __nvoc_castinfo__DisplayApi = {
    .numRelatives = 7,
    .relatives = {
        &__nvoc_metadata__DisplayApi.rtti,    // [0]: (dispapi) this
        &__nvoc_metadata__DisplayApi.metadata__RmResource.rtti,    // [1]: (rmres) super
        &__nvoc_metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti,    // [2]: (res) super^2
        &__nvoc_metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti,    // [3]: (obj) super^3
        &__nvoc_metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti,    // [4]: (rmrescmn) super^2
        &__nvoc_metadata__DisplayApi.metadata__Notifier.rtti,    // [5]: (notify) super
        &__nvoc_metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti,    // [6]: (inotify) super^2
    }
};

// 3 down-thunk(s) defined to bridge methods in DisplayApi from superclasses

// dispapiControl: virtual override (res) base (rmres)
NV_STATUS __nvoc_down_thunk_DisplayApi_resControl(struct RsResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return dispapiControl((struct DisplayApi *)(((unsigned char *) pDisplayApi) - NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// dispapiControl_Prologue: virtual override (res) base (rmres)
NV_STATUS __nvoc_down_thunk_DisplayApi_rmresControl_Prologue(struct RmResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams) {
    return dispapiControl_Prologue((struct DisplayApi *)(((unsigned char *) pDisplayApi) - NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource)), pCallContext, pRsParams);
}

// dispapiControl_Epilogue: virtual override (res) base (rmres)
void __nvoc_down_thunk_DisplayApi_rmresControl_Epilogue(struct RmResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams) {
    dispapiControl_Epilogue((struct DisplayApi *)(((unsigned char *) pDisplayApi) - NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource)), pCallContext, pRsParams);
}


// 23 up-thunk(s) defined to bridge methods in DisplayApi to superclasses

// dispapiAccessCallback: virtual inherited (rmres) base (rmres)
NvBool __nvoc_up_thunk_RmResource_dispapiAccessCallback(struct DisplayApi *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource)), pInvokingClient, pAllocParams, accessRight);
}

// dispapiShareCallback: virtual inherited (rmres) base (rmres)
NvBool __nvoc_up_thunk_RmResource_dispapiShareCallback(struct DisplayApi *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return rmresShareCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource)), pInvokingClient, pParentRef, pSharePolicy);
}

// dispapiGetMemInterMapParams: virtual inherited (rmres) base (rmres)
NV_STATUS __nvoc_up_thunk_RmResource_dispapiGetMemInterMapParams(struct DisplayApi *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return rmresGetMemInterMapParams((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource)), pParams);
}

// dispapiCheckMemInterUnmap: virtual inherited (rmres) base (rmres)
NV_STATUS __nvoc_up_thunk_RmResource_dispapiCheckMemInterUnmap(struct DisplayApi *pRmResource, NvBool bSubdeviceHandleProvided) {
    return rmresCheckMemInterUnmap((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource)), bSubdeviceHandleProvided);
}

// dispapiGetMemoryMappingDescriptor: virtual inherited (rmres) base (rmres)
NV_STATUS __nvoc_up_thunk_RmResource_dispapiGetMemoryMappingDescriptor(struct DisplayApi *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc) {
    return rmresGetMemoryMappingDescriptor((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource)), ppMemDesc);
}

// dispapiControlSerialization_Prologue: virtual inherited (rmres) base (rmres)
NV_STATUS __nvoc_up_thunk_RmResource_dispapiControlSerialization_Prologue(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControlSerialization_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource)), pCallContext, pParams);
}

// dispapiControlSerialization_Epilogue: virtual inherited (rmres) base (rmres)
void __nvoc_up_thunk_RmResource_dispapiControlSerialization_Epilogue(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControlSerialization_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource)), pCallContext, pParams);
}

// dispapiCanCopy: virtual inherited (res) base (rmres)
NvBool __nvoc_up_thunk_RsResource_dispapiCanCopy(struct DisplayApi *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispapiIsDuplicate: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_dispapiIsDuplicate(struct DisplayApi *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)), hMemory, pDuplicate);
}

// dispapiPreDestruct: virtual inherited (res) base (rmres)
void __nvoc_up_thunk_RsResource_dispapiPreDestruct(struct DisplayApi *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispapiControlFilter: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_dispapiControlFilter(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// dispapiMap: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_dispapiMap(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping) {
    return resMap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams, pCpuMapping);
}

// dispapiUnmap: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_dispapiUnmap(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping) {
    return resUnmap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pCpuMapping);
}

// dispapiIsPartialUnmapSupported: inline virtual inherited (res) base (rmres) body
NvBool __nvoc_up_thunk_RsResource_dispapiIsPartialUnmapSupported(struct DisplayApi *pResource) {
    return resIsPartialUnmapSupported((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispapiMapTo: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_dispapiMapTo(struct DisplayApi *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// dispapiUnmapFrom: virtual inherited (res) base (rmres)
NV_STATUS __nvoc_up_thunk_RsResource_dispapiUnmapFrom(struct DisplayApi *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// dispapiGetRefCount: virtual inherited (res) base (rmres)
NvU32 __nvoc_up_thunk_RsResource_dispapiGetRefCount(struct DisplayApi *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispapiAddAdditionalDependants: virtual inherited (res) base (rmres)
void __nvoc_up_thunk_RsResource_dispapiAddAdditionalDependants(struct RsClient *pClient, struct DisplayApi *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DisplayApi, __nvoc_base_RmResource.__nvoc_base_RsResource)), pReference);
}

// dispapiGetNotificationListPtr: virtual inherited (notify) base (notify)
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_dispapiGetNotificationListPtr(struct DisplayApi *pNotifier) {
    return notifyGetNotificationListPtr((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DisplayApi, __nvoc_base_Notifier)));
}

// dispapiGetNotificationShare: virtual inherited (notify) base (notify)
struct NotifShare * __nvoc_up_thunk_Notifier_dispapiGetNotificationShare(struct DisplayApi *pNotifier) {
    return notifyGetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DisplayApi, __nvoc_base_Notifier)));
}

// dispapiSetNotificationShare: virtual inherited (notify) base (notify)
void __nvoc_up_thunk_Notifier_dispapiSetNotificationShare(struct DisplayApi *pNotifier, struct NotifShare *pNotifShare) {
    notifySetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DisplayApi, __nvoc_base_Notifier)), pNotifShare);
}

// dispapiUnregisterEvent: virtual inherited (notify) base (notify)
NV_STATUS __nvoc_up_thunk_Notifier_dispapiUnregisterEvent(struct DisplayApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent) {
    return notifyUnregisterEvent((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DisplayApi, __nvoc_base_Notifier)), hNotifierClient, hNotifierResource, hEventClient, hEvent);
}

// dispapiGetOrAllocNotifShare: virtual inherited (notify) base (notify)
NV_STATUS __nvoc_up_thunk_Notifier_dispapiGetOrAllocNotifShare(struct DisplayApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare) {
    return notifyGetOrAllocNotifShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DisplayApi, __nvoc_base_Notifier)), hNotifierClient, hNotifierResource, ppNotifShare);
}


const struct NVOC_EXPORT_INFO __nvoc_export_info__DisplayApi = 
{
    .numEntries=     0,
    .pExportEntries= 0
};


// Destruct DisplayApi object.
void __nvoc_dispapiDestruct(DisplayApi*);
void __nvoc_dtor_RmResource(Dynamic*);
void __nvoc_dtor_Notifier(Dynamic*);
void __nvoc_dtor_DisplayApi(Dynamic* pThis) {

    DisplayApi *__nvoc_this = (DisplayApi *) pThis;

// Call destructor.
    __nvoc_dispapiDestruct(__nvoc_this);

// Recurse to superclass destructors.
    __nvoc_dtor_RmResource((Dynamic *) &__nvoc_this->__nvoc_base_RmResource);
    __nvoc_dtor_Notifier((Dynamic *) &__nvoc_this->__nvoc_base_Notifier);

    PORT_UNREFERENCED_VARIABLE(__nvoc_this);
}
void __nvoc_init_dataField_DisplayApi(DisplayApi *pThis, RmHalspecOwner *pRmhalspecowner) {
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);
}


// Construct DisplayApi object.
NV_STATUS __nvoc_ctor_RmResource(RmResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);    // inline
NV_STATUS __nvoc_ctor_Notifier(Notifier *pNotifier, struct CALL_CONTEXT *pCallContext);    // inline
NV_STATUS __nvoc_ctor_DisplayApi(DisplayApi *pDisplayApi, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams) {    // inline
    NV_STATUS status = NV_OK;

    // Recurse to ancestor constructor(s).
    status = __nvoc_ctor_RmResource(&pDisplayApi->__nvoc_base_RmResource, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_DisplayApi_fail_RmResource;
    status = __nvoc_ctor_Notifier(&pDisplayApi->__nvoc_base_Notifier, pCallContext);
    if (status != NV_OK) goto __nvoc_ctor_DisplayApi_fail_Notifier;

    // Initialize data fields.
    __nvoc_init_dataField_DisplayApi(pDisplayApi, pRmhalspecowner);

    // Call the constructor for this class.
    status = __nvoc_dispapiConstruct(pDisplayApi, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_DisplayApi_fail__init;
    goto __nvoc_ctor_DisplayApi_exit; // Success

    // Unwind on error.
__nvoc_ctor_DisplayApi_fail__init:
    __nvoc_dtor_Notifier((Dynamic *)&pDisplayApi->__nvoc_base_Notifier);
__nvoc_ctor_DisplayApi_fail_Notifier:
    __nvoc_dtor_RmResource((Dynamic *)&pDisplayApi->__nvoc_base_RmResource);
__nvoc_ctor_DisplayApi_fail_RmResource:
__nvoc_ctor_DisplayApi_exit:
    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_DisplayApi_1(DisplayApi *pThis, RmHalspecOwner *pRmhalspecowner) {
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);
} // End __nvoc_init_funcTable_DisplayApi_1


// Initialize vtable(s) for 26 virtual method(s).
void __nvoc_init_funcTable_DisplayApi(DisplayApi *pThis, RmHalspecOwner *pRmhalspecowner) {
    __nvoc_init_funcTable_DisplayApi_1(pThis, pRmhalspecowner);
}

// Initialize newly constructed object.
void __nvoc_init__DisplayApi(DisplayApi *pThis, RmHalspecOwner *pRmhalspecowner) {

    // Initialize pointers to inherited data.
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;    // (obj) super^3
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_RmResource.__nvoc_base_RsResource;    // (res) super^2
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;    // (rmrescmn) super^2
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_RmResource;    // (rmres) super
    pThis->__nvoc_pbase_INotifier = &pThis->__nvoc_base_Notifier.__nvoc_base_INotifier;    // (inotify) super^2
    pThis->__nvoc_pbase_Notifier = &pThis->__nvoc_base_Notifier;    // (notify) super
    pThis->__nvoc_pbase_DisplayApi = pThis;    // (dispapi) this

    // Recurse to superclass initialization function(s).
    __nvoc_init__RmResource(&pThis->__nvoc_base_RmResource);
    __nvoc_init__Notifier(&pThis->__nvoc_base_Notifier);

    // Pointer(s) to metadata structures(s)
    pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.__nvoc_metadata_ptr = &__nvoc_metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object;    // (obj) super^3
    pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_metadata_ptr = &__nvoc_metadata__DisplayApi.metadata__RmResource.metadata__RsResource;    // (res) super^2
    pThis->__nvoc_base_RmResource.__nvoc_base_RmResourceCommon.__nvoc_metadata_ptr = &__nvoc_metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon;    // (rmrescmn) super^2
    pThis->__nvoc_base_RmResource.__nvoc_metadata_ptr = &__nvoc_metadata__DisplayApi.metadata__RmResource;    // (rmres) super
    pThis->__nvoc_base_Notifier.__nvoc_base_INotifier.__nvoc_metadata_ptr = &__nvoc_metadata__DisplayApi.metadata__Notifier.metadata__INotifier;    // (inotify) super^2
    pThis->__nvoc_base_Notifier.__nvoc_metadata_ptr = &__nvoc_metadata__DisplayApi.metadata__Notifier;    // (notify) super
    pThis->__nvoc_metadata_ptr = &__nvoc_metadata__DisplayApi;    // (dispapi) this

    // Initialize per-object vtables.
    __nvoc_init_funcTable_DisplayApi(pThis, pRmhalspecowner);
}

NV_STATUS __nvoc_objCreate_DisplayApi(DisplayApi **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams)
{
    NV_STATUS __nvoc_status;
    Object *__nvoc_pParentObj = NULL;
    DisplayApi *__nvoc_pThis;
    RmHalspecOwner *pRmhalspecowner;

    // Don't allocate memory if the caller has already done so.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
    {
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_ppThis != NULL && *__nvoc_ppThis != NULL, NV_ERR_INVALID_PARAMETER);
        __nvoc_pThis = *__nvoc_ppThis;
    }

    // Allocate memory
    else
    {
        __nvoc_pThis = portMemAllocNonPaged(sizeof(DisplayApi));
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_pThis != NULL, NV_ERR_NO_MEMORY);
    }

    // Zero is the initial value for everything.
    portMemSet(__nvoc_pThis, 0, sizeof(DisplayApi));

    __nvoc_pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = __nvoc_createFlags;

    // pParent must be a valid object that derives from a halspec owner class.
    NV_CHECK_TRUE_OR_GOTO(__nvoc_status, LEVEL_ERROR, __nvoc_pParent != NULL, NV_ERR_INVALID_ARGUMENT, __nvoc_objCreate_DisplayApi_cleanup);

    // Link the child into the parent unless flagged not to do so.
    if (!(__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        __nvoc_pParentObj = dynamicCast(__nvoc_pParent, Object);
        objAddChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        __nvoc_pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    // HALs are defined by the parent or the first super class.
    if ((pRmhalspecowner = dynamicCast(__nvoc_pParent, RmHalspecOwner)) == NULL)
        pRmhalspecowner = objFindAncestorOfType(RmHalspecOwner, __nvoc_pParent);
    NV_CHECK_TRUE_OR_GOTO(__nvoc_status, LEVEL_ERROR, pRmhalspecowner != NULL, NV_ERR_INVALID_ARGUMENT, __nvoc_objCreate_DisplayApi_cleanup);

    // Initialize vtable, RTTI, etc., then call constructor.
    __nvoc_init__DisplayApi(__nvoc_pThis, pRmhalspecowner);
    __nvoc_status = __nvoc_ctor_DisplayApi(__nvoc_pThis, pRmhalspecowner, pCallContext, pParams);
    if (__nvoc_status != NV_OK) goto __nvoc_objCreate_DisplayApi_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *__nvoc_ppThis = __nvoc_pThis;

    // Success
    return NV_OK;

    // Do not call destructors here since the constructor already called them.
__nvoc_objCreate_DisplayApi_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (__nvoc_pParentObj != NULL)
        objRemoveChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);

    // Zero out memory that was allocated by caller.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(__nvoc_pThis, 0, sizeof(DisplayApi));

    // Free memory allocated by `__nvoc_handleObjCreateMemAlloc`.
    else
    {
        portMemFree(__nvoc_pThis);
        *__nvoc_ppThis = NULL;
    }

    // Failure
    return __nvoc_status;
}

NV_STATUS __nvoc_objCreateDynamic_DisplayApi(Dynamic **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, va_list __nvoc_args) {
    struct CALL_CONTEXT *pCallContext = va_arg(__nvoc_args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams = va_arg(__nvoc_args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    return __nvoc_objCreate_DisplayApi((DisplayApi **) __nvoc_ppThis, __nvoc_pParent, __nvoc_createFlags, pCallContext, pParams);
}


#ifdef DEBUG
char __nvoc_class_id_uniqueness_check__36aa0b = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_NvDispApi;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_INotifier;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Notifier;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_DisplayApi;

// Forward declarations for NvDispApi
void __nvoc_init__DisplayApi(DisplayApi*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_init__NvDispApi(NvDispApi*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_init_funcTable_NvDispApi(NvDispApi*, RmHalspecOwner *pRmhalspecowner);
NV_STATUS __nvoc_ctor_NvDispApi(NvDispApi*, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);
void __nvoc_init_dataField_NvDispApi(NvDispApi*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_dtor_NvDispApi(Dynamic*);

// Structures used within RTTI (run-time type information)
extern const struct NVOC_CASTINFO __nvoc_castinfo__NvDispApi;
extern const struct NVOC_EXPORT_INFO __nvoc_export_info__NvDispApi;

// Down-thunk(s) to bridge NvDispApi methods from ancestors (if any)
NvBool __nvoc_down_thunk_RmResource_resAccessCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super^2
NvBool __nvoc_down_thunk_RmResource_resShareCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControlSerialization_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControlSerialization_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControl_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControl_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
PEVENTNOTIFICATION * __nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr(struct INotifier *pNotifier);    // super^2
struct NotifShare * __nvoc_down_thunk_Notifier_inotifyGetNotificationShare(struct INotifier *pNotifier);    // super^2
void __nvoc_down_thunk_Notifier_inotifySetNotificationShare(struct INotifier *pNotifier, struct NotifShare *pNotifShare);    // super^2
NV_STATUS __nvoc_down_thunk_Notifier_inotifyUnregisterEvent(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // super^2
NV_STATUS __nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // super^2
NV_STATUS __nvoc_down_thunk_DisplayApi_resControl(struct RsResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_down_thunk_DisplayApi_rmresControl_Prologue(struct RmResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // super
void __nvoc_down_thunk_DisplayApi_rmresControl_Epilogue(struct RmResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // super

// Up-thunk(s) to bridge NvDispApi methods to ancestors (if any)
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
NvBool __nvoc_up_thunk_RmResource_dispapiAccessCallback(struct DisplayApi *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super
NvBool __nvoc_up_thunk_RmResource_dispapiShareCallback(struct DisplayApi *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiGetMemInterMapParams(struct DisplayApi *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiCheckMemInterUnmap(struct DisplayApi *pRmResource, NvBool bSubdeviceHandleProvided);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiGetMemoryMappingDescriptor(struct DisplayApi *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiControlSerialization_Prologue(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_up_thunk_RmResource_dispapiControlSerialization_Epilogue(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NvBool __nvoc_up_thunk_RsResource_dispapiCanCopy(struct DisplayApi *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiIsDuplicate(struct DisplayApi *pResource, NvHandle hMemory, NvBool *pDuplicate);    // super
void __nvoc_up_thunk_RsResource_dispapiPreDestruct(struct DisplayApi *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiControlFilter(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiMap(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiUnmap(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // super
NvBool __nvoc_up_thunk_RsResource_dispapiIsPartialUnmapSupported(struct DisplayApi *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiMapTo(struct DisplayApi *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiUnmapFrom(struct DisplayApi *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // super
NvU32 __nvoc_up_thunk_RsResource_dispapiGetRefCount(struct DisplayApi *pResource);    // super
void __nvoc_up_thunk_RsResource_dispapiAddAdditionalDependants(struct RsClient *pClient, struct DisplayApi *pResource, RsResourceRef *pReference);    // super
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_dispapiGetNotificationListPtr(struct DisplayApi *pNotifier);    // super
struct NotifShare * __nvoc_up_thunk_Notifier_dispapiGetNotificationShare(struct DisplayApi *pNotifier);    // super
void __nvoc_up_thunk_Notifier_dispapiSetNotificationShare(struct DisplayApi *pNotifier, struct NotifShare *pNotifShare);    // super
NV_STATUS __nvoc_up_thunk_Notifier_dispapiUnregisterEvent(struct DisplayApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // super
NV_STATUS __nvoc_up_thunk_Notifier_dispapiGetOrAllocNotifShare(struct DisplayApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // super
NV_STATUS __nvoc_up_thunk_DisplayApi_nvdispapiControl(struct NvDispApi *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_DisplayApi_nvdispapiControl_Prologue(struct NvDispApi *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // this
void __nvoc_up_thunk_DisplayApi_nvdispapiControl_Epilogue(struct NvDispApi *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // this
NvBool __nvoc_up_thunk_RmResource_nvdispapiAccessCallback(struct NvDispApi *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // this
NvBool __nvoc_up_thunk_RmResource_nvdispapiShareCallback(struct NvDispApi *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // this
NV_STATUS __nvoc_up_thunk_RmResource_nvdispapiGetMemInterMapParams(struct NvDispApi *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_nvdispapiCheckMemInterUnmap(struct NvDispApi *pRmResource, NvBool bSubdeviceHandleProvided);    // this
NV_STATUS __nvoc_up_thunk_RmResource_nvdispapiGetMemoryMappingDescriptor(struct NvDispApi *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // this
NV_STATUS __nvoc_up_thunk_RmResource_nvdispapiControlSerialization_Prologue(struct NvDispApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_nvdispapiControlSerialization_Epilogue(struct NvDispApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_nvdispapiCanCopy(struct NvDispApi *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiIsDuplicate(struct NvDispApi *pResource, NvHandle hMemory, NvBool *pDuplicate);    // this
void __nvoc_up_thunk_RsResource_nvdispapiPreDestruct(struct NvDispApi *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiControlFilter(struct NvDispApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiMap(struct NvDispApi *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiUnmap(struct NvDispApi *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // this
NvBool __nvoc_up_thunk_RsResource_nvdispapiIsPartialUnmapSupported(struct NvDispApi *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiMapTo(struct NvDispApi *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiUnmapFrom(struct NvDispApi *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // this
NvU32 __nvoc_up_thunk_RsResource_nvdispapiGetRefCount(struct NvDispApi *pResource);    // this
void __nvoc_up_thunk_RsResource_nvdispapiAddAdditionalDependants(struct RsClient *pClient, struct NvDispApi *pResource, RsResourceRef *pReference);    // this
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_nvdispapiGetNotificationListPtr(struct NvDispApi *pNotifier);    // this
struct NotifShare * __nvoc_up_thunk_Notifier_nvdispapiGetNotificationShare(struct NvDispApi *pNotifier);    // this
void __nvoc_up_thunk_Notifier_nvdispapiSetNotificationShare(struct NvDispApi *pNotifier, struct NotifShare *pNotifShare);    // this
NV_STATUS __nvoc_up_thunk_Notifier_nvdispapiUnregisterEvent(struct NvDispApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // this
NV_STATUS __nvoc_up_thunk_Notifier_nvdispapiGetOrAllocNotifShare(struct NvDispApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // this

// Class-specific details for NvDispApi
const struct NVOC_CLASS_DEF __nvoc_class_def_NvDispApi = 
{
    .classInfo.size =               sizeof(NvDispApi),
    .classInfo.classId =            classId(NvDispApi),
    .classInfo.visibility =         NVOC_EVENT_VISIBILITY_NONEVENT,
    .classInfo.providerId =         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
    .classInfo.name =               "NvDispApi",
#endif
    .objCreatefn =        &__nvoc_objCreateDynamic_NvDispApi,
    .pCastInfo =          &__nvoc_castinfo__NvDispApi,
    .pExportInfo =        &__nvoc_export_info__NvDispApi
};

// By default, all exported methods are enabled.
#if !defined(NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG)
#define NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(x)      (0)
#endif

// Exported trampoline function definitions



























// Exported method array
static const struct NVOC_EXPORTED_METHOD_DEF __nvoc_exported_method_def_NvDispApi[] = 
{
};


// Metadata with per-class RTTI and vtable with ancestor(s)
static const struct NVOC_METADATA__NvDispApi __nvoc_metadata__NvDispApi = {
    .rtti.pClassDef = &__nvoc_class_def_NvDispApi,    // (nvdispapi) this
    .rtti.dtor      = &__nvoc_dtor_NvDispApi,
    .rtti.offset    = 0,
    .metadata__DisplayApi.rtti.pClassDef = &__nvoc_class_def_DisplayApi,    // (dispapi) super
    .metadata__DisplayApi.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.rtti.offset    = NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi),
    .metadata__DisplayApi.metadata__RmResource.rtti.pClassDef = &__nvoc_class_def_RmResource,    // (rmres) super^2
    .metadata__DisplayApi.metadata__RmResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.rtti.offset    = NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource),
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti.pClassDef = &__nvoc_class_def_RsResource,    // (res) super^3
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti.offset    = NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource),
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.pClassDef = &__nvoc_class_def_Object,    // (obj) super^4
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.offset    = NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
    .metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti.pClassDef = &__nvoc_class_def_RmResourceCommon,    // (rmrescmn) super^3
    .metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti.offset    = NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
    .metadata__DisplayApi.metadata__Notifier.rtti.pClassDef = &__nvoc_class_def_Notifier,    // (notify) super^2
    .metadata__DisplayApi.metadata__Notifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__Notifier.rtti.offset    = NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_Notifier),
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti.pClassDef = &__nvoc_class_def_INotifier,    // (inotify) super^3
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti.offset    = NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_base_INotifier),

    .vtable.__nvdispapiControl__ = &__nvoc_up_thunk_DisplayApi_nvdispapiControl,    // virtual inherited (dispapi) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControl__ = &dispapiControl_IMPL,    // virtual override (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControl__ = &__nvoc_up_thunk_RsResource_rmresControl,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControl__ = &__nvoc_down_thunk_DisplayApi_resControl,    // virtual
    .vtable.__nvdispapiControl_Prologue__ = &__nvoc_up_thunk_DisplayApi_nvdispapiControl_Prologue,    // virtual inherited (dispapi) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControl_Prologue__ = &dispapiControl_Prologue_IMPL,    // virtual override (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControl_Prologue__ = &__nvoc_down_thunk_DisplayApi_rmresControl_Prologue,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControl_Prologue__ = &__nvoc_down_thunk_RmResource_resControl_Prologue,    // virtual
    .vtable.__nvdispapiControl_Epilogue__ = &__nvoc_up_thunk_DisplayApi_nvdispapiControl_Epilogue,    // virtual inherited (dispapi) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControl_Epilogue__ = &dispapiControl_Epilogue_IMPL,    // virtual override (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControl_Epilogue__ = &__nvoc_down_thunk_DisplayApi_rmresControl_Epilogue,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControl_Epilogue__ = &__nvoc_down_thunk_RmResource_resControl_Epilogue,    // virtual
    .vtable.__nvdispapiAccessCallback__ = &__nvoc_up_thunk_RmResource_nvdispapiAccessCallback,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiAccessCallback__ = &__nvoc_up_thunk_RmResource_dispapiAccessCallback,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresAccessCallback__ = &rmresAccessCallback_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resAccessCallback__ = &__nvoc_down_thunk_RmResource_resAccessCallback,    // virtual
    .vtable.__nvdispapiShareCallback__ = &__nvoc_up_thunk_RmResource_nvdispapiShareCallback,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiShareCallback__ = &__nvoc_up_thunk_RmResource_dispapiShareCallback,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresShareCallback__ = &rmresShareCallback_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resShareCallback__ = &__nvoc_down_thunk_RmResource_resShareCallback,    // virtual
    .vtable.__nvdispapiGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_nvdispapiGetMemInterMapParams,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_dispapiGetMemInterMapParams,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresGetMemInterMapParams__ = &rmresGetMemInterMapParams_IMPL,    // virtual
    .vtable.__nvdispapiCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_nvdispapiCheckMemInterUnmap,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_dispapiCheckMemInterUnmap,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresCheckMemInterUnmap__ = &rmresCheckMemInterUnmap_IMPL,    // virtual
    .vtable.__nvdispapiGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_nvdispapiGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_dispapiGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresGetMemoryMappingDescriptor__ = &rmresGetMemoryMappingDescriptor_IMPL,    // virtual
    .vtable.__nvdispapiControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_nvdispapiControlSerialization_Prologue,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_dispapiControlSerialization_Prologue,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControlSerialization_Prologue__ = &rmresControlSerialization_Prologue_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControlSerialization_Prologue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Prologue,    // virtual
    .vtable.__nvdispapiControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_nvdispapiControlSerialization_Epilogue,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_dispapiControlSerialization_Epilogue,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControlSerialization_Epilogue__ = &rmresControlSerialization_Epilogue_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControlSerialization_Epilogue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Epilogue,    // virtual
    .vtable.__nvdispapiCanCopy__ = &__nvoc_up_thunk_RsResource_nvdispapiCanCopy,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiCanCopy__ = &__nvoc_up_thunk_RsResource_dispapiCanCopy,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresCanCopy__ = &__nvoc_up_thunk_RsResource_rmresCanCopy,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resCanCopy__ = &resCanCopy_IMPL,    // virtual
    .vtable.__nvdispapiIsDuplicate__ = &__nvoc_up_thunk_RsResource_nvdispapiIsDuplicate,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiIsDuplicate__ = &__nvoc_up_thunk_RsResource_dispapiIsDuplicate,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresIsDuplicate__ = &__nvoc_up_thunk_RsResource_rmresIsDuplicate,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resIsDuplicate__ = &resIsDuplicate_IMPL,    // virtual
    .vtable.__nvdispapiPreDestruct__ = &__nvoc_up_thunk_RsResource_nvdispapiPreDestruct,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiPreDestruct__ = &__nvoc_up_thunk_RsResource_dispapiPreDestruct,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresPreDestruct__ = &__nvoc_up_thunk_RsResource_rmresPreDestruct,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resPreDestruct__ = &resPreDestruct_IMPL,    // virtual
    .vtable.__nvdispapiControlFilter__ = &__nvoc_up_thunk_RsResource_nvdispapiControlFilter,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControlFilter__ = &__nvoc_up_thunk_RsResource_dispapiControlFilter,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControlFilter__ = &__nvoc_up_thunk_RsResource_rmresControlFilter,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControlFilter__ = &resControlFilter_IMPL,    // virtual
    .vtable.__nvdispapiMap__ = &__nvoc_up_thunk_RsResource_nvdispapiMap,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiMap__ = &__nvoc_up_thunk_RsResource_dispapiMap,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresMap__ = &__nvoc_up_thunk_RsResource_rmresMap,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resMap__ = &resMap_IMPL,    // virtual
    .vtable.__nvdispapiUnmap__ = &__nvoc_up_thunk_RsResource_nvdispapiUnmap,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiUnmap__ = &__nvoc_up_thunk_RsResource_dispapiUnmap,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresUnmap__ = &__nvoc_up_thunk_RsResource_rmresUnmap,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resUnmap__ = &resUnmap_IMPL,    // virtual
    .vtable.__nvdispapiIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_nvdispapiIsPartialUnmapSupported,    // inline virtual inherited (res) base (dispapi) body
    .metadata__DisplayApi.vtable.__dispapiIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_dispapiIsPartialUnmapSupported,    // inline virtual inherited (res) base (rmres) body
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported,    // inline virtual inherited (res) base (res) body
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resIsPartialUnmapSupported__ = &resIsPartialUnmapSupported_d69453,    // inline virtual body
    .vtable.__nvdispapiMapTo__ = &__nvoc_up_thunk_RsResource_nvdispapiMapTo,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiMapTo__ = &__nvoc_up_thunk_RsResource_dispapiMapTo,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresMapTo__ = &__nvoc_up_thunk_RsResource_rmresMapTo,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resMapTo__ = &resMapTo_IMPL,    // virtual
    .vtable.__nvdispapiUnmapFrom__ = &__nvoc_up_thunk_RsResource_nvdispapiUnmapFrom,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiUnmapFrom__ = &__nvoc_up_thunk_RsResource_dispapiUnmapFrom,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresUnmapFrom__ = &__nvoc_up_thunk_RsResource_rmresUnmapFrom,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resUnmapFrom__ = &resUnmapFrom_IMPL,    // virtual
    .vtable.__nvdispapiGetRefCount__ = &__nvoc_up_thunk_RsResource_nvdispapiGetRefCount,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetRefCount__ = &__nvoc_up_thunk_RsResource_dispapiGetRefCount,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresGetRefCount__ = &__nvoc_up_thunk_RsResource_rmresGetRefCount,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resGetRefCount__ = &resGetRefCount_IMPL,    // virtual
    .vtable.__nvdispapiAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_nvdispapiAddAdditionalDependants,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_dispapiAddAdditionalDependants,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_rmresAddAdditionalDependants,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resAddAdditionalDependants__ = &resAddAdditionalDependants_IMPL,    // virtual
    .vtable.__nvdispapiGetNotificationListPtr__ = &__nvoc_up_thunk_Notifier_nvdispapiGetNotificationListPtr,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetNotificationListPtr__ = &__nvoc_up_thunk_Notifier_dispapiGetNotificationListPtr,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyGetNotificationListPtr__ = &notifyGetNotificationListPtr_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationListPtr__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr,    // pure virtual
    .vtable.__nvdispapiGetNotificationShare__ = &__nvoc_up_thunk_Notifier_nvdispapiGetNotificationShare,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispapiGetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyGetNotificationShare__ = &notifyGetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationShare,    // pure virtual
    .vtable.__nvdispapiSetNotificationShare__ = &__nvoc_up_thunk_Notifier_nvdispapiSetNotificationShare,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiSetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispapiSetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifySetNotificationShare__ = &notifySetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifySetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifySetNotificationShare,    // pure virtual
    .vtable.__nvdispapiUnregisterEvent__ = &__nvoc_up_thunk_Notifier_nvdispapiUnregisterEvent,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiUnregisterEvent__ = &__nvoc_up_thunk_Notifier_dispapiUnregisterEvent,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyUnregisterEvent__ = &notifyUnregisterEvent_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyUnregisterEvent__ = &__nvoc_down_thunk_Notifier_inotifyUnregisterEvent,    // pure virtual
    .vtable.__nvdispapiGetOrAllocNotifShare__ = &__nvoc_up_thunk_Notifier_nvdispapiGetOrAllocNotifShare,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetOrAllocNotifShare__ = &__nvoc_up_thunk_Notifier_dispapiGetOrAllocNotifShare,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyGetOrAllocNotifShare__ = &notifyGetOrAllocNotifShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyGetOrAllocNotifShare__ = &__nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare,    // pure virtual
};


// Dynamic down-casting information
const struct NVOC_CASTINFO __nvoc_castinfo__NvDispApi = {
    .numRelatives = 8,
    .relatives = {
        &__nvoc_metadata__NvDispApi.rtti,    // [0]: (nvdispapi) this
        &__nvoc_metadata__NvDispApi.metadata__DisplayApi.rtti,    // [1]: (dispapi) super
        &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__RmResource.rtti,    // [2]: (rmres) super^2
        &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti,    // [3]: (res) super^3
        &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti,    // [4]: (obj) super^4
        &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti,    // [5]: (rmrescmn) super^3
        &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__Notifier.rtti,    // [6]: (notify) super^2
        &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti,    // [7]: (inotify) super^3
    }
};

// 26 up-thunk(s) defined to bridge methods in NvDispApi to superclasses

// nvdispapiControl: virtual inherited (dispapi) base (dispapi)
NV_STATUS __nvoc_up_thunk_DisplayApi_nvdispapiControl(struct NvDispApi *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return dispapiControl((struct DisplayApi *)(((unsigned char *) pDisplayApi) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi)), pCallContext, pParams);
}

// nvdispapiControl_Prologue: virtual inherited (dispapi) base (dispapi)
NV_STATUS __nvoc_up_thunk_DisplayApi_nvdispapiControl_Prologue(struct NvDispApi *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams) {
    return dispapiControl_Prologue((struct DisplayApi *)(((unsigned char *) pDisplayApi) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi)), pCallContext, pRsParams);
}

// nvdispapiControl_Epilogue: virtual inherited (dispapi) base (dispapi)
void __nvoc_up_thunk_DisplayApi_nvdispapiControl_Epilogue(struct NvDispApi *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams) {
    dispapiControl_Epilogue((struct DisplayApi *)(((unsigned char *) pDisplayApi) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi)), pCallContext, pRsParams);
}

// nvdispapiAccessCallback: virtual inherited (rmres) base (dispapi)
NvBool __nvoc_up_thunk_RmResource_nvdispapiAccessCallback(struct NvDispApi *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pInvokingClient, pAllocParams, accessRight);
}

// nvdispapiShareCallback: virtual inherited (rmres) base (dispapi)
NvBool __nvoc_up_thunk_RmResource_nvdispapiShareCallback(struct NvDispApi *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return rmresShareCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pInvokingClient, pParentRef, pSharePolicy);
}

// nvdispapiGetMemInterMapParams: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_nvdispapiGetMemInterMapParams(struct NvDispApi *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return rmresGetMemInterMapParams((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pParams);
}

// nvdispapiCheckMemInterUnmap: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_nvdispapiCheckMemInterUnmap(struct NvDispApi *pRmResource, NvBool bSubdeviceHandleProvided) {
    return rmresCheckMemInterUnmap((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), bSubdeviceHandleProvided);
}

// nvdispapiGetMemoryMappingDescriptor: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_nvdispapiGetMemoryMappingDescriptor(struct NvDispApi *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc) {
    return rmresGetMemoryMappingDescriptor((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), ppMemDesc);
}

// nvdispapiControlSerialization_Prologue: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_nvdispapiControlSerialization_Prologue(struct NvDispApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControlSerialization_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pCallContext, pParams);
}

// nvdispapiControlSerialization_Epilogue: virtual inherited (rmres) base (dispapi)
void __nvoc_up_thunk_RmResource_nvdispapiControlSerialization_Epilogue(struct NvDispApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControlSerialization_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pCallContext, pParams);
}

// nvdispapiCanCopy: virtual inherited (res) base (dispapi)
NvBool __nvoc_up_thunk_RsResource_nvdispapiCanCopy(struct NvDispApi *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// nvdispapiIsDuplicate: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiIsDuplicate(struct NvDispApi *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), hMemory, pDuplicate);
}

// nvdispapiPreDestruct: virtual inherited (res) base (dispapi)
void __nvoc_up_thunk_RsResource_nvdispapiPreDestruct(struct NvDispApi *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// nvdispapiControlFilter: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiControlFilter(struct NvDispApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// nvdispapiMap: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiMap(struct NvDispApi *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping) {
    return resMap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams, pCpuMapping);
}

// nvdispapiUnmap: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiUnmap(struct NvDispApi *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping) {
    return resUnmap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pCpuMapping);
}

// nvdispapiIsPartialUnmapSupported: inline virtual inherited (res) base (dispapi) body
NvBool __nvoc_up_thunk_RsResource_nvdispapiIsPartialUnmapSupported(struct NvDispApi *pResource) {
    return resIsPartialUnmapSupported((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// nvdispapiMapTo: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiMapTo(struct NvDispApi *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// nvdispapiUnmapFrom: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_nvdispapiUnmapFrom(struct NvDispApi *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// nvdispapiGetRefCount: virtual inherited (res) base (dispapi)
NvU32 __nvoc_up_thunk_RsResource_nvdispapiGetRefCount(struct NvDispApi *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// nvdispapiAddAdditionalDependants: virtual inherited (res) base (dispapi)
void __nvoc_up_thunk_RsResource_nvdispapiAddAdditionalDependants(struct RsClient *pClient, struct NvDispApi *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pReference);
}

// nvdispapiGetNotificationListPtr: virtual inherited (notify) base (dispapi)
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_nvdispapiGetNotificationListPtr(struct NvDispApi *pNotifier) {
    return notifyGetNotificationListPtr((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_Notifier)));
}

// nvdispapiGetNotificationShare: virtual inherited (notify) base (dispapi)
struct NotifShare * __nvoc_up_thunk_Notifier_nvdispapiGetNotificationShare(struct NvDispApi *pNotifier) {
    return notifyGetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_Notifier)));
}

// nvdispapiSetNotificationShare: virtual inherited (notify) base (dispapi)
void __nvoc_up_thunk_Notifier_nvdispapiSetNotificationShare(struct NvDispApi *pNotifier, struct NotifShare *pNotifShare) {
    notifySetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_Notifier)), pNotifShare);
}

// nvdispapiUnregisterEvent: virtual inherited (notify) base (dispapi)
NV_STATUS __nvoc_up_thunk_Notifier_nvdispapiUnregisterEvent(struct NvDispApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent) {
    return notifyUnregisterEvent((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_Notifier)), hNotifierClient, hNotifierResource, hEventClient, hEvent);
}

// nvdispapiGetOrAllocNotifShare: virtual inherited (notify) base (dispapi)
NV_STATUS __nvoc_up_thunk_Notifier_nvdispapiGetOrAllocNotifShare(struct NvDispApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare) {
    return notifyGetOrAllocNotifShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(NvDispApi, __nvoc_base_DisplayApi.__nvoc_base_Notifier)), hNotifierClient, hNotifierResource, ppNotifShare);
}


const struct NVOC_EXPORT_INFO __nvoc_export_info__NvDispApi = 
{
    .numEntries=     0,
    .pExportEntries= __nvoc_exported_method_def_NvDispApi
};


// Destruct NvDispApi object.
void __nvoc_dtor_DisplayApi(Dynamic*);
void __nvoc_dtor_NvDispApi(Dynamic* pThis) {

    NvDispApi *__nvoc_this = (NvDispApi *) pThis;

// Recurse to superclass destructors.
    __nvoc_dtor_DisplayApi((Dynamic *) &__nvoc_this->__nvoc_base_DisplayApi);

    PORT_UNREFERENCED_VARIABLE(__nvoc_this);
}
void __nvoc_init_dataField_NvDispApi(NvDispApi *pThis, RmHalspecOwner *pRmhalspecowner) {
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);
}


// Construct NvDispApi object.
NV_STATUS __nvoc_ctor_DisplayApi(DisplayApi *pDisplayApi, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);    // inline
NV_STATUS __nvoc_ctor_NvDispApi(NvDispApi *pNvdispApi, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams) {    // inline
    NV_STATUS status = NV_OK;

    // Recurse to ancestor constructor(s).
    status = __nvoc_ctor_DisplayApi(&pNvdispApi->__nvoc_base_DisplayApi, pRmhalspecowner, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_NvDispApi_fail_DisplayApi;

    // Initialize data fields.
    __nvoc_init_dataField_NvDispApi(pNvdispApi, pRmhalspecowner);

    // Call the constructor for this class.
    status = __nvoc_nvdispapiConstruct(pNvdispApi, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_NvDispApi_fail__init;
    goto __nvoc_ctor_NvDispApi_exit; // Success

    // Unwind on error.
__nvoc_ctor_NvDispApi_fail__init:
    __nvoc_dtor_DisplayApi((Dynamic *)&pNvdispApi->__nvoc_base_DisplayApi);
__nvoc_ctor_NvDispApi_fail_DisplayApi:
__nvoc_ctor_NvDispApi_exit:
    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_NvDispApi_1(NvDispApi *pThis, RmHalspecOwner *pRmhalspecowner) {
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);
} // End __nvoc_init_funcTable_NvDispApi_1


// Initialize vtable(s) for 26 virtual method(s).
void __nvoc_init_funcTable_NvDispApi(NvDispApi *pThis, RmHalspecOwner *pRmhalspecowner) {
    __nvoc_init_funcTable_NvDispApi_1(pThis, pRmhalspecowner);
}

// Initialize newly constructed object.
void __nvoc_init__NvDispApi(NvDispApi *pThis, RmHalspecOwner *pRmhalspecowner) {

    // Initialize pointers to inherited data.
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;    // (obj) super^4
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource;    // (res) super^3
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;    // (rmrescmn) super^3
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource;    // (rmres) super^2
    pThis->__nvoc_pbase_INotifier = &pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_base_INotifier;    // (inotify) super^3
    pThis->__nvoc_pbase_Notifier = &pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier;    // (notify) super^2
    pThis->__nvoc_pbase_DisplayApi = &pThis->__nvoc_base_DisplayApi;    // (dispapi) super
    pThis->__nvoc_pbase_NvDispApi = pThis;    // (nvdispapi) this

    // Recurse to superclass initialization function(s).
    __nvoc_init__DisplayApi(&pThis->__nvoc_base_DisplayApi, pRmhalspecowner);

    // Pointer(s) to metadata structures(s)
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.__nvoc_metadata_ptr = &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object;    // (obj) super^4
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_metadata_ptr = &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__RmResource.metadata__RsResource;    // (res) super^3
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon.__nvoc_metadata_ptr = &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon;    // (rmrescmn) super^3
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_metadata_ptr = &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__RmResource;    // (rmres) super^2
    pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_base_INotifier.__nvoc_metadata_ptr = &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__Notifier.metadata__INotifier;    // (inotify) super^3
    pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_metadata_ptr = &__nvoc_metadata__NvDispApi.metadata__DisplayApi.metadata__Notifier;    // (notify) super^2
    pThis->__nvoc_base_DisplayApi.__nvoc_metadata_ptr = &__nvoc_metadata__NvDispApi.metadata__DisplayApi;    // (dispapi) super
    pThis->__nvoc_metadata_ptr = &__nvoc_metadata__NvDispApi;    // (nvdispapi) this

    // Initialize per-object vtables.
    __nvoc_init_funcTable_NvDispApi(pThis, pRmhalspecowner);
}

NV_STATUS __nvoc_objCreate_NvDispApi(NvDispApi **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams)
{
    NV_STATUS __nvoc_status;
    Object *__nvoc_pParentObj = NULL;
    NvDispApi *__nvoc_pThis;
    RmHalspecOwner *pRmhalspecowner;

    // Don't allocate memory if the caller has already done so.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
    {
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_ppThis != NULL && *__nvoc_ppThis != NULL, NV_ERR_INVALID_PARAMETER);
        __nvoc_pThis = *__nvoc_ppThis;
    }

    // Allocate memory
    else
    {
        __nvoc_pThis = portMemAllocNonPaged(sizeof(NvDispApi));
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_pThis != NULL, NV_ERR_NO_MEMORY);
    }

    // Zero is the initial value for everything.
    portMemSet(__nvoc_pThis, 0, sizeof(NvDispApi));

    __nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = __nvoc_createFlags;

    // pParent must be a valid object that derives from a halspec owner class.
    NV_CHECK_TRUE_OR_GOTO(__nvoc_status, LEVEL_ERROR, __nvoc_pParent != NULL, NV_ERR_INVALID_ARGUMENT, __nvoc_objCreate_NvDispApi_cleanup);

    // Link the child into the parent unless flagged not to do so.
    if (!(__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        __nvoc_pParentObj = dynamicCast(__nvoc_pParent, Object);
        objAddChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        __nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    // HALs are defined by the parent or the first super class.
    if ((pRmhalspecowner = dynamicCast(__nvoc_pParent, RmHalspecOwner)) == NULL)
        pRmhalspecowner = objFindAncestorOfType(RmHalspecOwner, __nvoc_pParent);
    NV_CHECK_TRUE_OR_GOTO(__nvoc_status, LEVEL_ERROR, pRmhalspecowner != NULL, NV_ERR_INVALID_ARGUMENT, __nvoc_objCreate_NvDispApi_cleanup);

    // Initialize vtable, RTTI, etc., then call constructor.
    __nvoc_init__NvDispApi(__nvoc_pThis, pRmhalspecowner);
    __nvoc_status = __nvoc_ctor_NvDispApi(__nvoc_pThis, pRmhalspecowner, pCallContext, pParams);
    if (__nvoc_status != NV_OK) goto __nvoc_objCreate_NvDispApi_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *__nvoc_ppThis = __nvoc_pThis;

    // Success
    return NV_OK;

    // Do not call destructors here since the constructor already called them.
__nvoc_objCreate_NvDispApi_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (__nvoc_pParentObj != NULL)
        objRemoveChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);

    // Zero out memory that was allocated by caller.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(__nvoc_pThis, 0, sizeof(NvDispApi));

    // Free memory allocated by `__nvoc_handleObjCreateMemAlloc`.
    else
    {
        portMemFree(__nvoc_pThis);
        *__nvoc_ppThis = NULL;
    }

    // Failure
    return __nvoc_status;
}

NV_STATUS __nvoc_objCreateDynamic_NvDispApi(Dynamic **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, va_list __nvoc_args) {
    struct CALL_CONTEXT *pCallContext = va_arg(__nvoc_args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams = va_arg(__nvoc_args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    return __nvoc_objCreate_NvDispApi((NvDispApi **) __nvoc_ppThis, __nvoc_pParent, __nvoc_createFlags, pCallContext, pParams);
}


#ifdef DEBUG
char __nvoc_class_id_uniqueness_check__6aa5e2 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_DispSwObj;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_INotifier;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Notifier;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_DisplayApi;

// Forward declarations for DispSwObj
void __nvoc_init__DisplayApi(DisplayApi*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_init__DispSwObj(DispSwObj*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_init_funcTable_DispSwObj(DispSwObj*);
NV_STATUS __nvoc_ctor_DispSwObj(DispSwObj*, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);
void __nvoc_init_dataField_DispSwObj(DispSwObj*);
void __nvoc_dtor_DispSwObj(Dynamic*);

// Structures used within RTTI (run-time type information)
extern const struct NVOC_CASTINFO __nvoc_castinfo__DispSwObj;
extern const struct NVOC_EXPORT_INFO __nvoc_export_info__DispSwObj;

// Down-thunk(s) to bridge DispSwObj methods from ancestors (if any)
NvBool __nvoc_down_thunk_RmResource_resAccessCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super^2
NvBool __nvoc_down_thunk_RmResource_resShareCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControlSerialization_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControlSerialization_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControl_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControl_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
PEVENTNOTIFICATION * __nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr(struct INotifier *pNotifier);    // super^2
struct NotifShare * __nvoc_down_thunk_Notifier_inotifyGetNotificationShare(struct INotifier *pNotifier);    // super^2
void __nvoc_down_thunk_Notifier_inotifySetNotificationShare(struct INotifier *pNotifier, struct NotifShare *pNotifShare);    // super^2
NV_STATUS __nvoc_down_thunk_Notifier_inotifyUnregisterEvent(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // super^2
NV_STATUS __nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // super^2
NV_STATUS __nvoc_down_thunk_DisplayApi_resControl(struct RsResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_down_thunk_DisplayApi_rmresControl_Prologue(struct RmResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // super
void __nvoc_down_thunk_DisplayApi_rmresControl_Epilogue(struct RmResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // super

// Up-thunk(s) to bridge DispSwObj methods to ancestors (if any)
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
NvBool __nvoc_up_thunk_RmResource_dispapiAccessCallback(struct DisplayApi *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super
NvBool __nvoc_up_thunk_RmResource_dispapiShareCallback(struct DisplayApi *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiGetMemInterMapParams(struct DisplayApi *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiCheckMemInterUnmap(struct DisplayApi *pRmResource, NvBool bSubdeviceHandleProvided);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiGetMemoryMappingDescriptor(struct DisplayApi *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiControlSerialization_Prologue(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_up_thunk_RmResource_dispapiControlSerialization_Epilogue(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NvBool __nvoc_up_thunk_RsResource_dispapiCanCopy(struct DisplayApi *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiIsDuplicate(struct DisplayApi *pResource, NvHandle hMemory, NvBool *pDuplicate);    // super
void __nvoc_up_thunk_RsResource_dispapiPreDestruct(struct DisplayApi *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiControlFilter(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiMap(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiUnmap(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // super
NvBool __nvoc_up_thunk_RsResource_dispapiIsPartialUnmapSupported(struct DisplayApi *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiMapTo(struct DisplayApi *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiUnmapFrom(struct DisplayApi *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // super
NvU32 __nvoc_up_thunk_RsResource_dispapiGetRefCount(struct DisplayApi *pResource);    // super
void __nvoc_up_thunk_RsResource_dispapiAddAdditionalDependants(struct RsClient *pClient, struct DisplayApi *pResource, RsResourceRef *pReference);    // super
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_dispapiGetNotificationListPtr(struct DisplayApi *pNotifier);    // super
struct NotifShare * __nvoc_up_thunk_Notifier_dispapiGetNotificationShare(struct DisplayApi *pNotifier);    // super
void __nvoc_up_thunk_Notifier_dispapiSetNotificationShare(struct DisplayApi *pNotifier, struct NotifShare *pNotifShare);    // super
NV_STATUS __nvoc_up_thunk_Notifier_dispapiUnregisterEvent(struct DisplayApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // super
NV_STATUS __nvoc_up_thunk_Notifier_dispapiGetOrAllocNotifShare(struct DisplayApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // super
NV_STATUS __nvoc_up_thunk_DisplayApi_dispswobjControl(struct DispSwObj *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_DisplayApi_dispswobjControl_Prologue(struct DispSwObj *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // this
void __nvoc_up_thunk_DisplayApi_dispswobjControl_Epilogue(struct DispSwObj *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // this
NvBool __nvoc_up_thunk_RmResource_dispswobjAccessCallback(struct DispSwObj *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // this
NvBool __nvoc_up_thunk_RmResource_dispswobjShareCallback(struct DispSwObj *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispswobjGetMemInterMapParams(struct DispSwObj *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispswobjCheckMemInterUnmap(struct DispSwObj *pRmResource, NvBool bSubdeviceHandleProvided);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispswobjGetMemoryMappingDescriptor(struct DispSwObj *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispswobjControlSerialization_Prologue(struct DispSwObj *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_dispswobjControlSerialization_Epilogue(struct DispSwObj *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_dispswobjCanCopy(struct DispSwObj *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjIsDuplicate(struct DispSwObj *pResource, NvHandle hMemory, NvBool *pDuplicate);    // this
void __nvoc_up_thunk_RsResource_dispswobjPreDestruct(struct DispSwObj *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjControlFilter(struct DispSwObj *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjMap(struct DispSwObj *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjUnmap(struct DispSwObj *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // this
NvBool __nvoc_up_thunk_RsResource_dispswobjIsPartialUnmapSupported(struct DispSwObj *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjMapTo(struct DispSwObj *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjUnmapFrom(struct DispSwObj *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // this
NvU32 __nvoc_up_thunk_RsResource_dispswobjGetRefCount(struct DispSwObj *pResource);    // this
void __nvoc_up_thunk_RsResource_dispswobjAddAdditionalDependants(struct RsClient *pClient, struct DispSwObj *pResource, RsResourceRef *pReference);    // this
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_dispswobjGetNotificationListPtr(struct DispSwObj *pNotifier);    // this
struct NotifShare * __nvoc_up_thunk_Notifier_dispswobjGetNotificationShare(struct DispSwObj *pNotifier);    // this
void __nvoc_up_thunk_Notifier_dispswobjSetNotificationShare(struct DispSwObj *pNotifier, struct NotifShare *pNotifShare);    // this
NV_STATUS __nvoc_up_thunk_Notifier_dispswobjUnregisterEvent(struct DispSwObj *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // this
NV_STATUS __nvoc_up_thunk_Notifier_dispswobjGetOrAllocNotifShare(struct DispSwObj *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // this

// Class-specific details for DispSwObj
const struct NVOC_CLASS_DEF __nvoc_class_def_DispSwObj = 
{
    .classInfo.size =               sizeof(DispSwObj),
    .classInfo.classId =            classId(DispSwObj),
    .classInfo.visibility =         NVOC_EVENT_VISIBILITY_NONEVENT,
    .classInfo.providerId =         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
    .classInfo.name =               "DispSwObj",
#endif
    .objCreatefn =        &__nvoc_objCreateDynamic_DispSwObj,
    .pCastInfo =          &__nvoc_castinfo__DispSwObj,
    .pExportInfo =        &__nvoc_export_info__DispSwObj
};

// By default, all exported methods are enabled.
#if !defined(NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG)
#define NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(x)      (0)
#endif

// Exported trampoline function definitions



// Exported method array
static const struct NVOC_EXPORTED_METHOD_DEF __nvoc_exported_method_def_DispSwObj[] = 
{
};


// Metadata with per-class RTTI and vtable with ancestor(s)
static const struct NVOC_METADATA__DispSwObj __nvoc_metadata__DispSwObj = {
    .rtti.pClassDef = &__nvoc_class_def_DispSwObj,    // (dispswobj) this
    .rtti.dtor      = &__nvoc_dtor_DispSwObj,
    .rtti.offset    = 0,
    .metadata__DisplayApi.rtti.pClassDef = &__nvoc_class_def_DisplayApi,    // (dispapi) super
    .metadata__DisplayApi.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.rtti.offset    = NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi),
    .metadata__DisplayApi.metadata__RmResource.rtti.pClassDef = &__nvoc_class_def_RmResource,    // (rmres) super^2
    .metadata__DisplayApi.metadata__RmResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.rtti.offset    = NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource),
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti.pClassDef = &__nvoc_class_def_RsResource,    // (res) super^3
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti.offset    = NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource),
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.pClassDef = &__nvoc_class_def_Object,    // (obj) super^4
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.offset    = NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
    .metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti.pClassDef = &__nvoc_class_def_RmResourceCommon,    // (rmrescmn) super^3
    .metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti.offset    = NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
    .metadata__DisplayApi.metadata__Notifier.rtti.pClassDef = &__nvoc_class_def_Notifier,    // (notify) super^2
    .metadata__DisplayApi.metadata__Notifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__Notifier.rtti.offset    = NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_Notifier),
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti.pClassDef = &__nvoc_class_def_INotifier,    // (inotify) super^3
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti.offset    = NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_base_INotifier),

    .vtable.__dispswobjControl__ = &__nvoc_up_thunk_DisplayApi_dispswobjControl,    // virtual inherited (dispapi) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControl__ = &dispapiControl_IMPL,    // virtual override (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControl__ = &__nvoc_up_thunk_RsResource_rmresControl,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControl__ = &__nvoc_down_thunk_DisplayApi_resControl,    // virtual
    .vtable.__dispswobjControl_Prologue__ = &__nvoc_up_thunk_DisplayApi_dispswobjControl_Prologue,    // virtual inherited (dispapi) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControl_Prologue__ = &dispapiControl_Prologue_IMPL,    // virtual override (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControl_Prologue__ = &__nvoc_down_thunk_DisplayApi_rmresControl_Prologue,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControl_Prologue__ = &__nvoc_down_thunk_RmResource_resControl_Prologue,    // virtual
    .vtable.__dispswobjControl_Epilogue__ = &__nvoc_up_thunk_DisplayApi_dispswobjControl_Epilogue,    // virtual inherited (dispapi) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControl_Epilogue__ = &dispapiControl_Epilogue_IMPL,    // virtual override (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControl_Epilogue__ = &__nvoc_down_thunk_DisplayApi_rmresControl_Epilogue,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControl_Epilogue__ = &__nvoc_down_thunk_RmResource_resControl_Epilogue,    // virtual
    .vtable.__dispswobjAccessCallback__ = &__nvoc_up_thunk_RmResource_dispswobjAccessCallback,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiAccessCallback__ = &__nvoc_up_thunk_RmResource_dispapiAccessCallback,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresAccessCallback__ = &rmresAccessCallback_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resAccessCallback__ = &__nvoc_down_thunk_RmResource_resAccessCallback,    // virtual
    .vtable.__dispswobjShareCallback__ = &__nvoc_up_thunk_RmResource_dispswobjShareCallback,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiShareCallback__ = &__nvoc_up_thunk_RmResource_dispapiShareCallback,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresShareCallback__ = &rmresShareCallback_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resShareCallback__ = &__nvoc_down_thunk_RmResource_resShareCallback,    // virtual
    .vtable.__dispswobjGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_dispswobjGetMemInterMapParams,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_dispapiGetMemInterMapParams,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresGetMemInterMapParams__ = &rmresGetMemInterMapParams_IMPL,    // virtual
    .vtable.__dispswobjCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_dispswobjCheckMemInterUnmap,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_dispapiCheckMemInterUnmap,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresCheckMemInterUnmap__ = &rmresCheckMemInterUnmap_IMPL,    // virtual
    .vtable.__dispswobjGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_dispswobjGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_dispapiGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresGetMemoryMappingDescriptor__ = &rmresGetMemoryMappingDescriptor_IMPL,    // virtual
    .vtable.__dispswobjControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_dispswobjControlSerialization_Prologue,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_dispapiControlSerialization_Prologue,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControlSerialization_Prologue__ = &rmresControlSerialization_Prologue_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControlSerialization_Prologue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Prologue,    // virtual
    .vtable.__dispswobjControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_dispswobjControlSerialization_Epilogue,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_dispapiControlSerialization_Epilogue,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControlSerialization_Epilogue__ = &rmresControlSerialization_Epilogue_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControlSerialization_Epilogue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Epilogue,    // virtual
    .vtable.__dispswobjCanCopy__ = &__nvoc_up_thunk_RsResource_dispswobjCanCopy,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiCanCopy__ = &__nvoc_up_thunk_RsResource_dispapiCanCopy,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresCanCopy__ = &__nvoc_up_thunk_RsResource_rmresCanCopy,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resCanCopy__ = &resCanCopy_IMPL,    // virtual
    .vtable.__dispswobjIsDuplicate__ = &__nvoc_up_thunk_RsResource_dispswobjIsDuplicate,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiIsDuplicate__ = &__nvoc_up_thunk_RsResource_dispapiIsDuplicate,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresIsDuplicate__ = &__nvoc_up_thunk_RsResource_rmresIsDuplicate,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resIsDuplicate__ = &resIsDuplicate_IMPL,    // virtual
    .vtable.__dispswobjPreDestruct__ = &__nvoc_up_thunk_RsResource_dispswobjPreDestruct,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiPreDestruct__ = &__nvoc_up_thunk_RsResource_dispapiPreDestruct,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresPreDestruct__ = &__nvoc_up_thunk_RsResource_rmresPreDestruct,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resPreDestruct__ = &resPreDestruct_IMPL,    // virtual
    .vtable.__dispswobjControlFilter__ = &__nvoc_up_thunk_RsResource_dispswobjControlFilter,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControlFilter__ = &__nvoc_up_thunk_RsResource_dispapiControlFilter,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControlFilter__ = &__nvoc_up_thunk_RsResource_rmresControlFilter,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControlFilter__ = &resControlFilter_IMPL,    // virtual
    .vtable.__dispswobjMap__ = &__nvoc_up_thunk_RsResource_dispswobjMap,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiMap__ = &__nvoc_up_thunk_RsResource_dispapiMap,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresMap__ = &__nvoc_up_thunk_RsResource_rmresMap,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resMap__ = &resMap_IMPL,    // virtual
    .vtable.__dispswobjUnmap__ = &__nvoc_up_thunk_RsResource_dispswobjUnmap,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiUnmap__ = &__nvoc_up_thunk_RsResource_dispapiUnmap,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresUnmap__ = &__nvoc_up_thunk_RsResource_rmresUnmap,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resUnmap__ = &resUnmap_IMPL,    // virtual
    .vtable.__dispswobjIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_dispswobjIsPartialUnmapSupported,    // inline virtual inherited (res) base (dispapi) body
    .metadata__DisplayApi.vtable.__dispapiIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_dispapiIsPartialUnmapSupported,    // inline virtual inherited (res) base (rmres) body
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported,    // inline virtual inherited (res) base (res) body
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resIsPartialUnmapSupported__ = &resIsPartialUnmapSupported_d69453,    // inline virtual body
    .vtable.__dispswobjMapTo__ = &__nvoc_up_thunk_RsResource_dispswobjMapTo,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiMapTo__ = &__nvoc_up_thunk_RsResource_dispapiMapTo,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresMapTo__ = &__nvoc_up_thunk_RsResource_rmresMapTo,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resMapTo__ = &resMapTo_IMPL,    // virtual
    .vtable.__dispswobjUnmapFrom__ = &__nvoc_up_thunk_RsResource_dispswobjUnmapFrom,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiUnmapFrom__ = &__nvoc_up_thunk_RsResource_dispapiUnmapFrom,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresUnmapFrom__ = &__nvoc_up_thunk_RsResource_rmresUnmapFrom,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resUnmapFrom__ = &resUnmapFrom_IMPL,    // virtual
    .vtable.__dispswobjGetRefCount__ = &__nvoc_up_thunk_RsResource_dispswobjGetRefCount,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetRefCount__ = &__nvoc_up_thunk_RsResource_dispapiGetRefCount,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresGetRefCount__ = &__nvoc_up_thunk_RsResource_rmresGetRefCount,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resGetRefCount__ = &resGetRefCount_IMPL,    // virtual
    .vtable.__dispswobjAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_dispswobjAddAdditionalDependants,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_dispapiAddAdditionalDependants,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_rmresAddAdditionalDependants,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resAddAdditionalDependants__ = &resAddAdditionalDependants_IMPL,    // virtual
    .vtable.__dispswobjGetNotificationListPtr__ = &__nvoc_up_thunk_Notifier_dispswobjGetNotificationListPtr,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetNotificationListPtr__ = &__nvoc_up_thunk_Notifier_dispapiGetNotificationListPtr,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyGetNotificationListPtr__ = &notifyGetNotificationListPtr_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationListPtr__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr,    // pure virtual
    .vtable.__dispswobjGetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispswobjGetNotificationShare,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispapiGetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyGetNotificationShare__ = &notifyGetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationShare,    // pure virtual
    .vtable.__dispswobjSetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispswobjSetNotificationShare,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiSetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispapiSetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifySetNotificationShare__ = &notifySetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifySetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifySetNotificationShare,    // pure virtual
    .vtable.__dispswobjUnregisterEvent__ = &__nvoc_up_thunk_Notifier_dispswobjUnregisterEvent,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiUnregisterEvent__ = &__nvoc_up_thunk_Notifier_dispapiUnregisterEvent,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyUnregisterEvent__ = &notifyUnregisterEvent_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyUnregisterEvent__ = &__nvoc_down_thunk_Notifier_inotifyUnregisterEvent,    // pure virtual
    .vtable.__dispswobjGetOrAllocNotifShare__ = &__nvoc_up_thunk_Notifier_dispswobjGetOrAllocNotifShare,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetOrAllocNotifShare__ = &__nvoc_up_thunk_Notifier_dispapiGetOrAllocNotifShare,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyGetOrAllocNotifShare__ = &notifyGetOrAllocNotifShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyGetOrAllocNotifShare__ = &__nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare,    // pure virtual
};


// Dynamic down-casting information
const struct NVOC_CASTINFO __nvoc_castinfo__DispSwObj = {
    .numRelatives = 8,
    .relatives = {
        &__nvoc_metadata__DispSwObj.rtti,    // [0]: (dispswobj) this
        &__nvoc_metadata__DispSwObj.metadata__DisplayApi.rtti,    // [1]: (dispapi) super
        &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__RmResource.rtti,    // [2]: (rmres) super^2
        &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti,    // [3]: (res) super^3
        &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti,    // [4]: (obj) super^4
        &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti,    // [5]: (rmrescmn) super^3
        &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__Notifier.rtti,    // [6]: (notify) super^2
        &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti,    // [7]: (inotify) super^3
    }
};

// 26 up-thunk(s) defined to bridge methods in DispSwObj to superclasses

// dispswobjControl: virtual inherited (dispapi) base (dispapi)
NV_STATUS __nvoc_up_thunk_DisplayApi_dispswobjControl(struct DispSwObj *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return dispapiControl((struct DisplayApi *)(((unsigned char *) pDisplayApi) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi)), pCallContext, pParams);
}

// dispswobjControl_Prologue: virtual inherited (dispapi) base (dispapi)
NV_STATUS __nvoc_up_thunk_DisplayApi_dispswobjControl_Prologue(struct DispSwObj *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams) {
    return dispapiControl_Prologue((struct DisplayApi *)(((unsigned char *) pDisplayApi) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi)), pCallContext, pRsParams);
}

// dispswobjControl_Epilogue: virtual inherited (dispapi) base (dispapi)
void __nvoc_up_thunk_DisplayApi_dispswobjControl_Epilogue(struct DispSwObj *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams) {
    dispapiControl_Epilogue((struct DisplayApi *)(((unsigned char *) pDisplayApi) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi)), pCallContext, pRsParams);
}

// dispswobjAccessCallback: virtual inherited (rmres) base (dispapi)
NvBool __nvoc_up_thunk_RmResource_dispswobjAccessCallback(struct DispSwObj *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pInvokingClient, pAllocParams, accessRight);
}

// dispswobjShareCallback: virtual inherited (rmres) base (dispapi)
NvBool __nvoc_up_thunk_RmResource_dispswobjShareCallback(struct DispSwObj *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return rmresShareCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pInvokingClient, pParentRef, pSharePolicy);
}

// dispswobjGetMemInterMapParams: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_dispswobjGetMemInterMapParams(struct DispSwObj *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return rmresGetMemInterMapParams((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pParams);
}

// dispswobjCheckMemInterUnmap: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_dispswobjCheckMemInterUnmap(struct DispSwObj *pRmResource, NvBool bSubdeviceHandleProvided) {
    return rmresCheckMemInterUnmap((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), bSubdeviceHandleProvided);
}

// dispswobjGetMemoryMappingDescriptor: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_dispswobjGetMemoryMappingDescriptor(struct DispSwObj *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc) {
    return rmresGetMemoryMappingDescriptor((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), ppMemDesc);
}

// dispswobjControlSerialization_Prologue: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_dispswobjControlSerialization_Prologue(struct DispSwObj *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControlSerialization_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pCallContext, pParams);
}

// dispswobjControlSerialization_Epilogue: virtual inherited (rmres) base (dispapi)
void __nvoc_up_thunk_RmResource_dispswobjControlSerialization_Epilogue(struct DispSwObj *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControlSerialization_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pCallContext, pParams);
}

// dispswobjCanCopy: virtual inherited (res) base (dispapi)
NvBool __nvoc_up_thunk_RsResource_dispswobjCanCopy(struct DispSwObj *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispswobjIsDuplicate: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjIsDuplicate(struct DispSwObj *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), hMemory, pDuplicate);
}

// dispswobjPreDestruct: virtual inherited (res) base (dispapi)
void __nvoc_up_thunk_RsResource_dispswobjPreDestruct(struct DispSwObj *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispswobjControlFilter: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjControlFilter(struct DispSwObj *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// dispswobjMap: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjMap(struct DispSwObj *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping) {
    return resMap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams, pCpuMapping);
}

// dispswobjUnmap: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjUnmap(struct DispSwObj *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping) {
    return resUnmap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pCpuMapping);
}

// dispswobjIsPartialUnmapSupported: inline virtual inherited (res) base (dispapi) body
NvBool __nvoc_up_thunk_RsResource_dispswobjIsPartialUnmapSupported(struct DispSwObj *pResource) {
    return resIsPartialUnmapSupported((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispswobjMapTo: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjMapTo(struct DispSwObj *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// dispswobjUnmapFrom: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispswobjUnmapFrom(struct DispSwObj *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// dispswobjGetRefCount: virtual inherited (res) base (dispapi)
NvU32 __nvoc_up_thunk_RsResource_dispswobjGetRefCount(struct DispSwObj *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispswobjAddAdditionalDependants: virtual inherited (res) base (dispapi)
void __nvoc_up_thunk_RsResource_dispswobjAddAdditionalDependants(struct RsClient *pClient, struct DispSwObj *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pReference);
}

// dispswobjGetNotificationListPtr: virtual inherited (notify) base (dispapi)
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_dispswobjGetNotificationListPtr(struct DispSwObj *pNotifier) {
    return notifyGetNotificationListPtr((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_Notifier)));
}

// dispswobjGetNotificationShare: virtual inherited (notify) base (dispapi)
struct NotifShare * __nvoc_up_thunk_Notifier_dispswobjGetNotificationShare(struct DispSwObj *pNotifier) {
    return notifyGetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_Notifier)));
}

// dispswobjSetNotificationShare: virtual inherited (notify) base (dispapi)
void __nvoc_up_thunk_Notifier_dispswobjSetNotificationShare(struct DispSwObj *pNotifier, struct NotifShare *pNotifShare) {
    notifySetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_Notifier)), pNotifShare);
}

// dispswobjUnregisterEvent: virtual inherited (notify) base (dispapi)
NV_STATUS __nvoc_up_thunk_Notifier_dispswobjUnregisterEvent(struct DispSwObj *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent) {
    return notifyUnregisterEvent((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_Notifier)), hNotifierClient, hNotifierResource, hEventClient, hEvent);
}

// dispswobjGetOrAllocNotifShare: virtual inherited (notify) base (dispapi)
NV_STATUS __nvoc_up_thunk_Notifier_dispswobjGetOrAllocNotifShare(struct DispSwObj *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare) {
    return notifyGetOrAllocNotifShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DispSwObj, __nvoc_base_DisplayApi.__nvoc_base_Notifier)), hNotifierClient, hNotifierResource, ppNotifShare);
}


const struct NVOC_EXPORT_INFO __nvoc_export_info__DispSwObj = 
{
    .numEntries=     0,
    .pExportEntries= __nvoc_exported_method_def_DispSwObj
};


// Destruct DispSwObj object.
void __nvoc_dtor_DisplayApi(Dynamic*);
void __nvoc_dtor_DispSwObj(Dynamic* pThis) {

    DispSwObj *__nvoc_this = (DispSwObj *) pThis;

// Recurse to superclass destructors.
    __nvoc_dtor_DisplayApi((Dynamic *) &__nvoc_this->__nvoc_base_DisplayApi);

    PORT_UNREFERENCED_VARIABLE(__nvoc_this);
}
void __nvoc_init_dataField_DispSwObj(DispSwObj *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
}


// Construct DispSwObj object.
NV_STATUS __nvoc_ctor_DisplayApi(DisplayApi *pDisplayApi, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);    // inline
NV_STATUS __nvoc_ctor_DispSwObj(DispSwObj *pDispSwObj, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams) {    // inline
    NV_STATUS status = NV_OK;

    // Recurse to ancestor constructor(s).
    status = __nvoc_ctor_DisplayApi(&pDispSwObj->__nvoc_base_DisplayApi, pRmhalspecowner, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_DispSwObj_fail_DisplayApi;

    // Initialize data fields.
    __nvoc_init_dataField_DispSwObj(pDispSwObj);

    // Call the constructor for this class.
    status = __nvoc_dispswobjConstruct(pDispSwObj, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_DispSwObj_fail__init;
    goto __nvoc_ctor_DispSwObj_exit; // Success

    // Unwind on error.
__nvoc_ctor_DispSwObj_fail__init:
    __nvoc_dtor_DisplayApi((Dynamic *)&pDispSwObj->__nvoc_base_DisplayApi);
__nvoc_ctor_DispSwObj_fail_DisplayApi:
__nvoc_ctor_DispSwObj_exit:
    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_DispSwObj_1(DispSwObj *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
} // End __nvoc_init_funcTable_DispSwObj_1


// Initialize vtable(s) for 26 virtual method(s).
void __nvoc_init_funcTable_DispSwObj(DispSwObj *pThis) {
    __nvoc_init_funcTable_DispSwObj_1(pThis);
}

// Initialize newly constructed object.
void __nvoc_init__DispSwObj(DispSwObj *pThis, RmHalspecOwner *pRmhalspecowner) {

    // Initialize pointers to inherited data.
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;    // (obj) super^4
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource;    // (res) super^3
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;    // (rmrescmn) super^3
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource;    // (rmres) super^2
    pThis->__nvoc_pbase_INotifier = &pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_base_INotifier;    // (inotify) super^3
    pThis->__nvoc_pbase_Notifier = &pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier;    // (notify) super^2
    pThis->__nvoc_pbase_DisplayApi = &pThis->__nvoc_base_DisplayApi;    // (dispapi) super
    pThis->__nvoc_pbase_DispSwObj = pThis;    // (dispswobj) this

    // Recurse to superclass initialization function(s).
    __nvoc_init__DisplayApi(&pThis->__nvoc_base_DisplayApi, pRmhalspecowner);

    // Pointer(s) to metadata structures(s)
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.__nvoc_metadata_ptr = &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object;    // (obj) super^4
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_metadata_ptr = &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__RmResource.metadata__RsResource;    // (res) super^3
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon.__nvoc_metadata_ptr = &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon;    // (rmrescmn) super^3
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_metadata_ptr = &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__RmResource;    // (rmres) super^2
    pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_base_INotifier.__nvoc_metadata_ptr = &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__Notifier.metadata__INotifier;    // (inotify) super^3
    pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_metadata_ptr = &__nvoc_metadata__DispSwObj.metadata__DisplayApi.metadata__Notifier;    // (notify) super^2
    pThis->__nvoc_base_DisplayApi.__nvoc_metadata_ptr = &__nvoc_metadata__DispSwObj.metadata__DisplayApi;    // (dispapi) super
    pThis->__nvoc_metadata_ptr = &__nvoc_metadata__DispSwObj;    // (dispswobj) this

    // Initialize per-object vtables.
    __nvoc_init_funcTable_DispSwObj(pThis);
}

NV_STATUS __nvoc_objCreate_DispSwObj(DispSwObj **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams)
{
    NV_STATUS __nvoc_status;
    Object *__nvoc_pParentObj = NULL;
    DispSwObj *__nvoc_pThis;
    RmHalspecOwner *pRmhalspecowner;

    // Don't allocate memory if the caller has already done so.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
    {
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_ppThis != NULL && *__nvoc_ppThis != NULL, NV_ERR_INVALID_PARAMETER);
        __nvoc_pThis = *__nvoc_ppThis;
    }

    // Allocate memory
    else
    {
        __nvoc_pThis = portMemAllocNonPaged(sizeof(DispSwObj));
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_pThis != NULL, NV_ERR_NO_MEMORY);
    }

    // Zero is the initial value for everything.
    portMemSet(__nvoc_pThis, 0, sizeof(DispSwObj));

    __nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = __nvoc_createFlags;

    // pParent must be a valid object that derives from a halspec owner class.
    NV_CHECK_TRUE_OR_GOTO(__nvoc_status, LEVEL_ERROR, __nvoc_pParent != NULL, NV_ERR_INVALID_ARGUMENT, __nvoc_objCreate_DispSwObj_cleanup);

    // Link the child into the parent unless flagged not to do so.
    if (!(__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        __nvoc_pParentObj = dynamicCast(__nvoc_pParent, Object);
        objAddChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        __nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    // HALs are defined by the parent or the first super class.
    if ((pRmhalspecowner = dynamicCast(__nvoc_pParent, RmHalspecOwner)) == NULL)
        pRmhalspecowner = objFindAncestorOfType(RmHalspecOwner, __nvoc_pParent);
    NV_CHECK_TRUE_OR_GOTO(__nvoc_status, LEVEL_ERROR, pRmhalspecowner != NULL, NV_ERR_INVALID_ARGUMENT, __nvoc_objCreate_DispSwObj_cleanup);

    // Initialize vtable, RTTI, etc., then call constructor.
    __nvoc_init__DispSwObj(__nvoc_pThis, pRmhalspecowner);
    __nvoc_status = __nvoc_ctor_DispSwObj(__nvoc_pThis, pRmhalspecowner, pCallContext, pParams);
    if (__nvoc_status != NV_OK) goto __nvoc_objCreate_DispSwObj_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *__nvoc_ppThis = __nvoc_pThis;

    // Success
    return NV_OK;

    // Do not call destructors here since the constructor already called them.
__nvoc_objCreate_DispSwObj_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (__nvoc_pParentObj != NULL)
        objRemoveChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);

    // Zero out memory that was allocated by caller.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(__nvoc_pThis, 0, sizeof(DispSwObj));

    // Free memory allocated by `__nvoc_handleObjCreateMemAlloc`.
    else
    {
        portMemFree(__nvoc_pThis);
        *__nvoc_ppThis = NULL;
    }

    // Failure
    return __nvoc_status;
}

NV_STATUS __nvoc_objCreateDynamic_DispSwObj(Dynamic **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, va_list __nvoc_args) {
    struct CALL_CONTEXT *pCallContext = va_arg(__nvoc_args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams = va_arg(__nvoc_args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    return __nvoc_objCreate_DispSwObj((DispSwObj **) __nvoc_ppThis, __nvoc_pParent, __nvoc_createFlags, pCallContext, pParams);
}


#ifdef DEBUG
char __nvoc_class_id_uniqueness_check__41f4f2 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_DispCommon;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_INotifier;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Notifier;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_DisplayApi;

// Forward declarations for DispCommon
void __nvoc_init__DisplayApi(DisplayApi*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_init__DispCommon(DispCommon*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_init_funcTable_DispCommon(DispCommon*);
NV_STATUS __nvoc_ctor_DispCommon(DispCommon*, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);
void __nvoc_init_dataField_DispCommon(DispCommon*);
void __nvoc_dtor_DispCommon(Dynamic*);

// Structures used within RTTI (run-time type information)
extern const struct NVOC_CASTINFO __nvoc_castinfo__DispCommon;
extern const struct NVOC_EXPORT_INFO __nvoc_export_info__DispCommon;

// Down-thunk(s) to bridge DispCommon methods from ancestors (if any)
NvBool __nvoc_down_thunk_RmResource_resAccessCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super^2
NvBool __nvoc_down_thunk_RmResource_resShareCallback(struct RsResource *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControlSerialization_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControlSerialization_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
NV_STATUS __nvoc_down_thunk_RmResource_resControl_Prologue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
void __nvoc_down_thunk_RmResource_resControl_Epilogue(struct RsResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super^2
PEVENTNOTIFICATION * __nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr(struct INotifier *pNotifier);    // super^2
struct NotifShare * __nvoc_down_thunk_Notifier_inotifyGetNotificationShare(struct INotifier *pNotifier);    // super^2
void __nvoc_down_thunk_Notifier_inotifySetNotificationShare(struct INotifier *pNotifier, struct NotifShare *pNotifShare);    // super^2
NV_STATUS __nvoc_down_thunk_Notifier_inotifyUnregisterEvent(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // super^2
NV_STATUS __nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // super^2
NV_STATUS __nvoc_down_thunk_DisplayApi_resControl(struct RsResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_down_thunk_DisplayApi_rmresControl_Prologue(struct RmResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // super
void __nvoc_down_thunk_DisplayApi_rmresControl_Epilogue(struct RmResource *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // super

// Up-thunk(s) to bridge DispCommon methods to ancestors (if any)
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
NvBool __nvoc_up_thunk_RmResource_dispapiAccessCallback(struct DisplayApi *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super
NvBool __nvoc_up_thunk_RmResource_dispapiShareCallback(struct DisplayApi *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiGetMemInterMapParams(struct DisplayApi *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiCheckMemInterUnmap(struct DisplayApi *pRmResource, NvBool bSubdeviceHandleProvided);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiGetMemoryMappingDescriptor(struct DisplayApi *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // super
NV_STATUS __nvoc_up_thunk_RmResource_dispapiControlSerialization_Prologue(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_up_thunk_RmResource_dispapiControlSerialization_Epilogue(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NvBool __nvoc_up_thunk_RsResource_dispapiCanCopy(struct DisplayApi *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiIsDuplicate(struct DisplayApi *pResource, NvHandle hMemory, NvBool *pDuplicate);    // super
void __nvoc_up_thunk_RsResource_dispapiPreDestruct(struct DisplayApi *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiControlFilter(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiMap(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiUnmap(struct DisplayApi *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // super
NvBool __nvoc_up_thunk_RsResource_dispapiIsPartialUnmapSupported(struct DisplayApi *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiMapTo(struct DisplayApi *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_dispapiUnmapFrom(struct DisplayApi *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // super
NvU32 __nvoc_up_thunk_RsResource_dispapiGetRefCount(struct DisplayApi *pResource);    // super
void __nvoc_up_thunk_RsResource_dispapiAddAdditionalDependants(struct RsClient *pClient, struct DisplayApi *pResource, RsResourceRef *pReference);    // super
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_dispapiGetNotificationListPtr(struct DisplayApi *pNotifier);    // super
struct NotifShare * __nvoc_up_thunk_Notifier_dispapiGetNotificationShare(struct DisplayApi *pNotifier);    // super
void __nvoc_up_thunk_Notifier_dispapiSetNotificationShare(struct DisplayApi *pNotifier, struct NotifShare *pNotifShare);    // super
NV_STATUS __nvoc_up_thunk_Notifier_dispapiUnregisterEvent(struct DisplayApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // super
NV_STATUS __nvoc_up_thunk_Notifier_dispapiGetOrAllocNotifShare(struct DisplayApi *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // super
NV_STATUS __nvoc_up_thunk_DisplayApi_dispcmnControl(struct DispCommon *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_DisplayApi_dispcmnControl_Prologue(struct DispCommon *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // this
void __nvoc_up_thunk_DisplayApi_dispcmnControl_Epilogue(struct DispCommon *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams);    // this
NvBool __nvoc_up_thunk_RmResource_dispcmnAccessCallback(struct DispCommon *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // this
NvBool __nvoc_up_thunk_RmResource_dispcmnShareCallback(struct DispCommon *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispcmnGetMemInterMapParams(struct DispCommon *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispcmnCheckMemInterUnmap(struct DispCommon *pRmResource, NvBool bSubdeviceHandleProvided);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispcmnGetMemoryMappingDescriptor(struct DispCommon *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc);    // this
NV_STATUS __nvoc_up_thunk_RmResource_dispcmnControlSerialization_Prologue(struct DispCommon *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RmResource_dispcmnControlSerialization_Epilogue(struct DispCommon *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NvBool __nvoc_up_thunk_RsResource_dispcmnCanCopy(struct DispCommon *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnIsDuplicate(struct DispCommon *pResource, NvHandle hMemory, NvBool *pDuplicate);    // this
void __nvoc_up_thunk_RsResource_dispcmnPreDestruct(struct DispCommon *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnControlFilter(struct DispCommon *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnMap(struct DispCommon *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnUnmap(struct DispCommon *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // this
NvBool __nvoc_up_thunk_RsResource_dispcmnIsPartialUnmapSupported(struct DispCommon *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnMapTo(struct DispCommon *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnUnmapFrom(struct DispCommon *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // this
NvU32 __nvoc_up_thunk_RsResource_dispcmnGetRefCount(struct DispCommon *pResource);    // this
void __nvoc_up_thunk_RsResource_dispcmnAddAdditionalDependants(struct RsClient *pClient, struct DispCommon *pResource, RsResourceRef *pReference);    // this
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_dispcmnGetNotificationListPtr(struct DispCommon *pNotifier);    // this
struct NotifShare * __nvoc_up_thunk_Notifier_dispcmnGetNotificationShare(struct DispCommon *pNotifier);    // this
void __nvoc_up_thunk_Notifier_dispcmnSetNotificationShare(struct DispCommon *pNotifier, struct NotifShare *pNotifShare);    // this
NV_STATUS __nvoc_up_thunk_Notifier_dispcmnUnregisterEvent(struct DispCommon *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // this
NV_STATUS __nvoc_up_thunk_Notifier_dispcmnGetOrAllocNotifShare(struct DispCommon *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // this

// Class-specific details for DispCommon
const struct NVOC_CLASS_DEF __nvoc_class_def_DispCommon = 
{
    .classInfo.size =               sizeof(DispCommon),
    .classInfo.classId =            classId(DispCommon),
    .classInfo.visibility =         NVOC_EVENT_VISIBILITY_NONEVENT,
    .classInfo.providerId =         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
    .classInfo.name =               "DispCommon",
#endif
    .objCreatefn =        &__nvoc_objCreateDynamic_DispCommon,
    .pCastInfo =          &__nvoc_castinfo__DispCommon,
    .pExportInfo =        &__nvoc_export_info__DispCommon
};

// By default, all exported methods are enabled.
#if !defined(NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG)
#define NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(x)      (0)
#endif

// Exported trampoline function definitions
































































































































































// Exported method array
static const struct NVOC_EXPORTED_METHOD_DEF __nvoc_exported_method_def_DispCommon[] = 
{
    {               /*  [5] */
        /*pFunc=*/      (void (*)(void)) NULL,
        /*flags=*/      0x82004au,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x730107u,
        /*paramSize=*/  sizeof(NV0073_CTRL_SYSTEM_GET_SUPPORTED_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_DispCommon.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "dispcmnCtrlCmdSystemGetSuppported"
#endif
    },
    {               /*  [38] */
        /*pFunc=*/      (void (*)(void)) NULL,
        /*flags=*/      0x48u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x730211u,
        /*paramSize=*/  sizeof(NV0073_CTRL_SPECIFIC_GET_I2C_PORTID_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_DispCommon.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "dispcmnCtrlCmdSpecificGetI2cPortid"
#endif
    },
    {               /*  [57] */
        /*pFunc=*/      (void (*)(void)) NULL,
        /*flags=*/      0x46u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x73028bu,
        /*paramSize=*/  sizeof(NV0073_CTRL_SPECIFIC_OR_GET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_DispCommon.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "dispcmnCtrlCmdSpecificOrGetInfo"
#endif
    },
};


// Metadata with per-class RTTI and vtable with ancestor(s)
static const struct NVOC_METADATA__DispCommon __nvoc_metadata__DispCommon = {
    .rtti.pClassDef = &__nvoc_class_def_DispCommon,    // (dispcmn) this
    .rtti.dtor      = &__nvoc_dtor_DispCommon,
    .rtti.offset    = 0,
    .metadata__DisplayApi.rtti.pClassDef = &__nvoc_class_def_DisplayApi,    // (dispapi) super
    .metadata__DisplayApi.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.rtti.offset    = NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi),
    .metadata__DisplayApi.metadata__RmResource.rtti.pClassDef = &__nvoc_class_def_RmResource,    // (rmres) super^2
    .metadata__DisplayApi.metadata__RmResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.rtti.offset    = NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource),
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti.pClassDef = &__nvoc_class_def_RsResource,    // (res) super^3
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti.offset    = NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource),
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.pClassDef = &__nvoc_class_def_Object,    // (obj) super^4
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti.offset    = NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
    .metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti.pClassDef = &__nvoc_class_def_RmResourceCommon,    // (rmrescmn) super^3
    .metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti.offset    = NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
    .metadata__DisplayApi.metadata__Notifier.rtti.pClassDef = &__nvoc_class_def_Notifier,    // (notify) super^2
    .metadata__DisplayApi.metadata__Notifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__Notifier.rtti.offset    = NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_Notifier),
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti.pClassDef = &__nvoc_class_def_INotifier,    // (inotify) super^3
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti.offset    = NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_base_INotifier),

    .vtable.__dispcmnControl__ = &__nvoc_up_thunk_DisplayApi_dispcmnControl,    // virtual inherited (dispapi) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControl__ = &dispapiControl_IMPL,    // virtual override (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControl__ = &__nvoc_up_thunk_RsResource_rmresControl,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControl__ = &__nvoc_down_thunk_DisplayApi_resControl,    // virtual
    .vtable.__dispcmnControl_Prologue__ = &__nvoc_up_thunk_DisplayApi_dispcmnControl_Prologue,    // virtual inherited (dispapi) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControl_Prologue__ = &dispapiControl_Prologue_IMPL,    // virtual override (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControl_Prologue__ = &__nvoc_down_thunk_DisplayApi_rmresControl_Prologue,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControl_Prologue__ = &__nvoc_down_thunk_RmResource_resControl_Prologue,    // virtual
    .vtable.__dispcmnControl_Epilogue__ = &__nvoc_up_thunk_DisplayApi_dispcmnControl_Epilogue,    // virtual inherited (dispapi) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControl_Epilogue__ = &dispapiControl_Epilogue_IMPL,    // virtual override (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControl_Epilogue__ = &__nvoc_down_thunk_DisplayApi_rmresControl_Epilogue,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControl_Epilogue__ = &__nvoc_down_thunk_RmResource_resControl_Epilogue,    // virtual
    .vtable.__dispcmnAccessCallback__ = &__nvoc_up_thunk_RmResource_dispcmnAccessCallback,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiAccessCallback__ = &__nvoc_up_thunk_RmResource_dispapiAccessCallback,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresAccessCallback__ = &rmresAccessCallback_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resAccessCallback__ = &__nvoc_down_thunk_RmResource_resAccessCallback,    // virtual
    .vtable.__dispcmnShareCallback__ = &__nvoc_up_thunk_RmResource_dispcmnShareCallback,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiShareCallback__ = &__nvoc_up_thunk_RmResource_dispapiShareCallback,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresShareCallback__ = &rmresShareCallback_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resShareCallback__ = &__nvoc_down_thunk_RmResource_resShareCallback,    // virtual
    .vtable.__dispcmnGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_dispcmnGetMemInterMapParams,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetMemInterMapParams__ = &__nvoc_up_thunk_RmResource_dispapiGetMemInterMapParams,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresGetMemInterMapParams__ = &rmresGetMemInterMapParams_IMPL,    // virtual
    .vtable.__dispcmnCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_dispcmnCheckMemInterUnmap,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiCheckMemInterUnmap__ = &__nvoc_up_thunk_RmResource_dispapiCheckMemInterUnmap,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresCheckMemInterUnmap__ = &rmresCheckMemInterUnmap_IMPL,    // virtual
    .vtable.__dispcmnGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_dispcmnGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetMemoryMappingDescriptor__ = &__nvoc_up_thunk_RmResource_dispapiGetMemoryMappingDescriptor,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresGetMemoryMappingDescriptor__ = &rmresGetMemoryMappingDescriptor_IMPL,    // virtual
    .vtable.__dispcmnControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_dispcmnControlSerialization_Prologue,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControlSerialization_Prologue__ = &__nvoc_up_thunk_RmResource_dispapiControlSerialization_Prologue,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControlSerialization_Prologue__ = &rmresControlSerialization_Prologue_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControlSerialization_Prologue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Prologue,    // virtual
    .vtable.__dispcmnControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_dispcmnControlSerialization_Epilogue,    // virtual inherited (rmres) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControlSerialization_Epilogue__ = &__nvoc_up_thunk_RmResource_dispapiControlSerialization_Epilogue,    // virtual inherited (rmres) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControlSerialization_Epilogue__ = &rmresControlSerialization_Epilogue_IMPL,    // virtual override (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControlSerialization_Epilogue__ = &__nvoc_down_thunk_RmResource_resControlSerialization_Epilogue,    // virtual
    .vtable.__dispcmnCanCopy__ = &__nvoc_up_thunk_RsResource_dispcmnCanCopy,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiCanCopy__ = &__nvoc_up_thunk_RsResource_dispapiCanCopy,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresCanCopy__ = &__nvoc_up_thunk_RsResource_rmresCanCopy,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resCanCopy__ = &resCanCopy_IMPL,    // virtual
    .vtable.__dispcmnIsDuplicate__ = &__nvoc_up_thunk_RsResource_dispcmnIsDuplicate,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiIsDuplicate__ = &__nvoc_up_thunk_RsResource_dispapiIsDuplicate,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresIsDuplicate__ = &__nvoc_up_thunk_RsResource_rmresIsDuplicate,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resIsDuplicate__ = &resIsDuplicate_IMPL,    // virtual
    .vtable.__dispcmnPreDestruct__ = &__nvoc_up_thunk_RsResource_dispcmnPreDestruct,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiPreDestruct__ = &__nvoc_up_thunk_RsResource_dispapiPreDestruct,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresPreDestruct__ = &__nvoc_up_thunk_RsResource_rmresPreDestruct,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resPreDestruct__ = &resPreDestruct_IMPL,    // virtual
    .vtable.__dispcmnControlFilter__ = &__nvoc_up_thunk_RsResource_dispcmnControlFilter,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiControlFilter__ = &__nvoc_up_thunk_RsResource_dispapiControlFilter,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresControlFilter__ = &__nvoc_up_thunk_RsResource_rmresControlFilter,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resControlFilter__ = &resControlFilter_IMPL,    // virtual
    .vtable.__dispcmnMap__ = &__nvoc_up_thunk_RsResource_dispcmnMap,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiMap__ = &__nvoc_up_thunk_RsResource_dispapiMap,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresMap__ = &__nvoc_up_thunk_RsResource_rmresMap,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resMap__ = &resMap_IMPL,    // virtual
    .vtable.__dispcmnUnmap__ = &__nvoc_up_thunk_RsResource_dispcmnUnmap,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiUnmap__ = &__nvoc_up_thunk_RsResource_dispapiUnmap,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresUnmap__ = &__nvoc_up_thunk_RsResource_rmresUnmap,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resUnmap__ = &resUnmap_IMPL,    // virtual
    .vtable.__dispcmnIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_dispcmnIsPartialUnmapSupported,    // inline virtual inherited (res) base (dispapi) body
    .metadata__DisplayApi.vtable.__dispapiIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_dispapiIsPartialUnmapSupported,    // inline virtual inherited (res) base (rmres) body
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_rmresIsPartialUnmapSupported,    // inline virtual inherited (res) base (res) body
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resIsPartialUnmapSupported__ = &resIsPartialUnmapSupported_d69453,    // inline virtual body
    .vtable.__dispcmnMapTo__ = &__nvoc_up_thunk_RsResource_dispcmnMapTo,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiMapTo__ = &__nvoc_up_thunk_RsResource_dispapiMapTo,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresMapTo__ = &__nvoc_up_thunk_RsResource_rmresMapTo,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resMapTo__ = &resMapTo_IMPL,    // virtual
    .vtable.__dispcmnUnmapFrom__ = &__nvoc_up_thunk_RsResource_dispcmnUnmapFrom,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiUnmapFrom__ = &__nvoc_up_thunk_RsResource_dispapiUnmapFrom,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresUnmapFrom__ = &__nvoc_up_thunk_RsResource_rmresUnmapFrom,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resUnmapFrom__ = &resUnmapFrom_IMPL,    // virtual
    .vtable.__dispcmnGetRefCount__ = &__nvoc_up_thunk_RsResource_dispcmnGetRefCount,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetRefCount__ = &__nvoc_up_thunk_RsResource_dispapiGetRefCount,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresGetRefCount__ = &__nvoc_up_thunk_RsResource_rmresGetRefCount,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resGetRefCount__ = &resGetRefCount_IMPL,    // virtual
    .vtable.__dispcmnAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_dispcmnAddAdditionalDependants,    // virtual inherited (res) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_dispapiAddAdditionalDependants,    // virtual inherited (res) base (rmres)
    .metadata__DisplayApi.metadata__RmResource.vtable.__rmresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_rmresAddAdditionalDependants,    // virtual inherited (res) base (res)
    .metadata__DisplayApi.metadata__RmResource.metadata__RsResource.vtable.__resAddAdditionalDependants__ = &resAddAdditionalDependants_IMPL,    // virtual
    .vtable.__dispcmnGetNotificationListPtr__ = &__nvoc_up_thunk_Notifier_dispcmnGetNotificationListPtr,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetNotificationListPtr__ = &__nvoc_up_thunk_Notifier_dispapiGetNotificationListPtr,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyGetNotificationListPtr__ = &notifyGetNotificationListPtr_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationListPtr__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr,    // pure virtual
    .vtable.__dispcmnGetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispcmnGetNotificationShare,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispapiGetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyGetNotificationShare__ = &notifyGetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationShare,    // pure virtual
    .vtable.__dispcmnSetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispcmnSetNotificationShare,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiSetNotificationShare__ = &__nvoc_up_thunk_Notifier_dispapiSetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifySetNotificationShare__ = &notifySetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifySetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifySetNotificationShare,    // pure virtual
    .vtable.__dispcmnUnregisterEvent__ = &__nvoc_up_thunk_Notifier_dispcmnUnregisterEvent,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiUnregisterEvent__ = &__nvoc_up_thunk_Notifier_dispapiUnregisterEvent,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyUnregisterEvent__ = &notifyUnregisterEvent_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyUnregisterEvent__ = &__nvoc_down_thunk_Notifier_inotifyUnregisterEvent,    // pure virtual
    .vtable.__dispcmnGetOrAllocNotifShare__ = &__nvoc_up_thunk_Notifier_dispcmnGetOrAllocNotifShare,    // virtual inherited (notify) base (dispapi)
    .metadata__DisplayApi.vtable.__dispapiGetOrAllocNotifShare__ = &__nvoc_up_thunk_Notifier_dispapiGetOrAllocNotifShare,    // virtual inherited (notify) base (notify)
    .metadata__DisplayApi.metadata__Notifier.vtable.__notifyGetOrAllocNotifShare__ = &notifyGetOrAllocNotifShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__DisplayApi.metadata__Notifier.metadata__INotifier.vtable.__inotifyGetOrAllocNotifShare__ = &__nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare,    // pure virtual
};


// Dynamic down-casting information
const struct NVOC_CASTINFO __nvoc_castinfo__DispCommon = {
    .numRelatives = 8,
    .relatives = {
        &__nvoc_metadata__DispCommon.rtti,    // [0]: (dispcmn) this
        &__nvoc_metadata__DispCommon.metadata__DisplayApi.rtti,    // [1]: (dispapi) super
        &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__RmResource.rtti,    // [2]: (rmres) super^2
        &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__RmResource.metadata__RsResource.rtti,    // [3]: (res) super^3
        &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object.rtti,    // [4]: (obj) super^4
        &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon.rtti,    // [5]: (rmrescmn) super^3
        &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__Notifier.rtti,    // [6]: (notify) super^2
        &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__Notifier.metadata__INotifier.rtti,    // [7]: (inotify) super^3
    }
};

// 26 up-thunk(s) defined to bridge methods in DispCommon to superclasses

// dispcmnControl: virtual inherited (dispapi) base (dispapi)
NV_STATUS __nvoc_up_thunk_DisplayApi_dispcmnControl(struct DispCommon *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return dispapiControl((struct DisplayApi *)(((unsigned char *) pDisplayApi) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi)), pCallContext, pParams);
}

// dispcmnControl_Prologue: virtual inherited (dispapi) base (dispapi)
NV_STATUS __nvoc_up_thunk_DisplayApi_dispcmnControl_Prologue(struct DispCommon *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams) {
    return dispapiControl_Prologue((struct DisplayApi *)(((unsigned char *) pDisplayApi) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi)), pCallContext, pRsParams);
}

// dispcmnControl_Epilogue: virtual inherited (dispapi) base (dispapi)
void __nvoc_up_thunk_DisplayApi_dispcmnControl_Epilogue(struct DispCommon *pDisplayApi, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pRsParams) {
    dispapiControl_Epilogue((struct DisplayApi *)(((unsigned char *) pDisplayApi) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi)), pCallContext, pRsParams);
}

// dispcmnAccessCallback: virtual inherited (rmres) base (dispapi)
NvBool __nvoc_up_thunk_RmResource_dispcmnAccessCallback(struct DispCommon *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pInvokingClient, pAllocParams, accessRight);
}

// dispcmnShareCallback: virtual inherited (rmres) base (dispapi)
NvBool __nvoc_up_thunk_RmResource_dispcmnShareCallback(struct DispCommon *pResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return rmresShareCallback((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pInvokingClient, pParentRef, pSharePolicy);
}

// dispcmnGetMemInterMapParams: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_dispcmnGetMemInterMapParams(struct DispCommon *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return rmresGetMemInterMapParams((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pParams);
}

// dispcmnCheckMemInterUnmap: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_dispcmnCheckMemInterUnmap(struct DispCommon *pRmResource, NvBool bSubdeviceHandleProvided) {
    return rmresCheckMemInterUnmap((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), bSubdeviceHandleProvided);
}

// dispcmnGetMemoryMappingDescriptor: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_dispcmnGetMemoryMappingDescriptor(struct DispCommon *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc) {
    return rmresGetMemoryMappingDescriptor((struct RmResource *)(((unsigned char *) pRmResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), ppMemDesc);
}

// dispcmnControlSerialization_Prologue: virtual inherited (rmres) base (dispapi)
NV_STATUS __nvoc_up_thunk_RmResource_dispcmnControlSerialization_Prologue(struct DispCommon *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControlSerialization_Prologue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pCallContext, pParams);
}

// dispcmnControlSerialization_Epilogue: virtual inherited (rmres) base (dispapi)
void __nvoc_up_thunk_RmResource_dispcmnControlSerialization_Epilogue(struct DispCommon *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControlSerialization_Epilogue((struct RmResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource)), pCallContext, pParams);
}

// dispcmnCanCopy: virtual inherited (res) base (dispapi)
NvBool __nvoc_up_thunk_RsResource_dispcmnCanCopy(struct DispCommon *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispcmnIsDuplicate: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnIsDuplicate(struct DispCommon *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), hMemory, pDuplicate);
}

// dispcmnPreDestruct: virtual inherited (res) base (dispapi)
void __nvoc_up_thunk_RsResource_dispcmnPreDestruct(struct DispCommon *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispcmnControlFilter: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnControlFilter(struct DispCommon *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// dispcmnMap: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnMap(struct DispCommon *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping) {
    return resMap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pParams, pCpuMapping);
}

// dispcmnUnmap: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnUnmap(struct DispCommon *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping) {
    return resUnmap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pCallContext, pCpuMapping);
}

// dispcmnIsPartialUnmapSupported: inline virtual inherited (res) base (dispapi) body
NvBool __nvoc_up_thunk_RsResource_dispcmnIsPartialUnmapSupported(struct DispCommon *pResource) {
    return resIsPartialUnmapSupported((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispcmnMapTo: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnMapTo(struct DispCommon *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// dispcmnUnmapFrom: virtual inherited (res) base (dispapi)
NV_STATUS __nvoc_up_thunk_RsResource_dispcmnUnmapFrom(struct DispCommon *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pParams);
}

// dispcmnGetRefCount: virtual inherited (res) base (dispapi)
NvU32 __nvoc_up_thunk_RsResource_dispcmnGetRefCount(struct DispCommon *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)));
}

// dispcmnAddAdditionalDependants: virtual inherited (res) base (dispapi)
void __nvoc_up_thunk_RsResource_dispcmnAddAdditionalDependants(struct RsClient *pClient, struct DispCommon *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource)), pReference);
}

// dispcmnGetNotificationListPtr: virtual inherited (notify) base (dispapi)
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_dispcmnGetNotificationListPtr(struct DispCommon *pNotifier) {
    return notifyGetNotificationListPtr((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_Notifier)));
}

// dispcmnGetNotificationShare: virtual inherited (notify) base (dispapi)
struct NotifShare * __nvoc_up_thunk_Notifier_dispcmnGetNotificationShare(struct DispCommon *pNotifier) {
    return notifyGetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_Notifier)));
}

// dispcmnSetNotificationShare: virtual inherited (notify) base (dispapi)
void __nvoc_up_thunk_Notifier_dispcmnSetNotificationShare(struct DispCommon *pNotifier, struct NotifShare *pNotifShare) {
    notifySetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_Notifier)), pNotifShare);
}

// dispcmnUnregisterEvent: virtual inherited (notify) base (dispapi)
NV_STATUS __nvoc_up_thunk_Notifier_dispcmnUnregisterEvent(struct DispCommon *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent) {
    return notifyUnregisterEvent((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_Notifier)), hNotifierClient, hNotifierResource, hEventClient, hEvent);
}

// dispcmnGetOrAllocNotifShare: virtual inherited (notify) base (dispapi)
NV_STATUS __nvoc_up_thunk_Notifier_dispcmnGetOrAllocNotifShare(struct DispCommon *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare) {
    return notifyGetOrAllocNotifShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(DispCommon, __nvoc_base_DisplayApi.__nvoc_base_Notifier)), hNotifierClient, hNotifierResource, ppNotifShare);
}


const struct NVOC_EXPORT_INFO __nvoc_export_info__DispCommon = 
{
    .numEntries=     3,
    .pExportEntries= __nvoc_exported_method_def_DispCommon
};


// Destruct DispCommon object.
void __nvoc_dtor_DisplayApi(Dynamic*);
void __nvoc_dtor_DispCommon(Dynamic* pThis) {

    DispCommon *__nvoc_this = (DispCommon *) pThis;

// Recurse to superclass destructors.
    __nvoc_dtor_DisplayApi((Dynamic *) &__nvoc_this->__nvoc_base_DisplayApi);

    PORT_UNREFERENCED_VARIABLE(__nvoc_this);
}
void __nvoc_init_dataField_DispCommon(DispCommon *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
}


// Construct DispCommon object.
NV_STATUS __nvoc_ctor_DisplayApi(DisplayApi *pDisplayApi, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);    // inline
NV_STATUS __nvoc_ctor_DispCommon(DispCommon *pDispCommon, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams) {    // inline
    NV_STATUS status = NV_OK;

    // Recurse to ancestor constructor(s).
    status = __nvoc_ctor_DisplayApi(&pDispCommon->__nvoc_base_DisplayApi, pRmhalspecowner, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_DispCommon_fail_DisplayApi;

    // Initialize data fields.
    __nvoc_init_dataField_DispCommon(pDispCommon);

    // Call the constructor for this class.
    status = __nvoc_dispcmnConstruct(pDispCommon, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_DispCommon_fail__init;
    goto __nvoc_ctor_DispCommon_exit; // Success

    // Unwind on error.
__nvoc_ctor_DispCommon_fail__init:
    __nvoc_dtor_DisplayApi((Dynamic *)&pDispCommon->__nvoc_base_DisplayApi);
__nvoc_ctor_DispCommon_fail_DisplayApi:
__nvoc_ctor_DispCommon_exit:
    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_DispCommon_1(DispCommon *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
} // End __nvoc_init_funcTable_DispCommon_1


// Initialize vtable(s) for 26 virtual method(s).
void __nvoc_init_funcTable_DispCommon(DispCommon *pThis) {
    __nvoc_init_funcTable_DispCommon_1(pThis);
}

// Initialize newly constructed object.
void __nvoc_init__DispCommon(DispCommon *pThis, RmHalspecOwner *pRmhalspecowner) {

    // Initialize pointers to inherited data.
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;    // (obj) super^4
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource;    // (res) super^3
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;    // (rmrescmn) super^3
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource;    // (rmres) super^2
    pThis->__nvoc_pbase_INotifier = &pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_base_INotifier;    // (inotify) super^3
    pThis->__nvoc_pbase_Notifier = &pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier;    // (notify) super^2
    pThis->__nvoc_pbase_DisplayApi = &pThis->__nvoc_base_DisplayApi;    // (dispapi) super
    pThis->__nvoc_pbase_DispCommon = pThis;    // (dispcmn) this

    // Recurse to superclass initialization function(s).
    __nvoc_init__DisplayApi(&pThis->__nvoc_base_DisplayApi, pRmhalspecowner);

    // Pointer(s) to metadata structures(s)
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.__nvoc_metadata_ptr = &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__RmResource.metadata__RsResource.metadata__Object;    // (obj) super^4
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_metadata_ptr = &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__RmResource.metadata__RsResource;    // (res) super^3
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon.__nvoc_metadata_ptr = &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__RmResource.metadata__RmResourceCommon;    // (rmrescmn) super^3
    pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_metadata_ptr = &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__RmResource;    // (rmres) super^2
    pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_base_INotifier.__nvoc_metadata_ptr = &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__Notifier.metadata__INotifier;    // (inotify) super^3
    pThis->__nvoc_base_DisplayApi.__nvoc_base_Notifier.__nvoc_metadata_ptr = &__nvoc_metadata__DispCommon.metadata__DisplayApi.metadata__Notifier;    // (notify) super^2
    pThis->__nvoc_base_DisplayApi.__nvoc_metadata_ptr = &__nvoc_metadata__DispCommon.metadata__DisplayApi;    // (dispapi) super
    pThis->__nvoc_metadata_ptr = &__nvoc_metadata__DispCommon;    // (dispcmn) this

    // Initialize per-object vtables.
    __nvoc_init_funcTable_DispCommon(pThis);
}

NV_STATUS __nvoc_objCreate_DispCommon(DispCommon **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams)
{
    NV_STATUS __nvoc_status;
    Object *__nvoc_pParentObj = NULL;
    DispCommon *__nvoc_pThis;
    RmHalspecOwner *pRmhalspecowner;

    // Don't allocate memory if the caller has already done so.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
    {
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_ppThis != NULL && *__nvoc_ppThis != NULL, NV_ERR_INVALID_PARAMETER);
        __nvoc_pThis = *__nvoc_ppThis;
    }

    // Allocate memory
    else
    {
        __nvoc_pThis = portMemAllocNonPaged(sizeof(DispCommon));
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_pThis != NULL, NV_ERR_NO_MEMORY);
    }

    // Zero is the initial value for everything.
    portMemSet(__nvoc_pThis, 0, sizeof(DispCommon));

    __nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = __nvoc_createFlags;

    // pParent must be a valid object that derives from a halspec owner class.
    NV_CHECK_TRUE_OR_GOTO(__nvoc_status, LEVEL_ERROR, __nvoc_pParent != NULL, NV_ERR_INVALID_ARGUMENT, __nvoc_objCreate_DispCommon_cleanup);

    // Link the child into the parent unless flagged not to do so.
    if (!(__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        __nvoc_pParentObj = dynamicCast(__nvoc_pParent, Object);
        objAddChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        __nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    // HALs are defined by the parent or the first super class.
    if ((pRmhalspecowner = dynamicCast(__nvoc_pParent, RmHalspecOwner)) == NULL)
        pRmhalspecowner = objFindAncestorOfType(RmHalspecOwner, __nvoc_pParent);
    NV_CHECK_TRUE_OR_GOTO(__nvoc_status, LEVEL_ERROR, pRmhalspecowner != NULL, NV_ERR_INVALID_ARGUMENT, __nvoc_objCreate_DispCommon_cleanup);

    // Initialize vtable, RTTI, etc., then call constructor.
    __nvoc_init__DispCommon(__nvoc_pThis, pRmhalspecowner);
    __nvoc_status = __nvoc_ctor_DispCommon(__nvoc_pThis, pRmhalspecowner, pCallContext, pParams);
    if (__nvoc_status != NV_OK) goto __nvoc_objCreate_DispCommon_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *__nvoc_ppThis = __nvoc_pThis;

    // Success
    return NV_OK;

    // Do not call destructors here since the constructor already called them.
__nvoc_objCreate_DispCommon_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (__nvoc_pParentObj != NULL)
        objRemoveChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_DisplayApi.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);

    // Zero out memory that was allocated by caller.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(__nvoc_pThis, 0, sizeof(DispCommon));

    // Free memory allocated by `__nvoc_handleObjCreateMemAlloc`.
    else
    {
        portMemFree(__nvoc_pThis);
        *__nvoc_ppThis = NULL;
    }

    // Failure
    return __nvoc_status;
}

NV_STATUS __nvoc_objCreateDynamic_DispCommon(Dynamic **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, va_list __nvoc_args) {
    struct CALL_CONTEXT *pCallContext = va_arg(__nvoc_args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams = va_arg(__nvoc_args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    return __nvoc_objCreate_DispCommon((DispCommon **) __nvoc_ppThis, __nvoc_pParent, __nvoc_createFlags, pCallContext, pParams);
}

