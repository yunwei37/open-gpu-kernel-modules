// SPDX-License-Identifier: MIT
/* Direct RM SM120 store test. Built in; no file/ioctl/UVM/libcuda transport. */
#include "nv-linux.h"
#include "nv-proto.h"
#include "nvos.h"
#include "class/cl0000.h"
#include "class/cl0080.h"
#include "class/cl2080.h"
#include "class/cl0070.h"
#include "class/cl90f1.h"
#include "class/cla06c.h"
#include "class/cl9067.h"
#include "class/clc56f.h"
#include "class/clc661.h"
#include "class/clc361.h"
#include "class/clc6c0.h"
#include "alloc/alloc_channel.h"
#include "ctrl/ctrla06c.h"
#include "ctrl/ctrlc36f.h"
#include "ctrl/ctrl0000/ctrl0000gpu.h"
#include "ctrl/ctrl0080/ctrl0080gpu.h"
#include "ctrl/ctrl2080/ctrl2080gr.h"
#include <linux/elf.h>
#include <linux/unaligned.h>
#include <linux/io.h>
#include <linux/ktime.h>
#include <linux/delay.h>
#include <linux/mutex.h>
#include <linux/device/driver.h>
#include "modelos-submit.h"
#include "modelos-qmd5.h"
#include "nvidia/modelos-test-cubin.h"

extern NV_STATUS modelos_rm_alloc(nvidia_stack_t *, NvHandle, NvHandle, NvHandle *, NvU32, void *, NvU32);
extern NV_STATUS modelos_rm_control(nvidia_stack_t *, NvHandle, NvHandle, NvU32, void *, NvU32);
extern NV_STATUS modelos_rm_free(nvidia_stack_t *, NvHandle, NvHandle);
extern NV_STATUS modelos_rm_map_cpu(nvidia_stack_t *, NvHandle, NvHandle, NvHandle, NvU64, NvU64, void **, NvU32);
extern NV_STATUS modelos_rm_map_dma(nvidia_stack_t *, NVOS46_PARAMETERS *);
extern NV_STATUS modelos_rm_unmap_cpu(nvidia_stack_t *, NvHandle, NvHandle, NvHandle, void *);
extern NV_STATUS modelos_rm_unmap_dma(nvidia_stack_t *, NVOS47_PARAMETERS *);

/* Public class IDs from NVIDIA open-gpu-doc (see modelos-qmd5.h provenance). */
#define MODELOS_MEMORY_SYSTEM 0x3eU /* NV01_MEMORY_SYSTEM, generated g_allclasses.h */
#define MODELOS_BLACKWELL_GPFIFO 0xc96fU
#define MODELOS_BLACKWELL_COMPUTE_B 0xcfc0U
#define ARENA_VA 0x40000000ULL
#define ARENA_SIZE 0x10000U
#define FIFO_ENTRIES 1024U
#define USERD_OFF 0x2000U
#define PUSH_OFF 0x4000U
#define QMD_OFF 0x5000U
#define CBUF_OFF 0x6000U
#define OUTPUT_OFF 0x7000U
#define DONE_OFF 0x7100U
#define CODE_OFF 0x8000U
#define TEST_VALUE 0x4d4f534bU
#define TEST_SENTINEL 0xdeadbeefU
#define SHARED_WINDOW 0x729400000000ULL
#define LOCAL_WINDOW 0x729300000000ULL

struct modelos_mem {
    NvHandle handle;
    void *cpu;
    NvU64 va, size;
    bool gpu_mapped;
};
struct modelos_nv {
    nvidia_stack_t *stack;
    NvU32 gpu_id, subindex, token, put;
    bool adapter_held, in_flight;
    NvHandle client, device, subdevice, vaspace, virtual_memory;
    NvHandle group, ctxshare, channel, compute, usermode;
    void *doorbell;
    struct modelos_mem arena, error;
};
struct modelos_program {
    const void *text, *constant;
    size_t text_size, constant_size;
    NvU32 registers, param_base;
};
static DEFINE_MUTEX(test_lock);
static struct modelos_nv *quarantined;
static bool boot_test;
static unsigned int boot_gpu;

static int rm_status(const char *stage, NV_STATUS status)
{
    if (status == NV_OK)
        return 0;
    pr_err("MODELOS_NVTEST RM_FAIL stage=%s status=0x%x\n", stage, status);
    return -EIO;
}
#define RM_TRY(stage, expr) do { ret = rm_status(stage, (expr)); if (ret) goto fail; } while (0)

static NV_STATUS alloc(struct modelos_nv *c, NvHandle parent, NvHandle *out,
                       NvU32 cls, void *params, NvU32 bytes)
{
    return modelos_rm_alloc(c->stack, c->client, parent, out, cls, params, bytes);
}

static int open_gpu(struct modelos_nv *c, NvU32 gpu_id)
{
    NV0000_CTRL_GPU_GET_ID_INFO_V2_PARAMS info = {0};
    NV0080_ALLOC_PARAMETERS dev = {0};
    NV2080_ALLOC_PARAMETERS sub = {0};
    NV_VASPACE_ALLOCATION_PARAMETERS va = {0};
    NV_MEMORY_VIRTUAL_ALLOCATION_PARAMS vm = {0};
    NV_CHANNEL_GROUP_ALLOCATION_PARAMETERS group = {0};
    NV_CTXSHARE_ALLOCATION_PARAMETERS share = {0};
    int ret;

    if (nv_kmem_cache_alloc_stack(&c->stack))
        return -ENOMEM;
    ret = nvidia_dev_get(gpu_id, c->stack, NV_FALSE);
    if (ret) {
        pr_err("MODELOS_NVTEST adapter_get gpu=0x%x errno=%d\n", gpu_id, ret);
        return ret;
    }
    c->adapter_held = true;
    c->gpu_id = gpu_id;
    RM_TRY("client", alloc(c, 0, &c->client, NV01_ROOT, &c->client, sizeof(c->client)));
    info.gpuId = gpu_id;
    RM_TRY("gpu-id", modelos_rm_control(c->stack, c->client, c->client,
        NV0000_CTRL_CMD_GPU_GET_ID_INFO_V2, &info, sizeof(info)));
    if (info.subDeviceInstance >= NV_MAX_SUBDEVICES)
        return -ERANGE;
    c->subindex = info.subDeviceInstance;
    dev.deviceId = info.deviceInstance;
    dev.hClientShare = c->client;
    dev.vaMode = NV_DEVICE_ALLOCATION_VAMODE_OPTIONAL_MULTIPLE_VASPACES;
    sub.subDeviceId = info.subDeviceInstance;
    RM_TRY("device", alloc(c, c->client, &c->device, NV01_DEVICE_0, &dev, sizeof(dev)));
    RM_TRY("subdevice", alloc(c, c->device, &c->subdevice, NV20_SUBDEVICE_0, &sub, sizeof(sub)));
    /* RM-owned, fully mapped VA; no ATS/external UVM ownership/page faults. */
    va.vaBase = 0x1000;
    va.vaSize = (1ULL << 47) - 0x1000;
    RM_TRY("vaspace", alloc(c, c->device, &c->vaspace, FERMI_VASPACE_A, &va, sizeof(va)));
    vm.hVASpace = c->vaspace;
    vm.offset = va.vaBase;
    vm.limit = (1ULL << 47) - 1;
    RM_TRY("virtual-memory", alloc(c, c->device, &c->virtual_memory, NV01_MEMORY_VIRTUAL, &vm, sizeof(vm)));
    group.hVASpace = c->vaspace;
    group.engineType = 0; /* NV2080_ENGINE_TYPE_GRAPHICS */
    RM_TRY("channel-group", alloc(c, c->device, &c->group, KEPLER_CHANNEL_GROUP_A, &group, sizeof(group)));
    share.hVASpace = c->vaspace;
    share.flags = NV_CTXSHARE_ALLOCATION_FLAGS_SUBCONTEXT_ASYNC;
    RM_TRY("context-share", alloc(c, c->group, &c->ctxshare, FERMI_CONTEXT_SHARE_A, &share, sizeof(share)));
    return 0;
fail:
    return ret;
}

static int require_blackwell(struct modelos_nv *c, NvU32 *sass_version)
{
    NV0080_CTRL_GPU_GET_CLASSLIST_PARAMS list = {0};
    NV2080_CTRL_GR_INFO gr = { .index = NV2080_CTRL_GR_INFO_INDEX_SM_VERSION };
    NV2080_CTRL_GR_GET_INFO_PARAMS info = { .grInfoListSize = 1, .grInfoList = NV_PTR_TO_NvP64(&gr) };
    NvU32 *classes = NULL, n, found = 0;
    int ret;

    RM_TRY("class-count", modelos_rm_control(c->stack, c->client, c->device,
        NV0080_CTRL_CMD_GPU_GET_CLASSLIST, &list, sizeof(list)));
    if (!list.numClasses || list.numClasses > 4096)
        return -ERANGE;
    classes = kcalloc(list.numClasses, sizeof(*classes), GFP_KERNEL);
    if (!classes)
        return -ENOMEM;
    n = list.numClasses;
    list.classList = NV_PTR_TO_NvP64(classes);
    RM_TRY("classes", modelos_rm_control(c->stack, c->client, c->device,
        NV0080_CTRL_CMD_GPU_GET_CLASSLIST, &list, sizeof(list)));
    if (list.numClasses > n) { ret = -ERANGE; goto fail; }
    for (n = 0; n < list.numClasses; n++) {
        if (classes[n] == MODELOS_BLACKWELL_GPFIFO) found |= 1;
        if (classes[n] == MODELOS_BLACKWELL_COMPUTE_B) found |= 2;
        if (classes[n] == HOPPER_USERMODE_A) found |= 4;
    }
    if (found != 7) { ret = -EOPNOTSUPP; goto fail; }
    RM_TRY("sm-version", modelos_rm_control(c->stack, c->client, c->subdevice,
        NV2080_CTRL_CMD_GR_GET_INFO, &info, sizeof(info)));
    pr_info("MODELOS_NVTEST gpu=0x%x sm_version=0x%x classes=c96f,cfc0,c661\n", c->gpu_id, gr.data);
    /* RM's internal 10.4 SASS target is CUDA sm_120, as in the NV reference. */
    if (gr.data != 0xa04) { ret = -EOPNOTSUPP; goto fail; }
    *sass_version = ((gr.data & 0xf00) >> 4) | (gr.data & 0xf);
    ret = 0;
fail:
    kfree(classes);
    return ret;
}

static int memory_create(struct modelos_nv *c, struct modelos_mem *m, NvU64 va, NvU64 bytes)
{
    NV_MEMORY_ALLOCATION_PARAMS p = {0};
    NVOS46_PARAMETERS map = {0};
    int ret;

    m->va = va; m->size = bytes;
    p.owner = c->client; p.alignment = 4096; p.limit = bytes - 1; p.size = bytes;
    p.format = 6; p.type = NVOS32_TYPE_NOTIFIER;
    p.attr = DRF_DEF(OS32, _ATTR, _LOCATION, _PCI) |
             DRF_DEF(OS32, _ATTR, _PHYSICALITY, _ALLOW_NONCONTIGUOUS) |
             DRF_DEF(OS32, _ATTR, _COHERENCY, _CACHED);
    p.attr2 = DRF_DEF(OS32, _ATTR2, _GPU_CACHEABLE, _NO) | NVOS32_ATTR2_ZBC_PREFER_NO_ZBC;
    p.flags = NVOS32_ALLOC_FLAGS_MAP_NOT_REQUIRED | NVOS32_ALLOC_FLAGS_MEMORY_HANDLE_PROVIDED |
              NVOS32_ALLOC_FLAGS_ALIGNMENT_FORCE | NVOS32_ALLOC_FLAGS_IGNORE_BANK_PLACEMENT;
    RM_TRY("system-memory", alloc(c, c->device, &m->handle, MODELOS_MEMORY_SYSTEM, &p, sizeof(p)));
    map.hClient = c->client; map.hDevice = c->device;
    map.hDma = c->virtual_memory; map.hMemory = m->handle;
    map.length = bytes; map.dmaOffset = va;
    map.flags = DRF_DEF(OS46, _FLAGS, _PAGE_SIZE, _4KB) |
                DRF_DEF(OS46, _FLAGS, _CACHE_SNOOP, _ENABLE) |
                DRF_DEF(OS46, _FLAGS, _DMA_OFFSET_FIXED, _TRUE);
    RM_TRY("map-gpu", modelos_rm_map_dma(c->stack, &map));
    m->gpu_mapped = true;
    m->va = map.dmaOffset;
    if (map.dmaOffset != va) return -ERANGE;
    RM_TRY("map-kernel", modelos_rm_map_cpu(c->stack, c->client, c->subdevice,
        m->handle, 0, bytes, &m->cpu, DRF_DEF(OS33, _FLAGS, _CACHING_TYPE, _CACHED)));
    if (!m->cpu) return -EFAULT;
    memset(m->cpu, 0, bytes);
    return 0;
fail:
    return ret;
}

static int make_channel(struct modelos_nv *c)
{
    NV_CHANNELGPFIFO_ALLOCATION_PARAMETERS fifo = {0};
    NVA06C_CTRL_GPFIFO_SCHEDULE_PARAMS schedule = { .bEnable = NV_TRUE };
    NVC36F_CTRL_CMD_GPFIFO_GET_WORK_SUBMIT_TOKEN_PARAMS token = { .workSubmitToken = U32_MAX };
    int ret;

    RM_TRY("usermode", alloc(c, c->subdevice, &c->usermode, HOPPER_USERMODE_A, NULL, 0));
    RM_TRY("doorbell-map", modelos_rm_map_cpu(c->stack, c->client, c->subdevice,
        c->usermode, 0, 0x10000, &c->doorbell, NVOS33_FLAGS_ACCESS_WRITE_ONLY));
    if (!c->doorbell) return -EFAULT;
    fifo.hObjectError = c->error.handle;
    fifo.hObjectBuffer = c->arena.handle;
    fifo.gpFifoOffset = c->arena.va;
    fifo.gpFifoEntries = FIFO_ENTRIES;
    fifo.hContextShare = c->ctxshare;
    fifo.hUserdMemory[c->subindex] = c->arena.handle;
    fifo.userdOffset[c->subindex] = USERD_OFF;
    fifo.engineType = 0;
    /* hVASpace=0 inherits the explicitly RM-owned TSG VA, no UVM registration. */
    RM_TRY("gpfifo", alloc(c, c->group, &c->channel, MODELOS_BLACKWELL_GPFIFO, &fifo, sizeof(fifo)));
    RM_TRY("compute", alloc(c, c->channel, &c->compute, MODELOS_BLACKWELL_COMPUTE_B, NULL, 0));
    RM_TRY("schedule", modelos_rm_control(c->stack, c->client, c->group,
        NVA06C_CTRL_CMD_GPFIFO_SCHEDULE, &schedule, sizeof(schedule)));
    RM_TRY("work-token", modelos_rm_control(c->stack, c->client, c->channel,
        NVC36F_CTRL_CMD_GPFIFO_GET_WORK_SUBMIT_TOKEN, &token, sizeof(token)));
    c->token = token.workSubmitToken;
    return 0;
fail:
    return ret;
}

static int memory_destroy(struct modelos_nv *c, struct modelos_mem *m)
{
    NVOS47_PARAMETERS unmap = {0};
    int ret;

    if (m->cpu) {
        RM_TRY("unmap-kernel", modelos_rm_unmap_cpu(c->stack, c->client, c->subdevice, m->handle, m->cpu));
        m->cpu = NULL;
    }
    if (m->gpu_mapped) {
        unmap.hClient = c->client; unmap.hDevice = c->device;
        unmap.hDma = c->virtual_memory; unmap.hMemory = m->handle;
        unmap.dmaOffset = m->va; unmap.size = m->size;
        RM_TRY("unmap-gpu", modelos_rm_unmap_dma(c->stack, &unmap));
        m->gpu_mapped = false;
    }
    if (m->handle) {
        RM_TRY("free-memory", modelos_rm_free(c->stack, c->client, m->handle));
        m->handle = 0;
    }
    return 0;
fail:
    return ret;
}

static int close_gpu(struct modelos_nv *c)
{
    NVA06C_CTRL_GPFIFO_SCHEDULE_PARAMS schedule = { .bEnable = NV_FALSE };
    int ret;

    if (c->in_flight) return -EBUSY;
    if (c->channel) {
        RM_TRY("stop-group", modelos_rm_control(c->stack, c->client, c->group,
            NVA06C_CTRL_CMD_GPFIFO_SCHEDULE, &schedule, sizeof(schedule)));
        RM_TRY("free-channel", modelos_rm_free(c->stack, c->client, c->channel));
        c->channel = 0;
    }
    ret = memory_destroy(c, &c->error); if (ret) return ret;
    ret = memory_destroy(c, &c->arena); if (ret) return ret;
    if (c->doorbell) {
        RM_TRY("unmap-doorbell", modelos_rm_unmap_cpu(c->stack, c->client, c->subdevice, c->usermode, c->doorbell));
        c->doorbell = NULL;
    }
    if (c->client) {
        RM_TRY("free-client", modelos_rm_free(c->stack, c->client, c->client));
        c->client = 0;
    }
    if (c->adapter_held) nvidia_dev_put(c->gpu_id, c->stack, NV_FALSE);
    if (c->stack) nv_kmem_cache_free_stack(c->stack);
    return 0;
fail:
    return ret;
}

/* Restricted cubin loader: no runtime relocations, stack, or extra constants.
 * Nonallocated debug relocations are ignored; ptxas emits them in real cubins.
 */
static int cubin_program(const void *blob, size_t bytes, struct modelos_program *p)
{
    const Elf64_Ehdr *e = blob;
    const Elf64_Shdr *s;
    const char *strings;
    size_t string_bytes;
    unsigned i;
    bool have_regs = false, have_param = false, have_stack = false;

    memset(p, 0, sizeof(*p));
    if (bytes < sizeof(*e) || memcmp(e->e_ident, ELFMAG, SELFMAG) ||
        e->e_ident[EI_CLASS] != ELFCLASS64 || e->e_ident[EI_DATA] != ELFDATA2LSB ||
        e->e_machine != 190 || ((e->e_flags >> 8) & 255) != 120 ||
        e->e_shentsize != sizeof(*s) || (e->e_shoff & 7) || e->e_shoff > bytes ||
        e->e_shnum > (bytes - e->e_shoff) / sizeof(*s) || e->e_shstrndx >= e->e_shnum)
        return -EINVAL;
    s = blob + e->e_shoff;
    if (s[e->e_shstrndx].sh_offset > bytes || s[e->e_shstrndx].sh_size > bytes-s[e->e_shstrndx].sh_offset)
        return -EINVAL;
    strings = blob + s[e->e_shstrndx].sh_offset;
    string_bytes = s[e->e_shstrndx].sh_size;
    for (i = 0; i < e->e_shnum; i++) {
        const char *name;
        const u8 *data;
        size_t pos = 0, n = s[i].sh_size;
        if (s[i].sh_name >= string_bytes || !memchr(strings+s[i].sh_name, 0, string_bytes-s[i].sh_name)) return -EINVAL;
        name = strings+s[i].sh_name;
        if (s[i].sh_type != SHT_NOBITS && (s[i].sh_offset > bytes || n > bytes-s[i].sh_offset)) return -EINVAL;
        if (s[i].sh_type == SHT_REL || s[i].sh_type == SHT_RELA) {
            if (s[i].sh_info >= e->e_shnum || (s[s[i].sh_info].sh_flags & SHF_ALLOC)) return -EOPNOTSUPP;
        }
        if (!strcmp(name, ".text.modelos_store")) {
            if (s[i].sh_type != SHT_PROGBITS || !(s[i].sh_flags & SHF_EXECINSTR)) return -EINVAL;
            p->text = blob+s[i].sh_offset; p->text_size = n;
        } else if (!strcmp(name, ".nv.constant0.modelos_store")) {
            if (s[i].sh_type != SHT_PROGBITS) return -EINVAL;
            p->constant = blob+s[i].sh_offset; p->constant_size = n;
        } else if (!strncmp(name, ".nv.constant", 12) ||
                   (!strncmp(name, ".nv.local", 9) && n) ||
                   (!strncmp(name, ".nv.shared.", 11) && n &&
                    (strcmp(name, ".nv.shared.reserved.0") || n > 0x400))) {
            return -EOPNOTSUPP;
        }
        if (strcmp(name, ".nv.info") && strcmp(name, ".nv.info.modelos_store")) continue;
        if (s[i].sh_type == SHT_NOBITS) return -EINVAL;
        data = blob+s[i].sh_offset;
        while (pos < n) {
            u16 length;
            u8 format, attr;
            const u8 *v;
            if (n-pos < 4) return -EINVAL;
            format = data[pos]; attr = data[pos+1];
            length = get_unaligned_le16(data+pos+2);
            if (format != 4) length = 0;
            if (length > n-pos-4) return -EINVAL;
            v = data+pos+4;
            if (!strcmp(name, ".nv.info") && attr == 0x2f && length == 8) {
                p->registers = get_unaligned_le32(v+4); have_regs = true;
            } else if (!strcmp(name, ".nv.info") && attr == 0x11 && length == 8) {
                if (get_unaligned_le32(v+4)) return -EOPNOTSUPP;
            } else if (!strcmp(name, ".nv.info") && attr == 0x12 && length == 8) {
                if (get_unaligned_le32(v+4)) return -EOPNOTSUPP;
                have_stack = true;
            } else if (!strcmp(name, ".nv.info.modelos_store") && attr == 0x0a && length == 8) {
                p->param_base = get_unaligned_le16(v+4);
                if (get_unaligned_le16(v+6) != sizeof(u64)) return -EOPNOTSUPP;
                have_param = true;
            }
            pos += 4+length;
        }
    }
    if (!have_regs || !have_param || !have_stack || !p->text || !p->constant ||
        !p->text_size || p->text_size > 0x6000 || p->constant_size > 0x1000 ||
        p->param_base != 0x380 || p->param_base+sizeof(u64) > p->constant_size ||
        !p->registers || p->registers > 32)
        return -EINVAL;
    return 0;
}

static void qmd_bits(u32 *q, unsigned hi, unsigned lo, u64 value)
{
    unsigned b;
    for (b = lo; b <= hi; b++) {
        u32 bit = 1U << (b % 32);
        q[b/32] = (q[b/32] & ~bit) | (((value >> (b-lo)) & 1) ? bit : 0);
    }
}
#define QSET(q, field, value) qmd_bits(q, MQ_##field##_HI, MQ_##field##_LO, value)

static void build_qmd(u32 *q, const struct modelos_program *p, u32 sass, u32 sequence)
{
    u64 code = ARENA_VA+CODE_OFF, constant = ARENA_VA+CBUF_OFF, done = ARENA_VA+DONE_OFF;
    memset(q, 0, 96*sizeof(*q));
    QSET(q, QMD_MAJOR_VERSION, 5); QSET(q, QMD_TYPE, 2); QSET(q, QMD_GROUP_ID, 0x3f);
    QSET(q, REGISTER_COUNT, p->registers); QSET(q, SASS_VERSION, sass);
    QSET(q, SHARED_MEMORY_SIZE_SHIFTED7, 0x400 >> 7);
    QSET(q, INVALIDATE_TEXTURE_HEADER_CACHE, 1); QSET(q, INVALIDATE_TEXTURE_SAMPLER_CACHE, 1);
    QSET(q, INVALIDATE_TEXTURE_DATA_CACHE, 1); QSET(q, INVALIDATE_SHADER_DATA_CACHE, 1);
    QSET(q, INVALIDATE_INSTRUCTION_CACHE, 1); QSET(q, API_VISIBLE_CALL_LIMIT, 1);
    QSET(q, SAMPLER_INDEX, 1); QSET(q, BARRIER_COUNT, 1); QSET(q, CWD_MEMBAR_TYPE, 1);
    QSET(q, CONSTANT_BUFFER_INVALIDATE_0, 1);
    QSET(q, MIN_SM_CONFIG_SHARED_MEM_SIZE, 9); QSET(q, TARGET_SM_CONFIG_SHARED_MEM_SIZE, 9);
    QSET(q, MAX_SM_CONFIG_SHARED_MEM_SIZE, 0x1a);
    QSET(q, PROGRAM_ADDRESS_LOWER_SHIFTED4, (u32)(code >> 4));
    QSET(q, PROGRAM_ADDRESS_UPPER_SHIFTED4, code >> 36);
    QSET(q, PROGRAM_PREFETCH_ADDR_LOWER_SHIFTED, (u32)(code >> 8));
    QSET(q, PROGRAM_PREFETCH_ADDR_UPPER_SHIFTED, code >> 40);
    QSET(q, PROGRAM_PREFETCH_SIZE, min_t(size_t, p->text_size >> 8, 0x1ff));
    QSET(q, CONSTANT_BUFFER_ADDR_LOWER_SHIFTED6_0, (u32)(constant >> 6));
    QSET(q, CONSTANT_BUFFER_ADDR_UPPER_SHIFTED6_0, constant >> 38);
    QSET(q, CONSTANT_BUFFER_SIZE_SHIFTED4_0, ALIGN(p->constant_size, 16) >> 4);
    QSET(q, CONSTANT_BUFFER_VALID_0, 1);
    QSET(q, GRID_WIDTH, 1); QSET(q, GRID_HEIGHT, 1); QSET(q, GRID_DEPTH, 1);
    QSET(q, CTA_THREAD_DIMENSION0, 1); QSET(q, CTA_THREAD_DIMENSION1, 1); QSET(q, CTA_THREAD_DIMENSION2, 1);
    QSET(q, RELEASE_ENABLE_0, 1); QSET(q, RELEASE_STRUCTURE_SIZE_0, 1);
    QSET(q, RELEASE_MEMBAR_TYPE_0, 1);
    QSET(q, RELEASE_SEMAPHORE0_ADDR_LOWER, (u32)done); QSET(q, RELEASE_SEMAPHORE0_ADDR_UPPER, done >> 32);
    QSET(q, RELEASE_SEMAPHORE0_PAYLOAD_LOWER, sequence);
}

static u32 method(unsigned offset, unsigned words)
{
    return (2U << 28) | (words << 16) | (1U << 13) | (offset >> 2);
}

static int launch(struct modelos_nv *c, const struct modelos_program *p, u32 sass, u32 sequence)
{
    u32 *push = c->arena.cpu+PUSH_OFF, *qmd = c->arena.cpu+QMD_OFF;
    u32 *put = c->arena.cpu+USERD_OFF+offsetof(AmpereAControlGPFifo, GPPut);
    u32 *get = c->arena.cpu+USERD_OFF+offsetof(AmpereAControlGPFifo, GPGet);
    u32 *done = c->arena.cpu+DONE_OFF, *output = c->arena.cpu+OUTPUT_OFF;
    __le64 *ring = c->arena.cpu;
    u64 deadline = ktime_get_ns()+2*NSEC_PER_SEC;
    unsigned n = 0;

    WRITE_ONCE(*output, TEST_SENTINEL);
    build_qmd(qmd, p, sass, sequence);
    push[n++] = method(NVC6C0_SET_OBJECT, 1); push[n++] = MODELOS_BLACKWELL_COMPUTE_B;
    push[n++] = method(NVC6C0_SET_SHADER_LOCAL_MEMORY_WINDOW_A, 2);
    push[n++] = upper_32_bits(LOCAL_WINDOW); push[n++] = lower_32_bits(LOCAL_WINDOW);
    push[n++] = method(NVC6C0_SET_SHADER_SHARED_MEMORY_WINDOW_A, 2);
    push[n++] = upper_32_bits(SHARED_WINDOW); push[n++] = lower_32_bits(SHARED_WINDOW);
    push[n++] = method(NVC6C0_SEND_PCAS_A, 1); push[n++] = (ARENA_VA+QMD_OFF) >> 8;
    push[n++] = method(NVC6C0_SEND_SIGNALING_PCAS2_B, 1);
    push[n++] = NVC6C0_SEND_SIGNALING_PCAS2_B_PCAS_ACTION_PREFETCH_SCHEDULE;
    ring[c->put & (FIFO_ENTRIES-1)] = cpu_to_le64((ARENA_VA+PUSH_OFF) | ((u64)n << 42) | (1ULL << 41));
    c->in_flight = true;
    dma_wmb();
    ++c->put;
    WRITE_ONCE(*put, c->put & (FIFO_ENTRIES-1));
    wmb();
    writel(c->token, (void __iomem *)c->doorbell+NVC361_NOTIFY_CHANNEL_PENDING);
    while (READ_ONCE(*done) != sequence || READ_ONCE(*get) != (c->put & (FIFO_ENTRIES-1))) {
        if (ktime_get_ns() > deadline) {
            u32 *err = c->error.cpu;
            pr_err("MODELOS_NVTEST TIMEOUT sequence=%u put=%u get=%u done=%u notifier=%08x:%08x:%08x:%08x\n",
                sequence, READ_ONCE(*put), READ_ONCE(*get), READ_ONCE(*done), err[0], err[1], err[2], err[3]);
            return -ETIMEDOUT;
        }
        usleep_range(50, 100);
    }
    dma_rmb();
    c->in_flight = false;
    if (READ_ONCE(*output) != TEST_VALUE) {
        pr_err("MODELOS_NVTEST BAD_OUTPUT sequence=%u output=0x%x\n", sequence, READ_ONCE(*output));
        return -EBADMSG;
    }
    return 0;
}

int modelos_nv_test_run(unsigned int gpu_index)
{
    struct modelos_program program, rejected;
    struct modelos_nv *c = NULL;
    NvU32 *ids = NULL, count = 0, sass = 0, sequence;
    int ret, cleanup = 0;
    u32 *cb;
    unsigned short cs;

    mutex_lock(&test_lock);
    if (quarantined) { ret = -EBUSY; goto out; }
    ret = cubin_program(modelos_store_cubin, sizeof(modelos_store_cubin), &program);
    if (ret) goto out;
    if (!cubin_program(modelos_store_cubin, sizeof(Elf64_Ehdr)-1, &rejected)) { ret = -EINVAL; goto out; }
    pr_info("MODELOS_NVTEST fixture PASS arch=sm_120 code=%zu regs=%u param_base=0x%x constant=%zu\n",
        program.text_size, program.registers, program.param_base, program.constant_size);
    wait_for_device_probe();
    if (!nvidia_get_gpuid_list(NULL, &count) || gpu_index >= count) {
        pr_info("MODELOS_NVTEST SKIP no selected GPU index=%u count=%u\n", gpu_index, count);
        ret = -ENODEV; goto out;
    }
    ids = kcalloc(count, sizeof(*ids), GFP_KERNEL);
    c = kzalloc(sizeof(*c), GFP_KERNEL);
    if (!ids || !c) { ret = -ENOMEM; goto cleanup; }
    if (!nvidia_get_gpuid_list(ids, &count) || gpu_index >= count) { ret = -ENODEV; goto cleanup; }
    ret = open_gpu(c, ids[gpu_index]); if (ret) goto cleanup;
    ret = require_blackwell(c, &sass); if (ret) goto cleanup;
    ret = memory_create(c, &c->arena, ARENA_VA, ARENA_SIZE); if (ret) goto cleanup;
    ret = memory_create(c, &c->error, ARENA_VA+ARENA_SIZE, 4096); if (ret) goto cleanup;
    memcpy(c->arena.cpu+CODE_OFF, program.text, program.text_size);
    memcpy(c->arena.cpu+CBUF_OFF, program.constant, program.constant_size);
    cb = c->arena.cpu+CBUF_OFF;
    cb[188] = lower_32_bits(SHARED_WINDOW); cb[189] = upper_32_bits(SHARED_WINDOW);
    cb[190] = lower_32_bits(LOCAL_WINDOW); cb[191] = upper_32_bits(LOCAL_WINDOW);
    cb[223] = 0xfffdc0;
    put_unaligned_le64(ARENA_VA+OUTPUT_OFF, c->arena.cpu+CBUF_OFF+program.param_base);
    ret = make_channel(c); if (ret) goto cleanup;
    pr_info("MODELOS_NVTEST submit arena=0x%llx entries=%u launches=%u\n", ARENA_VA, FIFO_ENTRIES, FIFO_ENTRIES+1);
    for (sequence = 1; sequence <= FIFO_ENTRIES+1; sequence++) {
        ret = launch(c, &program, sass, sequence);
        if (ret) goto cleanup;
    }
cleanup:
    if (c) {
        cleanup = close_gpu(c);
        if (cleanup) {
            quarantined = c;
            pr_err("MODELOS_NVTEST QUARANTINED errno=%d in_flight=%u; retain DMA memory/client until owning guest reset\n",
                cleanup, c->in_flight);
            c = NULL;
        }
    }
    if (!ret && !cleanup) {
        asm volatile("mov %%cs,%0" : "=r"(cs));
        pr_info("MODELOS_NVTEST PASS launches=%u wraps=1 output=0x%x completion=%u cleanup=ok cpl=%u mm=%s\n",
            FIFO_ENTRIES+1, TEST_VALUE, FIFO_ENTRIES+1, cs & 3, current->mm ? "present" : "none");
    }
    kfree(c); kfree(ids);
    if (!ret) ret = cleanup;
out:
    if (ret && ret != -ENODEV) pr_err("MODELOS_NVTEST FAIL errno=%d\n", ret);
    mutex_unlock(&test_lock);
    return ret;
}

static int __init test_param(char *s) { return kstrtobool(s, &boot_test); }
static int __init gpu_param(char *s) { return kstrtouint(s, 0, &boot_gpu); }
early_param("modelos.nv_test", test_param);
early_param("modelos.nv_gpu", gpu_param);
static int __init modelos_nv_submission_init(void)
{
    if (!boot_test) {
        pr_info("MODELOS_NVTEST disabled; enable with modelos.nv_test=1\n");
        return 0;
    }
    return modelos_nv_test_run(boot_gpu);
}
late_initcall(modelos_nv_submission_init);
