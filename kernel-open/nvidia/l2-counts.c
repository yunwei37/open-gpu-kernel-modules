// SPDX-License-Identifier: MIT
/* Native baseline: bounded counters only, no user-facing tracing interface. */
#include <linux/kernel.h>
#include <linux/spinlock.h>
#include <linux/string.h>
static DEFINE_SPINLOCK(mmio_lock);
static DEFINE_SPINLOCK(count_lock);
static u64 rpc[2][8192],other[16],overflow;
static bool frozen;
static struct {u32 bytes;u8 data[1024];} promotes[16];
static u32 promote_count;
static struct {u32 cmd,lo,hi;bool used;u64 sends,replies,failed;} controls[512];
static struct {u32 cls,cmd;bool used;u64 hits,misses;} methods[4096];
static struct {u32 id;bool used;u64 cpu,rpc,ok,failed,lookups,misses;} classes[1024];
static struct {u32 offset;bool used;u64 reads,writes;} regs[32768];
unsigned long l2_mmio_enter(void){unsigned long f;spin_lock_irqsave(&mmio_lock,f);return f;}
void l2_mmio_exit(unsigned long f){spin_unlock_irqrestore(&mmio_lock,f);}
void l2_record(unsigned type,unsigned long long address,const void *data,unsigned length)
{
 unsigned long f;unsigned i;u32 function;
 spin_lock_irqsave(&count_lock,f);
 if(frozen)goto out;
 if(type<16)other[type]++;
 if((type==1||type==2)&&length>=32){
  memcpy(&function,(char *)data+12,4);
  if(function<8192)rpc[type-1][function]++;else overflow++;
 }
 if((type==1||type==2) && length>=72 && function==76){
  u32 cmd,n,status,header_status;
  memcpy(&cmd,(char *)data+40,4);memcpy(&n,(char *)data+48,4);
  for(i=0;i<512;i++)if(!controls[i].used||controls[i].cmd==cmd)break;
  if(i==512){overflow++;goto out;}
  if(!controls[i].used){controls[i].used=true;controls[i].cmd=cmd;controls[i].lo=n;}
  controls[i].lo=min(controls[i].lo,n);controls[i].hi=max(controls[i].hi,n);
  if(type==1)controls[i].sends++;
  else{controls[i].replies++;memcpy(&status,(char *)data+44,4);memcpy(&header_status,(char *)data+16,4);
   if(status||header_status)controls[i].failed++;}
 }
 if(type==1 && length>=72 && function==76){
  u32 cmd;memcpy(&cmd,(char *)data+40,4);
  if(cmd==0x2080012b){
   if(promote_count==16 || length>1024)overflow++;
   else{promotes[promote_count].bytes=length;memcpy(promotes[promote_count++].data,data,length);}
  }
 }
 if(type==13 || type==14 || type==15 || ((type==1||type==2)&&length>=64&&function==103)){
  u32 cls=(u32)address,status=0,header_status=0;
  if(type==1||type==2)memcpy(&cls,(char *)data+44,4);
  for(i=0;i<1024;i++)if(!classes[i].used||classes[i].id==cls)break;
  if(i==1024){overflow++;goto out;}
  classes[i].used=true;classes[i].id=cls;
  if(type==13)classes[i].cpu++;
  else if(type==14)classes[i].lookups++;
  else if(type==15)classes[i].misses++;
  else if(type==1)classes[i].rpc++;
  else{memcpy(&status,(char *)data+48,4);memcpy(&header_status,(char *)data+16,4);
   if(!status&&!header_status)classes[i].ok++;else classes[i].failed++;}
 }
 if(type==11 && length==4){
  u32 cls=address>>32,cmd=(u32)address,hit;memcpy(&hit,data,4);
  for(i=0;i<4096;i++)if(!methods[i].used||(methods[i].cls==cls&&methods[i].cmd==cmd))break;
  if(i==4096){overflow++;goto out;}
  methods[i].used=true;methods[i].cls=cls;methods[i].cmd=cmd;
  if(hit)methods[i].hits++;else methods[i].misses++;
 }
 if(type==3||type==4){
  for(i=0;i<32768;i++)if(!regs[i].used||regs[i].offset==address)break;
  if(i==32768){overflow++;goto out;}
  regs[i].used=true;regs[i].offset=address;
  if(type==3)regs[i].reads++;else regs[i].writes++;
 }
out:spin_unlock_irqrestore(&count_lock,f);
}
void l2_counts_dump(void)
{
 unsigned long f;unsigned i,j;
 spin_lock_irqsave(&count_lock,f);frozen=true;spin_unlock_irqrestore(&count_lock,f);
 pr_info("L2_NATIVE_COUNTS sends=%llu replies=%llu reads=%llu writes=%llu overflow=%llu\n",other[1],other[2],other[3],other[4],overflow);
 for(i=0;i<8192;i++)if(rpc[0][i]||rpc[1][i])pr_info("L2_NATIVE_RPC id=%u sends=%llu replies=%llu\n",i,rpc[0][i],rpc[1][i]);
 for(i=0;i<512;i++)if(controls[i].used)pr_info("L2_NATIVE_CTRL cmd=0x%x sends=%llu replies=%llu failed=%llu params_min=%u params_max=%u\n",controls[i].cmd,controls[i].sends,controls[i].replies,controls[i].failed,controls[i].lo,controls[i].hi);
 for(i=0;i<4096;i++)if(methods[i].used)pr_info("L2_NATIVE_METHOD class=0x%x cmd=0x%x hits=%llu misses=%llu\n",methods[i].cls,methods[i].cmd,methods[i].hits,methods[i].misses);
 for(i=0;i<1024;i++)if(classes[i].used)pr_info("L2_NATIVE_CLASS id=0x%x cpu_created=%llu alloc_rpc=%llu gpu_ok=%llu gpu_failed=%llu info_lookups=%llu info_misses=%llu\n",classes[i].id,classes[i].cpu,classes[i].rpc,classes[i].ok,classes[i].failed,classes[i].lookups,classes[i].misses);
 for(i=0;i<promote_count;i++){
  pr_info("L2_PROMOTE_PACKET index=%u bytes=%u\n",i,promotes[i].bytes);
  for(j=0;j<promotes[i].bytes;j+=16)pr_info("L2_PROMOTE_HEX index=%u offset=%u data=%*phN\n",i,j,min(16u,promotes[i].bytes-j),promotes[i].data+j);
 }
 for(i=0;i<32768;i++)if(regs[i].used)pr_info("L2_NATIVE_REG offset=0x%x reads=%llu writes=%llu\n",regs[i].offset,regs[i].reads,regs[i].writes);
}

/* The consumer calls this around QMD upload, kick, request and GPU release.
 * It observes background RM traffic too; zero RPCs does not mean zero RM code. */
void l2_counts_phase(unsigned end)
{
 static u64 start[4];
 u64 delta[4];unsigned i;unsigned long flags;
 spin_lock_irqsave(&count_lock,flags);
 for(i=0;i<4;i++){if(end)delta[i]=other[i+1]-start[i];else start[i]=other[i+1];}
 spin_unlock_irqrestore(&count_lock,flags);
 if(end)pr_info("L2_LAUNCH_DELTA sends=%llu replies=%llu rm_reads=%llu rm_writes=%llu\n",delta[0],delta[1],delta[2],delta[3]);
}
