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
    } else {
        memcpy(buf, guest_to_host(addr), n);
    }
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
    if (direction == DIFFTEST_TO_REF) {
        memcpy(&cpu, dut, sizeof(CPU_state));
    } else {
        memcpy(dut, &cpu, sizeof(CPU_state));
    }
}

__EXPORT void difftest_exec(uint64_t n) {
    for (uint64_t i = 0; i < n; i++) {
        cpu_exec(1);

        CPU_state dut_cpu;
        difftest_regcpy(&dut_cpu, DIFFTEST_TO_DUT);

        if (memcmp(&cpu, &dut_cpu, sizeof(CPU_state)) != 0) {
            printf("DiffTest failed!\n");
            exit(1);
        }
    }
}

__EXPORT void difftest_raise_intr(word_t NO) {
	assert(0);
//    cpu.raise_intr(NO);
}

__EXPORT void difftest_init(int port) {
    void init_mem();
    init_mem();

    init_isa();

    // 初始化 NEMU 的 CPU 状态
    memset(&cpu, 0, sizeof(CPU_state));
}
