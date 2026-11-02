// SPDX-License-Identifier: MIT
/* GB202 replay device owner. This page lives until PCI removal, independently
 * of request/client lifetimes. DMA API returns the live device address. */
#include <linux/pci.h>
#include <linux/dma-mapping.h>
#include <linux/iommu.h>
#include <linux/mutex.h>
#include <linux/string.h>
static DEFINE_MUTEX(l2_flush_lock);
static struct pci_dev *flush_dev;
static void *flush_cpu;
static dma_addr_t flush_dma;
unsigned long long l2_flush_allocate(void);
void l2_flush_release(struct pci_dev *dev);
unsigned long long l2_flush_allocate(void)
{
 struct pci_dev *dev;void *cpu;dma_addr_t dma;phys_addr_t phys=0;bool valid;
 mutex_lock(&l2_flush_lock);
 if(flush_cpu)goto out;
 dev=pci_get_device(0x10de,0x2b85,NULL);
 if(!dev)goto out;
 cpu=dma_alloc_coherent(&dev->dev,PAGE_SIZE,&dma,GFP_KERNEL);
 if(!cpu){pci_dev_put(dev);goto out;}
 if(!dma){dma_free_coherent(&dev->dev,PAGE_SIZE,cpu,dma);pci_dev_put(dev);goto out;}
 memset(cpu,0,PAGE_SIZE);dma_wmb();
 flush_dev=dev;flush_cpu=cpu;flush_dma=dma;
 valid=virt_addr_valid(cpu);if(valid)phys=page_to_phys(virt_to_page(cpu));
 pr_info("L2_FLUSH_PAGE cpu=%px dma=%pad phys=%pa phys_valid=%u iommu=%u bytes=%lu all_zero=%u device_owned=1\n",cpu,&dma,&phys,valid,device_iommu_mapped(&dev->dev),PAGE_SIZE,!memchr_inv(cpu,0,PAGE_SIZE));
out:
 mutex_unlock(&l2_flush_lock);return flush_dma;
}
void l2_flush_release(struct pci_dev *dev)
{
 mutex_lock(&l2_flush_lock);
 if(flush_cpu&&flush_dev==dev){
  dma_free_coherent(&dev->dev,PAGE_SIZE,flush_cpu,flush_dma);
  pci_dev_put(flush_dev);flush_cpu=NULL;flush_dev=NULL;flush_dma=0;
  pr_info("L2_FLUSH_RELEASE live_pages=0\n");
 }
 mutex_unlock(&l2_flush_lock);
}
