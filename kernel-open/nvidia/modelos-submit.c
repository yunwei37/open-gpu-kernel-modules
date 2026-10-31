// SPDX-License-Identifier: MIT
/* Compile-checked submission sketch for the modified, built-in NVIDIA RM.
 * No ioctl, file descriptor, Linux user VMA, libcuda, or automatic GPU test.
 * Caller must own the GPU, serialize operations, validate a load-time manifest,
 * provide correctly attributed/mapped memory, and keep it until completion.
 */
#include "nv-linux.h"
#include "nv-proto.h"
#include "ctrl/ctrl0000/ctrl0000gpu.h"
#include "nvos.h"
#include "class/cl0000.h"
#include "class/cl0080.h"
#include "class/cl2080.h"
#include "class/cl0070.h"
#include "class/cl90f1.h"
#include "class/cla06c.h"
#include "class/cl9067.h"
#include "alloc/alloc_channel.h"
#include "ctrl/ctrla06c.h"
#include "ctrl/ctrlc36f.h"
#include "ctrl/ctrl0080/ctrl0080gpu.h"
#include "class/clc361.h"
#include "class/clc6c0.h"
#include <linux/elf.h>
#include <linux/io.h>
#include <linux/ktime.h>
#include <linux/delay.h>

extern NV_STATUS modelos_rm_alloc(nvidia_stack_t *,NvHandle,NvHandle,NvHandle *,NvU32,void *,NvU32);
extern NV_STATUS modelos_rm_control(nvidia_stack_t *,NvHandle,NvHandle,NvU32,void *,NvU32);
extern NV_STATUS modelos_rm_free(nvidia_stack_t *,NvHandle,NvHandle);
extern NV_STATUS modelos_rm_map_cpu(nvidia_stack_t *,NvHandle,NvHandle,NvHandle,NvU64,NvU64,void **,NvU32);
extern NV_STATUS modelos_rm_map_dma(nvidia_stack_t *,NVOS46_PARAMETERS *);

struct modelos_nv {
    nvidia_stack_t *stack;
    NvU32 gpu_id;
    NvBool adapter_held;
    NvHandle client,device,subdevice,vaspace,virtual_memory,group,ctxshare,channel,compute;
    NvU32 token,compute_class;
    NvHandle usermode;
    void *doorbell_cpu;
};

static NV_STATUS alloc(struct modelos_nv *c,NvHandle parent,NvHandle *out,
                       NvU32 cls,void *p,NvU32 n)
{ return modelos_rm_alloc(c->stack,c->client,parent,out,cls,p,n); }

static NV_STATUS modelos_nv_close(struct modelos_nv *c)
{
    /* RM recursively destroys child objects, GPU mappings and allocations.
     * Caller MUST stop/drain the channel before invoking this on real hardware.
     */
    if (c->client) {
        NV_STATUS st=modelos_rm_free(c->stack,c->client,c->client);
        if (st!=NV_OK) return st; /* Retain ownership for caller recovery. */
    }
    if (c->adapter_held) nvidia_dev_put(c->gpu_id,c->stack,NV_FALSE);
    if (c->stack) nv_kmem_cache_free_stack(c->stack);
    memset(c,0,sizeof(*c));
    return NV_OK;
}

static NV_STATUS modelos_nv_open(struct modelos_nv *c,NvU32 gpu_id)
{
    NV_STATUS st;
    NV0000_CTRL_GPU_GET_ID_INFO_V2_PARAMS info = {0};
    NV0080_ALLOC_PARAMETERS dev = {0};
    NV2080_ALLOC_PARAMETERS sub = {0};
    NV_VASPACE_ALLOCATION_PARAMETERS va = {0};
    NV_MEMORY_VIRTUAL_ALLOCATION_PARAMS vm = {0};
    NV_CHANNEL_GROUP_ALLOCATION_PARAMETERS grp = {0};
    NV_CTXSHARE_ALLOCATION_PARAMETERS ctx = {0};
    memset(c,0,sizeof(*c));
    if (nv_kmem_cache_alloc_stack(&c->stack)) return NV_ERR_NO_MEMORY;
#define TRY(expr) do { st=(expr); if (st!=NV_OK) goto fail; } while (0)
    /* Kernel analogue of device open: initialize adapter/GSP/IRQs and hold
     * the reset-counted device reference before creating RM resources. */
    if (nvidia_dev_get(gpu_id,c->stack,NV_FALSE)) {
        st=NV_ERR_INVALID_DEVICE; goto fail;
    }
    c->gpu_id=gpu_id; c->adapter_held=NV_TRUE;
    TRY(alloc(c,0,&c->client,NV01_ROOT,&c->client,sizeof(c->client)));
    info.gpuId=gpu_id;
    TRY(modelos_rm_control(c->stack,c->client,c->client,
        NV0000_CTRL_CMD_GPU_GET_ID_INFO_V2,&info,sizeof(info)));
    dev.deviceId=info.deviceInstance; dev.hClientShare=c->client;
    sub.subDeviceId=info.subDeviceInstance;
    dev.vaMode=NV_DEVICE_ALLOCATION_VAMODE_OPTIONAL_MULTIPLE_VASPACES;
    TRY(alloc(c,c->client,&c->device,NV01_DEVICE_0,&dev,sizeof(dev)));
    TRY(alloc(c,c->device,&c->subdevice,NV20_SUBDEVICE_0,&sub,sizeof(sub)));
    /* RM owns GPU page tables; ATS, UVM CPU-page faulting and external ownership
     * are deliberately absent. This is GPU VA, not a Linux process mm. */
    va.vaBase=0x1000; va.vaSize=(1ULL<<47)-0x1000;
    TRY(alloc(c,c->device,&c->vaspace,FERMI_VASPACE_A,&va,sizeof(va)));
    vm.hVASpace=c->vaspace; vm.offset=va.vaBase; vm.limit=(1ULL<<47)-1;
    TRY(alloc(c,c->device,&c->virtual_memory,NV01_MEMORY_VIRTUAL,&vm,sizeof(vm)));
    grp.engineType=0; /* NV2080_ENGINE_TYPE_GRAPHICS, as in the NV reference. */
    TRY(alloc(c,c->device,&c->group,KEPLER_CHANNEL_GROUP_A,&grp,sizeof(grp)));
    ctx.hVASpace=c->vaspace; ctx.flags=NV_CTXSHARE_ALLOCATION_FLAGS_SUBCONTEXT_ASYNC;
    TRY(alloc(c,c->group,&c->ctxshare,FERMI_CONTEXT_SHARE_A,&ctx,sizeof(ctx)));
    return NV_OK;
fail: modelos_nv_close(c); return st;
#undef TRY
}

/* Query advertised classes before choosing GPFIFO/compute/USERMODE IDs. */
static NV_STATUS modelos_nv_classes(struct modelos_nv *c,NvU32 *classes,NvU32 *count)
{
    NV0080_CTRL_GPU_GET_CLASSLIST_PARAMS p = {0}; NV_STATUS st;
    if (!count) return NV_ERR_INVALID_ARGUMENT;
    p.numClasses=classes ? *count : 0;
    p.classList=NV_PTR_TO_NvP64(classes);
    st=modelos_rm_control(c->stack,c->client,c->device,
        NV0080_CTRL_CMD_GPU_GET_CLASSLIST,&p,sizeof(p));
    *count=p.numClasses; return st;
}
/* USERMODE is NVIDIA's hardware doorbell class name; mapping is kernel-only. */
static NV_STATUS modelos_nv_doorbell(struct modelos_nv *c,NvU32 cls)
{
    NV_STATUS st=alloc(c,c->subdevice,&c->usermode,cls,NULL,0);
    if (st!=NV_OK) return st;
    return modelos_rm_map_cpu(c->stack,c->client,c->subdevice,c->usermode,
        0,0x10000,&c->doorbell_cpu,NVOS33_FLAGS_ACCESS_WRITE_ONLY);
}

static NV_STATUS modelos_nv_memory(struct modelos_nv *c,NvU32 memory_class,
     NV_MEMORY_ALLOCATION_PARAMS *params,NvU64 gpu_va,NvHandle *memory,
     void **cpu,NvU32 cpu_map_flags)
{
    NVOS46_PARAMETERS map = {0}; NV_STATUS st;
    if (!params->size || gpu_va > U64_MAX-params->size) return NV_ERR_INVALID_ARGUMENT;
    params->owner=c->client;
    st=alloc(c,c->device,memory,memory_class,params,sizeof(*params));
    if (st!=NV_OK) return st;
    map.hClient=c->client; map.hDevice=c->device; map.hDma=c->virtual_memory;
    map.hMemory=*memory; map.length=params->size; map.dmaOffset=gpu_va;
    st=modelos_rm_map_dma(c->stack,&map);
    if (st!=NV_OK) goto fail;
    /* Kernel mapping flag is mandatory. Caller additionally selects UC/WC
     * consistent with the RM allocation and host/device architecture. */
    st=modelos_rm_map_cpu(c->stack,c->client,c->subdevice,*memory,0,params->size,cpu,
       cpu_map_flags & ~(1U << 14));
    if (st==NV_OK) return st;
fail: modelos_rm_free(c->stack,c->client,*memory); *memory=0; return st;
}

static NV_STATUS modelos_nv_channel(struct modelos_nv *c,NvU32 fifo_class,
    NvU32 compute_class,NV_CHANNELGPFIFO_ALLOCATION_PARAMETERS *fifo)
{
    NVA06C_CTRL_GPFIFO_SCHEDULE_PARAMS schedule = {0};
    NVC36F_CTRL_CMD_GPFIFO_GET_WORK_SUBMIT_TOKEN_PARAMS token = {0};
    NV_STATUS st;
    if (!is_power_of_2(fifo->gpFifoEntries) || !fifo->hUserdMemory[0])
        return NV_ERR_INVALID_ARGUMENT;
    fifo->hContextShare=c->ctxshare;
    st=alloc(c,c->group,&c->channel,fifo_class,fifo,sizeof(*fifo));
    if (st!=NV_OK) return st;
    st=alloc(c,c->channel,&c->compute,compute_class,NULL,0);
    if (st!=NV_OK) return st;
    schedule.bEnable=NV_TRUE;
    st=modelos_rm_control(c->stack,c->client,c->group,NVA06C_CTRL_CMD_GPFIFO_SCHEDULE,
                          &schedule,sizeof(schedule));
    if (st!=NV_OK) return st;
    st=modelos_rm_control(c->stack,c->client,c->channel,
          NVC36F_CTRL_CMD_GPFIFO_GET_WORK_SUBMIT_TOKEN,&token,sizeof(token));
    if (st==NV_OK) { c->token=token.workSubmitToken; c->compute_class=compute_class; }
    return st;
}

/* Restricted cubin extraction: accept one already-linked, named text section.
 * A load-time manifest supplies .nv.info resource counts and constant data.
 * Full cubin relocation/linking is NOT implemented by this sketch. */
static int modelos_nv_cubin_text(const void *blob,size_t n,const char *section,
                                 void *code,size_t capacity,size_t *written)
{
    const Elf64_Ehdr *eh=blob; const Elf64_Shdr *sh; const char *strings;
    unsigned int i;
    if (n<sizeof(*eh) || memcmp(eh->e_ident,ELFMAG,SELFMAG) ||
        eh->e_ident[EI_CLASS]!=ELFCLASS64 || eh->e_ident[EI_DATA]!=ELFDATA2LSB ||
        eh->e_machine!=190 || eh->e_shentsize!=sizeof(*sh) ||
        eh->e_shoff>n || eh->e_shnum>(n-eh->e_shoff)/sizeof(*sh) ||
        eh->e_shstrndx>=eh->e_shnum) return -EINVAL;
    sh=(const void *)((const char *)blob+eh->e_shoff);
    if (sh[eh->e_shstrndx].sh_offset>n || sh[eh->e_shstrndx].sh_size>
        n-sh[eh->e_shstrndx].sh_offset) return -EINVAL;
    strings=(const char *)blob+sh[eh->e_shstrndx].sh_offset;
    for (i=0;i<eh->e_shnum;i++) {
        if (sh[i].sh_type==SHT_REL || sh[i].sh_type==SHT_RELA) return -EOPNOTSUPP;
        if (sh[i].sh_name>=sh[eh->e_shstrndx].sh_size) return -EINVAL;
        if (!memchr(strings+sh[i].sh_name,0,sh[eh->e_shstrndx].sh_size-sh[i].sh_name)) return -EINVAL;
    }
    for (i=0;i<eh->e_shnum;i++) if (!strcmp(strings+sh[i].sh_name,section)) {
        if (!(sh[i].sh_flags&SHF_EXECINSTR) || sh[i].sh_offset>n ||
            sh[i].sh_size>n-sh[i].sh_offset || sh[i].sh_size>capacity) return -EINVAL;
        if (sh[i].sh_size>SIZE_MAX-8192 || round_up(sh[i].sh_size,4096)+4096>capacity) return -ENOSPC;
        memset(code,0,round_up(sh[i].sh_size,4096)+4096);
        memcpy(code,(const char *)blob+sh[i].sh_offset,sh[i].sh_size);
        *written=sh[i].sh_size; return 0;
    }
    return -ENOENT;
}

/* Bit positions from tinygrad nv_615.py, pinned in README. Blackwell QMD v5.
 * Template must include validated cache/resource/constant-buffer settings from
 * the load-time compiler manifest. Only addresses and launch dimensions vary. */
static void qmd_bits(NvU32 *q,unsigned hi,unsigned lo,NvU64 v)
{
    unsigned b;
    for (b=lo;b<=hi;b++) {
        NvU32 mask=1U<<(b%32);
        q[b/32]=(q[b/32]&~mask) | (((v>>(b-lo))&1) ? mask:0);
    }
}
static int modelos_nv_qmd5(NvU32 q[96],NvU64 program,NvU32 grid[3],NvU32 block[3],NvU64 completion_va,NvU32 expected)
{
    if ((program&15) || program>>57 || completion_va>>57 || (completion_va&3) || !grid[0] || !grid[1] || !grid[2] ||
        grid[1]>65535 || !block[0] || !block[1] || !block[2] ||
        block[0]>1024 || block[1]>1024 || block[2]>64 ||
        (NvU64)block[0]*block[1]*block[2]>1024) return -EINVAL;
    qmd_bits(q,288,288,1); /* release0 enable */
    qmd_bits(q,290,289,1); /* one-word semaphore */
    qmd_bits(q,291,291,1); /* FE_SYSMEMBAR */
    qmd_bits(q,511,480,(NvU32)completion_va); qmd_bits(q,536,512,completion_va>>32);
    qmd_bits(q,575,544,expected); qmd_bits(q,607,576,0);
    qmd_bits(q,471,468,5); qmd_bits(q,153,151,2);
    qmd_bits(q,1055,1024,(NvU32)(program>>4)); qmd_bits(q,1076,1056,program>>36);
    qmd_bits(q,1279,1248,grid[0]); qmd_bits(q,1295,1280,grid[1]); qmd_bits(q,1327,1312,grid[2]);
    qmd_bits(q,1103,1088,block[0]); qmd_bits(q,1119,1104,block[1]); qmd_bits(q,1127,1120,block[2]);
    return 0;
}

static int modelos_nv_launch(struct modelos_nv *c,NvU32 *push,NvU64 push_va,
    NvU64 qmd_va,NvU64 *ring,unsigned entries,unsigned *put,
    void __iomem *gpput,NvU32 *done,NvU32 expected,u64 timeout_ns)
{
    u64 deadline;
    /* Caller supplies a queue that is known drained, a 256-byte-aligned QMD,
     * and completion storage initialized to a different value. A separately
     * validated release-semaphore command/template must write expected. */
    if (!is_power_of_2(entries) || (qmd_va&255) || (push_va&3) ||
        qmd_va>>40 || push_va>>40 || !c->doorbell_cpu || READ_ONCE(*done)==expected) return -EINVAL;
    deadline=ktime_get_ns();
    if (!timeout_ns || timeout_ns>U64_MAX-deadline) return -EINVAL;
    deadline+=timeout_ns;
    push[0]=(2U<<28)|(1U<<16)|(1U<<13)|(NVC6C0_SET_OBJECT/4);
    push[1]=c->compute_class;
    push[2]=(2U<<28)|(1U<<16)|(1U<<13)|(NVC6C0_SEND_PCAS_A/4);
    push[3]=qmd_va>>8;
    push[4]=(2U<<28)|(1U<<16)|(1U<<13)|(NVC6C0_SEND_SIGNALING_PCAS2_B/4);
    push[5]=NVC6C0_SEND_SIGNALING_PCAS2_B_PCAS_ACTION_PREFETCH_SCHEDULE;
    ring[*put&(entries-1)]=cpu_to_le64(push_va|(6ULL<<42)|(1ULL<<41));
    wmb(); ++*put; writel(*put&(entries-1),gpput); wmb();
    writel(c->token,(void __iomem *)c->doorbell_cpu+NVC361_NOTIFY_CHANNEL_PENDING);
    while (READ_ONCE(*done)!=expected) {
        if (ktime_get_ns()>deadline) return -ETIMEDOUT;
        usleep_range(50,100);
    }
    dma_rmb(); return 0;
}

/* A real service will consume this interface. Escaping its address here keeps
 * the whole sketch in the link, so unresolved RM calls cannot be hidden by GC.
 * No function is executed and no GPU is accessed by this initcall. */
static const struct {
    typeof(nvidia_get_gpuid_list) *enumerate;
    typeof(modelos_nv_open) *open;
    typeof(modelos_nv_classes) *classes;
    typeof(modelos_nv_doorbell) *doorbell;
    typeof(modelos_nv_memory) *memory;
    typeof(modelos_nv_channel) *channel;
    typeof(modelos_nv_cubin_text) *cubin_text;
    typeof(modelos_nv_qmd5) *qmd5;
    typeof(modelos_nv_launch) *launch;
    typeof(modelos_nv_close) *close;
} modelos_nv_submission = {nvidia_get_gpuid_list,modelos_nv_open,modelos_nv_classes,modelos_nv_doorbell,modelos_nv_memory,modelos_nv_channel,
    modelos_nv_cubin_text,modelos_nv_qmd5,modelos_nv_launch,modelos_nv_close};
static int __init modelos_nv_submission_init(void)
{
    pr_info("MODELOS_SUBMISSION_SKETCH linked ops=%px; hardware validation pending\n",&modelos_nv_submission);
    return 0;
}
late_initcall(modelos_nv_submission_init);

