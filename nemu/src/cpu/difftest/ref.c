/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/
#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#include <string.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <stdio.h>

__EXPORT void difftest_memcpy(uint32_t addr, void *buf, size_t n, bool direction) {
    if (direction == DIFFTEST_TO_REF) {
        memcpy(guest_to_host(addr), buf, n);
    } else if(direction == DIFFTEST_TO_DUT){
			paddr_read(addr,n);
    } else {
			assert(0);
		}
}

__EXPORT void difftest_regcpy(void *dut_ptr, bool direction) {
		CPU_state *dut = (CPU_state *)dut_ptr;
    if (direction == DIFFTEST_TO_REF) {
			for (int i = 0; i<32;i++){
				cpu.gpr[i] = dut->gpr[i];
			}
			cpu.pc = dut->pc;
    } else if(direction == DIFFTEST_TO_DUT){
			for (int i = 0; i<32;i++){
				dut->gpr[i] = cpu.gpr[i];
			}
			dut->pc = cpu.pc;
    } else {
			assert(0);
		}
}

__EXPORT void difftest_exec(uint64_t n) {
	   cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
	assert(0);
//    cpu.raise_intr(NO);
}

__EXPORT void difftest_init(int port) {
    void init_mem();
    init_mem();

    init_isa();
}
