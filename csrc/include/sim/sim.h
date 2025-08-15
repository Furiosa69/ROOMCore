#ifndef __SIM_H__
#define __SIM_H__

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vtop.h>
#include "Vtop__Dpi.h"

#include "mem/memory.h"  

extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern Vtop* top;

void step_and_dump_wave();
void sim_init();
void sim_exit();
void npctrap();
void clock_tick();
void rst_begin();
void read_1inst();

#endif
