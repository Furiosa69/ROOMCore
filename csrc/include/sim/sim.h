#ifndef __SIM_H__
#define __SIM_H__

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vtop.h>
#include "Vtop__Dpi.h"
#include "Vtop___024root.h"

#include "mem/memory.h"  

extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern Vtop* top;
extern Vtop___024root* root;

#define  PC   root->top__DOT__ifu_pc
#define  DNPC root->top__DOT__ifu_t0__DOT__target_pc
#define  INST root->top__DOT__inst
#define  GPR  root->top__DOT__mem_t0__DOT__rf

enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };


typedef struct {
  uint32_t gpr[32];
  uint32_t pc;
  uint32_t csr[4];
} riscv32_CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv32_ISADecodeInfo;

typedef riscv32_CPU_state CPU_state;
typedef riscv32_ISADecodeInfo ISADecodeInfo;

typedef struct {
  int state;
  uint32_t halt_pc;
  uint32_t halt_ret;
} NEMUState;

typedef struct Decode {
  uint32_t pc;
  uint32_t snpc; 
  uint32_t dnpc; 
  ISADecodeInfo isa;
} Decode;


extern CPU_state cpu;

extern NEMUState nemu_state;


void step_and_dump_wave();
void sim_init();
void sim_exit();
void NPCTRAP(int pc,int x10);
void clock_tick();
void rst_begin();
void set_nemu_state(int state, uint32_t pc,int halt_ret);
int  isa_exec_once(Decode *s);
void cpu_exec(uint64_t n);


#endif
