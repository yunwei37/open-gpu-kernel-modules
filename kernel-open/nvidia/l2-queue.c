// SPDX-License-Identifier: MIT
/* L2 physical GB202: shared GSP queue RAM independent of RM memdescs.
 * DMA addresses are live device addresses. They are never copied from tape.
 * Prefix pages are a relocation experiment, not firmware-visible queue pages.
 */
#include <linux/pci.h>
#include <linux/dma-mapping.h>
#include <linux/iommu.h>
#include <linux/slab.h>
#include <linux/string.h>
#include <linux/sizes.h>

#define L2_QUEUE_PREFIX_PAGES 0
struct l2_queue_owner {
    struct pci_dev *dev;
    void *allocation;
    dma_addr_t allocation_dma;
    size_t allocation_bytes;
};
int l2_queue_allocate(unsigned long long bytes, unsigned long long entries,
                      void **cpu, unsigned long long *dma, void **owner);
void l2_queue_release(void *owner);
int l2_queue_publish(void *owner, unsigned long long table_bytes,
                      unsigned long long cmd_bytes, unsigned long long status_bytes);

int l2_queue_allocate(unsigned long long bytes, unsigned long long entries,
                      void **cpu, unsigned long long *dma, void **owner)
{
    struct l2_queue_owner *q;
    dma_addr_t queue_dma;
    void *queue_cpu;
    size_t prefix = L2_QUEUE_PREFIX_PAGES * PAGE_SIZE;
    unsigned int i;
    phys_addr_t phys = 0;
    bool valid;

    BUILD_BUG_ON(PAGE_SIZE != 4096);
    if (!cpu || !dma || !owner || !bytes || bytes > SZ_1M ||
        bytes % PAGE_SIZE || entries != bytes / PAGE_SIZE ||
        entries * sizeof(u64) > PAGE_SIZE)
        return -EINVAL;
    *cpu = NULL; *dma = 0; *owner = NULL;
    q = kzalloc(sizeof(*q), GFP_KERNEL);
    if (!q)
        return -ENOMEM;
    q->dev = pci_get_device(0x10de, 0x2b85, NULL);
    if (!q->dev)
        goto fail;
    q->allocation_bytes = bytes + prefix;
    q->allocation = dma_alloc_coherent(&q->dev->dev, q->allocation_bytes,
                                       &q->allocation_dma, GFP_KERNEL);
    if (!q->allocation)
        goto put_dev;
    queue_cpu = (char *)q->allocation + prefix;
    queue_dma = q->allocation_dma + prefix;
    if (!queue_dma || (queue_dma & (PAGE_SIZE - 1)))
        goto free_dma;
    memset(q->allocation, 0, q->allocation_bytes);
    dma_wmb();
    valid = virt_addr_valid(queue_cpu);
    if (valid)
        phys = page_to_phys(virt_to_page(queue_cpu));
    pr_info("L2_QUEUE_OWNER bytes=%llu entries=%llu prefix=%zu allocation_bytes=%zu cpu=%px dma=%pad phys=%pa phys_valid=%u iommu=%u all_zero=%u rm_memdesc=0\n",
            bytes, entries, prefix, q->allocation_bytes, queue_cpu, &queue_dma,
            &phys, valid, device_iommu_mapped(&q->dev->dev),
            !memchr_inv(queue_cpu, 0, bytes));
    /* Every page is in the same contiguous DMA allocation; log the complete
     * per-page relation without assuming DMA == guest CPU physical. */
    for (i = 0; i < entries; i++) {
        dma_addr_t page_dma = queue_dma + i * PAGE_SIZE;
        void *page_cpu = (char *)queue_cpu + i * PAGE_SIZE;
        phys_addr_t page_phys = 0;
        bool page_valid = virt_addr_valid(page_cpu);
        if (page_valid)
            page_phys = page_to_phys(virt_to_page(page_cpu));
        pr_info("L2_QUEUE_PAGE index=%u dma=%pad phys=%pa phys_valid=%u\n",
                i, &page_dma, &page_phys, page_valid);
    }
    *cpu = queue_cpu; *dma = queue_dma; *owner = q;
    return 0;
free_dma:
    dma_free_coherent(&q->dev->dev, q->allocation_bytes, q->allocation,
                       q->allocation_dma);
put_dev:
    pci_dev_put(q->dev);
fail:
    kfree(q);
    return -ENOMEM;
}

void l2_queue_release(void *owner)
{
    struct l2_queue_owner *q = owner;
    if (!q)
        return;
    dma_free_coherent(&q->dev->dev, q->allocation_bytes, q->allocation,
                       q->allocation_dma);
    pci_dev_put(q->dev);
    kfree(q);
    pr_info("L2_QUEUE_RELEASE live_allocations=0\n");
}

/* Validate the table actually written by the core, including self-mapping,
 * before exposing it to firmware. All other initial queue bytes must be zero.
 * FNV1a is a diagnostic byte checksum, not an integrity/security claim. */
int l2_queue_publish(void *owner, unsigned long long table_bytes,
                      unsigned long long cmd_bytes, unsigned long long status_bytes)
{
    struct l2_queue_owner *q = owner;
    size_t prefix = L2_QUEUE_PREFIX_PAGES * PAGE_SIZE;
    size_t bytes;
    u64 *pt;
    u64 hash = 14695981039346656037ULL;
    unsigned int i;
    dma_addr_t base;
    if (!q || table_bytes != PAGE_SIZE || cmd_bytes != SZ_256K ||
        status_bytes != SZ_256K)
        return -EINVAL;
    bytes = q->allocation_bytes - prefix;
    if (bytes != table_bytes + cmd_bytes + status_bytes)
        return -EINVAL;
    pt = (void *)((char *)q->allocation + prefix);
    base = q->allocation_dma + prefix;
    for (i = 0; i < bytes / PAGE_SIZE; i++)
        if (pt[i] != base + i * PAGE_SIZE)
            return -EINVAL;
    if (memchr_inv((char *)pt + bytes / PAGE_SIZE * sizeof(u64), 0,
                   bytes - bytes / PAGE_SIZE * sizeof(u64)))
        return -EINVAL;
    for (i = 0; i < table_bytes; i++) {
        hash ^= ((u8 *)pt)[i];
        hash *= 1099511628211ULL;
    }
    dma_wmb();
    pr_info("L2_QUEUE_PUBLISH table_bytes=%llu cmd_bytes=%llu status_bytes=%llu entries=%zu first=0x%llx last=0x%llx fnv1a=0x%llx table_ok=1 rest_zero=1\n",
            table_bytes, cmd_bytes, status_bytes, bytes / PAGE_SIZE,
            pt[0], pt[bytes / PAGE_SIZE - 1], hash);
    return 0;
}
