#define NVOC_CLIENT_RESOURCE_H_PRIVATE_ACCESS_ALLOWED

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
#include "g_client_resource_nvoc.h"


#ifdef DEBUG
char __nvoc_class_id_uniqueness_check__37a701 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmClientResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsClientResource;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_INotifier;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Notifier;

// Forward declarations for RmClientResource
void __nvoc_init__RsClientResource(RsClientResource*);
void __nvoc_init__RmResourceCommon(RmResourceCommon*);
void __nvoc_init__Notifier(Notifier*);
void __nvoc_init__RmClientResource(RmClientResource*);
void __nvoc_init_funcTable_RmClientResource(RmClientResource*);
NV_STATUS __nvoc_ctor_RmClientResource(RmClientResource*, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);
void __nvoc_init_dataField_RmClientResource(RmClientResource*);
void __nvoc_dtor_RmClientResource(Dynamic*);

// Structures used within RTTI (run-time type information)
extern const struct NVOC_CASTINFO __nvoc_castinfo__RmClientResource;
extern const struct NVOC_EXPORT_INFO __nvoc_export_info__RmClientResource;

// Down-thunk(s) to bridge RmClientResource methods from ancestors (if any)
PEVENTNOTIFICATION * __nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr(struct INotifier *pNotifier);    // super
struct NotifShare * __nvoc_down_thunk_Notifier_inotifyGetNotificationShare(struct INotifier *pNotifier);    // super
void __nvoc_down_thunk_Notifier_inotifySetNotificationShare(struct INotifier *pNotifier, struct NotifShare *pNotifShare);    // super
NV_STATUS __nvoc_down_thunk_Notifier_inotifyUnregisterEvent(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // super
NV_STATUS __nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare(struct INotifier *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // super
NvBool __nvoc_down_thunk_RmClientResource_resAccessCallback(struct RsResource *pRmCliRes, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // this
NvBool __nvoc_down_thunk_RmClientResource_resShareCallback(struct RsResource *pRmCliRes, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // this
NV_STATUS __nvoc_down_thunk_RmClientResource_resControl_Prologue(struct RsResource *pRmCliRes, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_down_thunk_RmClientResource_resControl_Epilogue(struct RsResource *pRmCliRes, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this

// Up-thunk(s) to bridge RmClientResource methods to ancestors (if any)
NvBool __nvoc_up_thunk_RsResource_clientresCanCopy(struct RsClientResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_clientresIsDuplicate(struct RsClientResource *pResource, NvHandle hMemory, NvBool *pDuplicate);    // super
void __nvoc_up_thunk_RsResource_clientresPreDestruct(struct RsClientResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_clientresControl(struct RsClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_clientresControlFilter(struct RsClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_clientresControlSerialization_Prologue(struct RsClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_up_thunk_RsResource_clientresControlSerialization_Epilogue(struct RsClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_clientresControl_Prologue(struct RsClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
void __nvoc_up_thunk_RsResource_clientresControl_Epilogue(struct RsClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_clientresMap(struct RsClientResource *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // super
NV_STATUS __nvoc_up_thunk_RsResource_clientresUnmap(struct RsClientResource *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // super
NvBool __nvoc_up_thunk_RsResource_clientresIsPartialUnmapSupported(struct RsClientResource *pResource);    // super
NV_STATUS __nvoc_up_thunk_RsResource_clientresMapTo(struct RsClientResource *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // super
NV_STATUS __nvoc_up_thunk_RsResource_clientresUnmapFrom(struct RsClientResource *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // super
NvU32 __nvoc_up_thunk_RsResource_clientresGetRefCount(struct RsClientResource *pResource);    // super
NvBool __nvoc_up_thunk_RsResource_clientresAccessCallback(struct RsClientResource *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight);    // super
NvBool __nvoc_up_thunk_RsResource_clientresShareCallback(struct RsClientResource *pResource, struct RsClient *pInvokingClient, RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy);    // super
void __nvoc_up_thunk_RsResource_clientresAddAdditionalDependants(struct RsClient *pClient, struct RsClientResource *pResource, RsResourceRef *pReference);    // super
NvBool __nvoc_up_thunk_RsResource_cliresCanCopy(struct RmClientResource *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_cliresIsDuplicate(struct RmClientResource *pResource, NvHandle hMemory, NvBool *pDuplicate);    // this
void __nvoc_up_thunk_RsResource_cliresPreDestruct(struct RmClientResource *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_cliresControl(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_cliresControlFilter(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_cliresControlSerialization_Prologue(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
void __nvoc_up_thunk_RsResource_cliresControlSerialization_Epilogue(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_cliresMap(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping);    // this
NV_STATUS __nvoc_up_thunk_RsResource_cliresUnmap(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping);    // this
NvBool __nvoc_up_thunk_RsResource_cliresIsPartialUnmapSupported(struct RmClientResource *pResource);    // this
NV_STATUS __nvoc_up_thunk_RsResource_cliresMapTo(struct RmClientResource *pResource, RS_RES_MAP_TO_PARAMS *pParams);    // this
NV_STATUS __nvoc_up_thunk_RsResource_cliresUnmapFrom(struct RmClientResource *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams);    // this
NvU32 __nvoc_up_thunk_RsResource_cliresGetRefCount(struct RmClientResource *pResource);    // this
void __nvoc_up_thunk_RsResource_cliresAddAdditionalDependants(struct RsClient *pClient, struct RmClientResource *pResource, RsResourceRef *pReference);    // this
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_cliresGetNotificationListPtr(struct RmClientResource *pNotifier);    // this
struct NotifShare * __nvoc_up_thunk_Notifier_cliresGetNotificationShare(struct RmClientResource *pNotifier);    // this
void __nvoc_up_thunk_Notifier_cliresSetNotificationShare(struct RmClientResource *pNotifier, struct NotifShare *pNotifShare);    // this
NV_STATUS __nvoc_up_thunk_Notifier_cliresUnregisterEvent(struct RmClientResource *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent);    // this
NV_STATUS __nvoc_up_thunk_Notifier_cliresGetOrAllocNotifShare(struct RmClientResource *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare);    // this

// Class-specific details for RmClientResource
const struct NVOC_CLASS_DEF __nvoc_class_def_RmClientResource = 
{
    .classInfo.size =               sizeof(RmClientResource),
    .classInfo.classId =            classId(RmClientResource),
    .classInfo.visibility =         NVOC_EVENT_VISIBILITY_NONEVENT,
    .classInfo.providerId =         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
    .classInfo.name =               "RmClientResource",
#endif
    .objCreatefn =        &__nvoc_objCreateDynamic_RmClientResource,
    .pCastInfo =          &__nvoc_castinfo__RmClientResource,
    .pExportInfo =        &__nvoc_export_info__RmClientResource
};

// By default, all exported methods are enabled.
#if !defined(NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG)
#define NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(x)      (0)
#endif

// Exported trampoline function definitions













































#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00000109u)
static NV_STATUS cliresCtrlCmdGpuGetIdInfoV2__EXPORT(void *pRmCliRes, void *pGpuIdInfoParams) {
    return cliresCtrlCmdGpuGetIdInfoV2_IMPL(pRmCliRes, pGpuIdInfoParams);
}
#endif // !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x00000109u)































































// Exported method array
static const struct NVOC_EXPORTED_METHOD_DEF __nvoc_exported_method_def_RmClientResource[] = 
{
    {               /*  [46] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x109u)
        /*pFunc=*/      (void (*)(void)) NULL,
#else
        /*pFunc=*/      (void (*)(void)) &cliresCtrlCmdGpuGetIdInfoV2__EXPORT,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x109u)
        /*flags=*/      0x109u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x205u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_ID_INFO_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetIdInfoV2"
#endif
    },
};


// Metadata with per-class RTTI and vtable with ancestor(s)
static const struct NVOC_METADATA__RmClientResource __nvoc_metadata__RmClientResource = {
    .rtti.pClassDef = &__nvoc_class_def_RmClientResource,    // (clires) this
    .rtti.dtor      = &__nvoc_dtor_RmClientResource,
    .rtti.offset    = 0,
    .metadata__RsClientResource.rtti.pClassDef = &__nvoc_class_def_RsClientResource,    // (clientres) super
    .metadata__RsClientResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__RsClientResource.rtti.offset    = NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource),
    .metadata__RsClientResource.metadata__RsResource.rtti.pClassDef = &__nvoc_class_def_RsResource,    // (res) super^2
    .metadata__RsClientResource.metadata__RsResource.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__RsClientResource.metadata__RsResource.rtti.offset    = NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource),
    .metadata__RsClientResource.metadata__RsResource.metadata__Object.rtti.pClassDef = &__nvoc_class_def_Object,    // (obj) super^3
    .metadata__RsClientResource.metadata__RsResource.metadata__Object.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__RsClientResource.metadata__RsResource.metadata__Object.rtti.offset    = NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object),
    .metadata__RmResourceCommon.rtti.pClassDef = &__nvoc_class_def_RmResourceCommon,    // (rmrescmn) super
    .metadata__RmResourceCommon.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__RmResourceCommon.rtti.offset    = NV_OFFSETOF(RmClientResource, __nvoc_base_RmResourceCommon),
    .metadata__Notifier.rtti.pClassDef = &__nvoc_class_def_Notifier,    // (notify) super
    .metadata__Notifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__Notifier.rtti.offset    = NV_OFFSETOF(RmClientResource, __nvoc_base_Notifier),
    .metadata__Notifier.metadata__INotifier.rtti.pClassDef = &__nvoc_class_def_INotifier,    // (inotify) super^2
    .metadata__Notifier.metadata__INotifier.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__Notifier.metadata__INotifier.rtti.offset    = NV_OFFSETOF(RmClientResource, __nvoc_base_Notifier.__nvoc_base_INotifier),

    .vtable.__cliresAccessCallback__ = &cliresAccessCallback_IMPL,    // virtual override (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresAccessCallback__ = &__nvoc_up_thunk_RsResource_clientresAccessCallback,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resAccessCallback__ = &__nvoc_down_thunk_RmClientResource_resAccessCallback,    // virtual
    .vtable.__cliresShareCallback__ = &cliresShareCallback_IMPL,    // virtual override (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresShareCallback__ = &__nvoc_up_thunk_RsResource_clientresShareCallback,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resShareCallback__ = &__nvoc_down_thunk_RmClientResource_resShareCallback,    // virtual
    .vtable.__cliresControl_Prologue__ = &cliresControl_Prologue_IMPL,    // virtual override (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresControl_Prologue__ = &__nvoc_up_thunk_RsResource_clientresControl_Prologue,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resControl_Prologue__ = &__nvoc_down_thunk_RmClientResource_resControl_Prologue,    // virtual
    .vtable.__cliresControl_Epilogue__ = &cliresControl_Epilogue_IMPL,    // virtual override (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresControl_Epilogue__ = &__nvoc_up_thunk_RsResource_clientresControl_Epilogue,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resControl_Epilogue__ = &__nvoc_down_thunk_RmClientResource_resControl_Epilogue,    // virtual
    .vtable.__cliresCanCopy__ = &__nvoc_up_thunk_RsResource_cliresCanCopy,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresCanCopy__ = &__nvoc_up_thunk_RsResource_clientresCanCopy,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resCanCopy__ = &resCanCopy_IMPL,    // virtual
    .vtable.__cliresIsDuplicate__ = &__nvoc_up_thunk_RsResource_cliresIsDuplicate,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresIsDuplicate__ = &__nvoc_up_thunk_RsResource_clientresIsDuplicate,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resIsDuplicate__ = &resIsDuplicate_IMPL,    // virtual
    .vtable.__cliresPreDestruct__ = &__nvoc_up_thunk_RsResource_cliresPreDestruct,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresPreDestruct__ = &__nvoc_up_thunk_RsResource_clientresPreDestruct,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resPreDestruct__ = &resPreDestruct_IMPL,    // virtual
    .vtable.__cliresControl__ = &__nvoc_up_thunk_RsResource_cliresControl,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresControl__ = &__nvoc_up_thunk_RsResource_clientresControl,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resControl__ = &resControl_IMPL,    // virtual
    .vtable.__cliresControlFilter__ = &__nvoc_up_thunk_RsResource_cliresControlFilter,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresControlFilter__ = &__nvoc_up_thunk_RsResource_clientresControlFilter,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resControlFilter__ = &resControlFilter_IMPL,    // virtual
    .vtable.__cliresControlSerialization_Prologue__ = &__nvoc_up_thunk_RsResource_cliresControlSerialization_Prologue,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresControlSerialization_Prologue__ = &__nvoc_up_thunk_RsResource_clientresControlSerialization_Prologue,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resControlSerialization_Prologue__ = &resControlSerialization_Prologue_IMPL,    // virtual
    .vtable.__cliresControlSerialization_Epilogue__ = &__nvoc_up_thunk_RsResource_cliresControlSerialization_Epilogue,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresControlSerialization_Epilogue__ = &__nvoc_up_thunk_RsResource_clientresControlSerialization_Epilogue,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resControlSerialization_Epilogue__ = &resControlSerialization_Epilogue_IMPL,    // virtual
    .vtable.__cliresMap__ = &__nvoc_up_thunk_RsResource_cliresMap,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresMap__ = &__nvoc_up_thunk_RsResource_clientresMap,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resMap__ = &resMap_IMPL,    // virtual
    .vtable.__cliresUnmap__ = &__nvoc_up_thunk_RsResource_cliresUnmap,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresUnmap__ = &__nvoc_up_thunk_RsResource_clientresUnmap,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resUnmap__ = &resUnmap_IMPL,    // virtual
    .vtable.__cliresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_cliresIsPartialUnmapSupported,    // inline virtual inherited (res) base (clientres) body
    .metadata__RsClientResource.vtable.__clientresIsPartialUnmapSupported__ = &__nvoc_up_thunk_RsResource_clientresIsPartialUnmapSupported,    // inline virtual inherited (res) base (res) body
    .metadata__RsClientResource.metadata__RsResource.vtable.__resIsPartialUnmapSupported__ = &resIsPartialUnmapSupported_d69453,    // inline virtual body
    .vtable.__cliresMapTo__ = &__nvoc_up_thunk_RsResource_cliresMapTo,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresMapTo__ = &__nvoc_up_thunk_RsResource_clientresMapTo,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resMapTo__ = &resMapTo_IMPL,    // virtual
    .vtable.__cliresUnmapFrom__ = &__nvoc_up_thunk_RsResource_cliresUnmapFrom,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresUnmapFrom__ = &__nvoc_up_thunk_RsResource_clientresUnmapFrom,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resUnmapFrom__ = &resUnmapFrom_IMPL,    // virtual
    .vtable.__cliresGetRefCount__ = &__nvoc_up_thunk_RsResource_cliresGetRefCount,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresGetRefCount__ = &__nvoc_up_thunk_RsResource_clientresGetRefCount,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resGetRefCount__ = &resGetRefCount_IMPL,    // virtual
    .vtable.__cliresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_cliresAddAdditionalDependants,    // virtual inherited (res) base (clientres)
    .metadata__RsClientResource.vtable.__clientresAddAdditionalDependants__ = &__nvoc_up_thunk_RsResource_clientresAddAdditionalDependants,    // virtual inherited (res) base (res)
    .metadata__RsClientResource.metadata__RsResource.vtable.__resAddAdditionalDependants__ = &resAddAdditionalDependants_IMPL,    // virtual
    .vtable.__cliresGetNotificationListPtr__ = &__nvoc_up_thunk_Notifier_cliresGetNotificationListPtr,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyGetNotificationListPtr__ = &notifyGetNotificationListPtr_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationListPtr__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationListPtr,    // pure virtual
    .vtable.__cliresGetNotificationShare__ = &__nvoc_up_thunk_Notifier_cliresGetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyGetNotificationShare__ = &notifyGetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyGetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifyGetNotificationShare,    // pure virtual
    .vtable.__cliresSetNotificationShare__ = &__nvoc_up_thunk_Notifier_cliresSetNotificationShare,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifySetNotificationShare__ = &notifySetNotificationShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifySetNotificationShare__ = &__nvoc_down_thunk_Notifier_inotifySetNotificationShare,    // pure virtual
    .vtable.__cliresUnregisterEvent__ = &__nvoc_up_thunk_Notifier_cliresUnregisterEvent,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyUnregisterEvent__ = &notifyUnregisterEvent_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyUnregisterEvent__ = &__nvoc_down_thunk_Notifier_inotifyUnregisterEvent,    // pure virtual
    .vtable.__cliresGetOrAllocNotifShare__ = &__nvoc_up_thunk_Notifier_cliresGetOrAllocNotifShare,    // virtual inherited (notify) base (notify)
    .metadata__Notifier.vtable.__notifyGetOrAllocNotifShare__ = &notifyGetOrAllocNotifShare_IMPL,    // virtual override (inotify) base (inotify)
    .metadata__Notifier.metadata__INotifier.vtable.__inotifyGetOrAllocNotifShare__ = &__nvoc_down_thunk_Notifier_inotifyGetOrAllocNotifShare,    // pure virtual
};


// Dynamic down-casting information
const struct NVOC_CASTINFO __nvoc_castinfo__RmClientResource = {
    .numRelatives = 7,
    .relatives = {
        &__nvoc_metadata__RmClientResource.rtti,    // [0]: (clires) this
        &__nvoc_metadata__RmClientResource.metadata__RsClientResource.rtti,    // [1]: (clientres) super
        &__nvoc_metadata__RmClientResource.metadata__RsClientResource.metadata__RsResource.rtti,    // [2]: (res) super^2
        &__nvoc_metadata__RmClientResource.metadata__RsClientResource.metadata__RsResource.metadata__Object.rtti,    // [3]: (obj) super^3
        &__nvoc_metadata__RmClientResource.metadata__RmResourceCommon.rtti,    // [4]: (rmrescmn) super
        &__nvoc_metadata__RmClientResource.metadata__Notifier.rtti,    // [5]: (notify) super
        &__nvoc_metadata__RmClientResource.metadata__Notifier.metadata__INotifier.rtti,    // [6]: (inotify) super^2
    }
};

// 4 down-thunk(s) defined to bridge methods in RmClientResource from superclasses

// cliresAccessCallback: virtual override (res) base (clientres)
NvBool __nvoc_down_thunk_RmClientResource_resAccessCallback(struct RsResource *pRmCliRes, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return cliresAccessCallback((struct RmClientResource *)(((unsigned char *) pRmCliRes) - NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pInvokingClient, pAllocParams, accessRight);
}

// cliresShareCallback: virtual override (res) base (clientres)
NvBool __nvoc_down_thunk_RmClientResource_resShareCallback(struct RsResource *pRmCliRes, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return cliresShareCallback((struct RmClientResource *)(((unsigned char *) pRmCliRes) - NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pInvokingClient, pParentRef, pSharePolicy);
}

// cliresControl_Prologue: virtual override (res) base (clientres)
NV_STATUS __nvoc_down_thunk_RmClientResource_resControl_Prologue(struct RsResource *pRmCliRes, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return cliresControl_Prologue((struct RmClientResource *)(((unsigned char *) pRmCliRes) - NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// cliresControl_Epilogue: virtual override (res) base (clientres)
void __nvoc_down_thunk_RmClientResource_resControl_Epilogue(struct RsResource *pRmCliRes, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    cliresControl_Epilogue((struct RmClientResource *)(((unsigned char *) pRmCliRes) - NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pCallContext, pParams);
}


// 19 up-thunk(s) defined to bridge methods in RmClientResource to superclasses

// cliresCanCopy: virtual inherited (res) base (clientres)
NvBool __nvoc_up_thunk_RsResource_cliresCanCopy(struct RmClientResource *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)));
}

// cliresIsDuplicate: virtual inherited (res) base (clientres)
NV_STATUS __nvoc_up_thunk_RsResource_cliresIsDuplicate(struct RmClientResource *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), hMemory, pDuplicate);
}

// cliresPreDestruct: virtual inherited (res) base (clientres)
void __nvoc_up_thunk_RsResource_cliresPreDestruct(struct RmClientResource *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)));
}

// cliresControl: virtual inherited (res) base (clientres)
NV_STATUS __nvoc_up_thunk_RsResource_cliresControl(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControl((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// cliresControlFilter: virtual inherited (res) base (clientres)
NV_STATUS __nvoc_up_thunk_RsResource_cliresControlFilter(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// cliresControlSerialization_Prologue: virtual inherited (res) base (clientres)
NV_STATUS __nvoc_up_thunk_RsResource_cliresControlSerialization_Prologue(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlSerialization_Prologue((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// cliresControlSerialization_Epilogue: virtual inherited (res) base (clientres)
void __nvoc_up_thunk_RsResource_cliresControlSerialization_Epilogue(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    resControlSerialization_Epilogue((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pCallContext, pParams);
}

// cliresMap: virtual inherited (res) base (clientres)
NV_STATUS __nvoc_up_thunk_RsResource_cliresMap(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping) {
    return resMap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pCallContext, pParams, pCpuMapping);
}

// cliresUnmap: virtual inherited (res) base (clientres)
NV_STATUS __nvoc_up_thunk_RsResource_cliresUnmap(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping) {
    return resUnmap((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pCallContext, pCpuMapping);
}

// cliresIsPartialUnmapSupported: inline virtual inherited (res) base (clientres) body
NvBool __nvoc_up_thunk_RsResource_cliresIsPartialUnmapSupported(struct RmClientResource *pResource) {
    return resIsPartialUnmapSupported((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)));
}

// cliresMapTo: virtual inherited (res) base (clientres)
NV_STATUS __nvoc_up_thunk_RsResource_cliresMapTo(struct RmClientResource *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pParams);
}

// cliresUnmapFrom: virtual inherited (res) base (clientres)
NV_STATUS __nvoc_up_thunk_RsResource_cliresUnmapFrom(struct RmClientResource *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pParams);
}

// cliresGetRefCount: virtual inherited (res) base (clientres)
NvU32 __nvoc_up_thunk_RsResource_cliresGetRefCount(struct RmClientResource *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)));
}

// cliresAddAdditionalDependants: virtual inherited (res) base (clientres)
void __nvoc_up_thunk_RsResource_cliresAddAdditionalDependants(struct RsClient *pClient, struct RmClientResource *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *) pResource) + NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource)), pReference);
}

// cliresGetNotificationListPtr: virtual inherited (notify) base (notify)
PEVENTNOTIFICATION * __nvoc_up_thunk_Notifier_cliresGetNotificationListPtr(struct RmClientResource *pNotifier) {
    return notifyGetNotificationListPtr((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(RmClientResource, __nvoc_base_Notifier)));
}

// cliresGetNotificationShare: virtual inherited (notify) base (notify)
struct NotifShare * __nvoc_up_thunk_Notifier_cliresGetNotificationShare(struct RmClientResource *pNotifier) {
    return notifyGetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(RmClientResource, __nvoc_base_Notifier)));
}

// cliresSetNotificationShare: virtual inherited (notify) base (notify)
void __nvoc_up_thunk_Notifier_cliresSetNotificationShare(struct RmClientResource *pNotifier, struct NotifShare *pNotifShare) {
    notifySetNotificationShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(RmClientResource, __nvoc_base_Notifier)), pNotifShare);
}

// cliresUnregisterEvent: virtual inherited (notify) base (notify)
NV_STATUS __nvoc_up_thunk_Notifier_cliresUnregisterEvent(struct RmClientResource *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent) {
    return notifyUnregisterEvent((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(RmClientResource, __nvoc_base_Notifier)), hNotifierClient, hNotifierResource, hEventClient, hEvent);
}

// cliresGetOrAllocNotifShare: virtual inherited (notify) base (notify)
NV_STATUS __nvoc_up_thunk_Notifier_cliresGetOrAllocNotifShare(struct RmClientResource *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare) {
    return notifyGetOrAllocNotifShare((struct Notifier *)(((unsigned char *) pNotifier) + NV_OFFSETOF(RmClientResource, __nvoc_base_Notifier)), hNotifierClient, hNotifierResource, ppNotifShare);
}


const struct NVOC_EXPORT_INFO __nvoc_export_info__RmClientResource = 
{
    .numEntries=     1,
    .pExportEntries= __nvoc_exported_method_def_RmClientResource
};


// Destruct RmClientResource object.
void __nvoc_cliresDestruct(RmClientResource*);
void __nvoc_dtor_RsClientResource(Dynamic*);
void __nvoc_dtor_RmResourceCommon(Dynamic*);
void __nvoc_dtor_Notifier(Dynamic*);
void __nvoc_dtor_RmClientResource(Dynamic* pThis) {

    RmClientResource *__nvoc_this = (RmClientResource *) pThis;

// Call destructor.
    __nvoc_cliresDestruct(__nvoc_this);

// Recurse to superclass destructors.
    __nvoc_dtor_RsClientResource((Dynamic *) &__nvoc_this->__nvoc_base_RsClientResource);
    __nvoc_dtor_RmResourceCommon((Dynamic *) &__nvoc_this->__nvoc_base_RmResourceCommon);
    __nvoc_dtor_Notifier((Dynamic *) &__nvoc_this->__nvoc_base_Notifier);

    PORT_UNREFERENCED_VARIABLE(__nvoc_this);
}
void __nvoc_init_dataField_RmClientResource(RmClientResource *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
}


// Construct RmClientResource object.
NV_STATUS __nvoc_ctor_RsClientResource(RsClientResource *pClientRes, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams);    // inline
NV_STATUS __nvoc_ctor_RmResourceCommon(RmResourceCommon *pResourceCommmon);
NV_STATUS __nvoc_ctor_Notifier(Notifier *pNotifier, struct CALL_CONTEXT *pCallContext);    // inline
NV_STATUS __nvoc_ctor_RmClientResource(RmClientResource *pRmCliRes, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams) {    // inline
    NV_STATUS status = NV_OK;

    // Recurse to ancestor constructor(s).
    status = __nvoc_ctor_RsClientResource(&pRmCliRes->__nvoc_base_RsClientResource, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_RmClientResource_fail_RsClientResource;
    status = __nvoc_ctor_RmResourceCommon(&pRmCliRes->__nvoc_base_RmResourceCommon);
    if (status != NV_OK) goto __nvoc_ctor_RmClientResource_fail_RmResourceCommon;
    status = __nvoc_ctor_Notifier(&pRmCliRes->__nvoc_base_Notifier, pCallContext);
    if (status != NV_OK) goto __nvoc_ctor_RmClientResource_fail_Notifier;

    // Initialize data fields.
    __nvoc_init_dataField_RmClientResource(pRmCliRes);

    // Call the constructor for this class.
    status = __nvoc_cliresConstruct(pRmCliRes, pCallContext, pParams);
    if (status != NV_OK) goto __nvoc_ctor_RmClientResource_fail__init;
    goto __nvoc_ctor_RmClientResource_exit; // Success

    // Unwind on error.
__nvoc_ctor_RmClientResource_fail__init:
    __nvoc_dtor_Notifier((Dynamic *)&pRmCliRes->__nvoc_base_Notifier);
__nvoc_ctor_RmClientResource_fail_Notifier:
    __nvoc_dtor_RmResourceCommon((Dynamic *)&pRmCliRes->__nvoc_base_RmResourceCommon);
__nvoc_ctor_RmClientResource_fail_RmResourceCommon:
    __nvoc_dtor_RsClientResource((Dynamic *)&pRmCliRes->__nvoc_base_RsClientResource);
__nvoc_ctor_RmClientResource_fail_RsClientResource:
__nvoc_ctor_RmClientResource_exit:
    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_RmClientResource_1(RmClientResource *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
} // End __nvoc_init_funcTable_RmClientResource_1


// Initialize vtable(s) for 23 virtual method(s).
void __nvoc_init_funcTable_RmClientResource(RmClientResource *pThis) {
    __nvoc_init_funcTable_RmClientResource_1(pThis);
}

// Initialize newly constructed object.
void __nvoc_init__RmClientResource(RmClientResource *pThis) {

    // Initialize pointers to inherited data.
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object;    // (obj) super^3
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource;    // (res) super^2
    pThis->__nvoc_pbase_RsClientResource = &pThis->__nvoc_base_RsClientResource;    // (clientres) super
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_RmResourceCommon;    // (rmrescmn) super
    pThis->__nvoc_pbase_INotifier = &pThis->__nvoc_base_Notifier.__nvoc_base_INotifier;    // (inotify) super^2
    pThis->__nvoc_pbase_Notifier = &pThis->__nvoc_base_Notifier;    // (notify) super
    pThis->__nvoc_pbase_RmClientResource = pThis;    // (clires) this

    // Recurse to superclass initialization function(s).
    __nvoc_init__RsClientResource(&pThis->__nvoc_base_RsClientResource);
    __nvoc_init__RmResourceCommon(&pThis->__nvoc_base_RmResourceCommon);
    __nvoc_init__Notifier(&pThis->__nvoc_base_Notifier);

    // Pointer(s) to metadata structures(s)
    pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object.__nvoc_metadata_ptr = &__nvoc_metadata__RmClientResource.metadata__RsClientResource.metadata__RsResource.metadata__Object;    // (obj) super^3
    pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_metadata_ptr = &__nvoc_metadata__RmClientResource.metadata__RsClientResource.metadata__RsResource;    // (res) super^2
    pThis->__nvoc_base_RsClientResource.__nvoc_metadata_ptr = &__nvoc_metadata__RmClientResource.metadata__RsClientResource;    // (clientres) super
    pThis->__nvoc_base_RmResourceCommon.__nvoc_metadata_ptr = &__nvoc_metadata__RmClientResource.metadata__RmResourceCommon;    // (rmrescmn) super
    pThis->__nvoc_base_Notifier.__nvoc_base_INotifier.__nvoc_metadata_ptr = &__nvoc_metadata__RmClientResource.metadata__Notifier.metadata__INotifier;    // (inotify) super^2
    pThis->__nvoc_base_Notifier.__nvoc_metadata_ptr = &__nvoc_metadata__RmClientResource.metadata__Notifier;    // (notify) super
    pThis->__nvoc_metadata_ptr = &__nvoc_metadata__RmClientResource;    // (clires) this

    // Initialize per-object vtables.
    __nvoc_init_funcTable_RmClientResource(pThis);
}

NV_STATUS __nvoc_objCreate_RmClientResource(RmClientResource **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, struct CALL_CONTEXT *pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams)
{
    NV_STATUS __nvoc_status;
    Object *__nvoc_pParentObj = NULL;
    RmClientResource *__nvoc_pThis;

    // Don't allocate memory if the caller has already done so.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
    {
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_ppThis != NULL && *__nvoc_ppThis != NULL, NV_ERR_INVALID_PARAMETER);
        __nvoc_pThis = *__nvoc_ppThis;
    }

    // Allocate memory
    else
    {
        __nvoc_pThis = portMemAllocNonPaged(sizeof(RmClientResource));
        NV_CHECK_OR_RETURN(LEVEL_ERROR, __nvoc_pThis != NULL, NV_ERR_NO_MEMORY);
    }

    // Zero is the initial value for everything.
    portMemSet(__nvoc_pThis, 0, sizeof(RmClientResource));

    __nvoc_pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = __nvoc_createFlags;

    // Link the child into the parent if there is one unless flagged not to do so.
    if (__nvoc_pParent != NULL && !(__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        __nvoc_pParentObj = dynamicCast(__nvoc_pParent, Object);
        objAddChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        __nvoc_pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    // Initialize vtable, RTTI, etc., then call constructor.
    __nvoc_init__RmClientResource(__nvoc_pThis);
    __nvoc_status = __nvoc_ctor_RmClientResource(__nvoc_pThis, pCallContext, pParams);
    if (__nvoc_status != NV_OK) goto __nvoc_objCreate_RmClientResource_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *__nvoc_ppThis = __nvoc_pThis;

    // Success
    return NV_OK;

    // Do not call destructors here since the constructor already called them.
__nvoc_objCreate_RmClientResource_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (__nvoc_pParentObj != NULL)
        objRemoveChild(__nvoc_pParentObj, &__nvoc_pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object);

    // Zero out memory that was allocated by caller.
    if (__nvoc_createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(__nvoc_pThis, 0, sizeof(RmClientResource));

    // Free memory allocated by `__nvoc_handleObjCreateMemAlloc`.
    else
    {
        portMemFree(__nvoc_pThis);
        *__nvoc_ppThis = NULL;
    }

    // Failure
    return __nvoc_status;
}

NV_STATUS __nvoc_objCreateDynamic_RmClientResource(Dynamic **__nvoc_ppThis, Dynamic *__nvoc_pParent, NvU32 __nvoc_createFlags, va_list __nvoc_args) {
    struct CALL_CONTEXT *pCallContext = va_arg(__nvoc_args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL *pParams = va_arg(__nvoc_args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    return __nvoc_objCreate_RmClientResource((RmClientResource **) __nvoc_ppThis, __nvoc_pParent, __nvoc_createFlags, pCallContext, pParams);
}

