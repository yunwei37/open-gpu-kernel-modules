// SPDX-License-Identifier: MIT
/* Stock guest recorder only. A bounded append-only buffer, never a fake replay. */
#include <linux/proc_fs.h>
#include <linux/slab.h>
#include <linux/vmalloc.h>
#include <linux/spinlock.h>
#include <linux/uaccess.h>
#include <linux/ktime.h>
#define CAPACITY (1024UL << 20)
static void *tape;
static size_t used;
static u64 serial, dropped;
static bool frozen;
static DEFINE_SPINLOCK(tape_lock);
struct record { u64 serial, time, address; u32 type, length; };
void l2_record(unsigned type, unsigned long long address, const void *data, unsigned length)
{
 unsigned long flags;
 struct record h;
 if (!tape || READ_ONCE(frozen)) return;
 spin_lock_irqsave(&tape_lock,flags);
 if (length > CAPACITY-sizeof(h) || used > CAPACITY-sizeof(h)-length) { dropped++; goto out; }
 h=(struct record){++serial,ktime_get_ns(),address,type,length};
 memcpy(tape+used,&h,sizeof(h));
 if(length) memcpy(tape+used+sizeof(h),data,length);
 smp_store_release(&used,used+sizeof(h)+length);
out:
 spin_unlock_irqrestore(&tape_lock,flags);
}
static ssize_t read_tape(struct file *f,char __user *p,size_t n,loff_t *pos)
{ return simple_read_from_buffer(p,n,pos,tape,smp_load_acquire(&used)); }
static ssize_t freeze_tape(struct file *f,const char __user *p,size_t n,loff_t *pos)
{
 unsigned long flags;
 spin_lock_irqsave(&tape_lock,flags); frozen=true; spin_unlock_irqrestore(&tape_lock,flags);
 pr_info("L2_FROZEN records=%llu bytes=%zu dropped=%llu\n",serial,used,dropped);
 return n;
}
static ssize_t read_stats(struct file *f,char __user *p,size_t n,loff_t *pos)
{
 char b[128]; int len=scnprintf(b,sizeof(b),"records=%llu bytes=%zu dropped=%llu frozen=%u\n",serial,used,dropped,frozen);
 return simple_read_from_buffer(p,n,pos,b,len);
}
static const struct proc_ops tape_ops={.proc_read=read_tape};
static const struct proc_ops freeze_ops={.proc_write=freeze_tape,.proc_read=read_stats};
int l2_record_init(void)
{
 tape=vzalloc(CAPACITY);
 if(!tape) return -ENOMEM;
 if(!proc_create("l2trace",0400,NULL,&tape_ops) || !proc_create("l2freeze",0600,NULL,&freeze_ops)) return -ENOMEM;
 return 0;
}
void l2_record_exit(void)
{ remove_proc_entry("l2trace",NULL);remove_proc_entry("l2freeze",NULL);vfree(tape);tape=NULL; }

struct l2_mapping { void *cpu; u64 size, physical; };
static struct l2_mapping mappings[4096];
void l2_map(void *cpu,unsigned long long size,unsigned long long physical)
{
 unsigned long flags; unsigned i;
 u64 meta[2]={size,physical};
 l2_record(6,(unsigned long long)cpu,meta,sizeof(meta));
 spin_lock_irqsave(&tape_lock,flags);
 for(i=0;i<4096;i++) if(!mappings[i].cpu){mappings[i]=(struct l2_mapping){cpu,size,physical};break;}
 if(i==4096)dropped++;
 spin_unlock_irqrestore(&tape_lock,flags);
}
void l2_unmap(void *cpu)
{
 unsigned long flags; unsigned i; struct l2_mapping m={0}; u64 off;
 spin_lock_irqsave(&tape_lock,flags);
 for(i=0;i<4096;i++)if(mappings[i].cpu==cpu){m=mappings[i];mappings[i].cpu=NULL;break;}
 spin_unlock_irqrestore(&tape_lock,flags);
 /* Only ordinary kernel-mapped system RAM is registered, never VRAM/MMIO. */
 for(off=0;off<m.size;off+=65536)
  l2_record(7,(unsigned long long)cpu+off,cpu+off,min_t(u64,65536,m.size-off));
}

static DEFINE_SPINLOCK(mmio_lock);
unsigned long l2_mmio_enter(void)
{
 unsigned long flags; spin_lock_irqsave(&mmio_lock,flags); return flags;
}
void l2_mmio_exit(unsigned long flags)
{ spin_unlock_irqrestore(&mmio_lock,flags); }
