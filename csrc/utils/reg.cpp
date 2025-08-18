#include "common.h"
#include "sim/sim.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  int reg_num = ARRLEN(regs);
  int i;

  for(i = 0;i<reg_num;i++) {
    printf("%2d : %8s%#15x%15d\n",i,regs[i],cpu.gpr[i],cpu.gpr[i]);
  }
}

uint32_t isa_reg_str2val(const char *s, bool *success) {
  int reg_num = ARRLEN(regs);
  int i;

  for(i = 0;i<reg_num;i++) {
  int len1 = strlen(s);
  int len2 = strlen(regs[i]);
  if(strncmp( s+len1-2, regs[i]+len2-2,2)== 0){
    return cpu.gpr[i];
  }
  }

  return 0;
}

