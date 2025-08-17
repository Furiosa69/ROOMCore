// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/furiosa/my_cpu/vsrc/top.v:1:30
    extern void NPCTRAP(int pc, int x10);
    // DPI import at /home/furiosa/my_cpu/vsrc/top.v:3:30
    extern int pmem_read(int addr, int size);
    // DPI import at /home/furiosa/my_cpu/vsrc/top.v:2:30
    extern void pmem_write(int addr, int data, int size);

#ifdef __cplusplus
}
#endif

#endif  // guard
