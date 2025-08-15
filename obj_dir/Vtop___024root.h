// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024unit;


class Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ top__DOT__lsu_cnt;
    CData/*3:0*/ top__DOT__alu_cnt;
    CData/*3:0*/ top__DOT__pc_cnt;
    CData/*0:0*/ top__DOT__ifu_t0__DOT__c_state;
    CData/*0:0*/ top__DOT__ifu_t0__DOT__n_state;
    CData/*0:0*/ top__DOT__idu_t0__DOT__c_state;
    CData/*0:0*/ top__DOT__idu_t0__DOT__n_state;
    CData/*3:0*/ top__DOT__idu_t0__DOT____VdfgTmp_h5d003edb__0;
    CData/*0:0*/ top__DOT__exu_t0__DOT__UType;
    CData/*0:0*/ top__DOT__exu_t0__DOT__IType;
    CData/*0:0*/ top__DOT__exu_t0__DOT__c_state;
    CData/*0:0*/ top__DOT__exu_t0__DOT__n_state;
    CData/*0:0*/ top__DOT__exu_t0__DOT____VdfgTmp_hb68cf044__0;
    CData/*0:0*/ top__DOT__exu_t0__DOT____VdfgTmp_hb6985176__0;
    CData/*1:0*/ top__DOT__mem_t0__DOT__c_state;
    CData/*1:0*/ top__DOT__mem_t0__DOT__n_state;
    CData/*0:0*/ top__DOT__lsu_t0__DOT__c_state;
    CData/*0:0*/ top__DOT__lsu_t0__DOT__n_state;
    CData/*3:0*/ __Vtableidx1;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__reset;
    CData/*0:0*/ __VactContinue;
    VL_IN(ifu_idu_inst,31,0);
    VL_OUT(lsu_pc,31,0);
    IData/*31:0*/ top__DOT__ifu_pc;
    IData/*31:0*/ top__DOT__idu_pc;
    IData/*31:0*/ top__DOT__exu_pc;
    IData/*31:0*/ top__DOT__mem_pc;
    IData/*31:0*/ top__DOT__rdata1;
    IData/*31:0*/ top__DOT__rdata2;
    IData/*31:0*/ top__DOT__addr_load;
    IData/*31:0*/ top__DOT__imm;
    IData/*31:0*/ top__DOT__ifu_t0__DOT__pc_ifu;
    IData/*31:0*/ top__DOT__idu_t0__DOT__pc_idu;
    IData/*31:0*/ top__DOT__exu_t0__DOT__pc_exu;
    IData/*31:0*/ top__DOT__exu_t0__DOT__alu_a;
    IData/*31:0*/ top__DOT__exu_t0__DOT__alu_b;
    IData/*31:0*/ top__DOT__exu_t0__DOT____VdfgTmp_h4d3eedd5__0;
    IData/*31:0*/ top__DOT__mem_t0__DOT__pc_mem;
    IData/*31:0*/ top__DOT__mem_t0__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__lsu_t0__DOT__pc_lsu;
    IData/*31:0*/ top__DOT__lsu_t0__DOT__temp;
    IData/*31:0*/ __Vfunc_pmem_read__1__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__3__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__4__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__5__Vfuncout;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__mem_t0__DOT__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
