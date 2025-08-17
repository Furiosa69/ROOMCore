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
    CData/*0:0*/ top__DOT__ifu_t0__DOT__jal;
    CData/*3:0*/ top__DOT__idu_t0__DOT____VdfgTmp_h5d003edb__0;
    CData/*0:0*/ top__DOT__exu_t0__DOT__UType;
    CData/*0:0*/ top__DOT__exu_t0__DOT__IType;
    CData/*0:0*/ top__DOT__exu_t0__DOT____VdfgTmp_h800671aa__0;
    CData/*0:0*/ top__DOT__exu_t0__DOT____VdfgTmp_h8052707d__0;
    CData/*4:0*/ top__DOT__exu_t0__DOT____VdfgTmp_he33d4997__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__ifu_pc;
    IData/*31:0*/ top__DOT__inst;
    IData/*31:0*/ top__DOT__rdata1;
    IData/*31:0*/ top__DOT__rdata2;
    IData/*31:0*/ top__DOT__addr_load;
    IData/*31:0*/ top__DOT__imm;
    IData/*31:0*/ top__DOT__exu_t0__DOT__alu_a;
    IData/*31:0*/ top__DOT__exu_t0__DOT__alu_b;
    IData/*31:0*/ top__DOT__exu_t0__DOT____VdfgTmp_h194da086__0;
    IData/*31:0*/ top__DOT__exu_t0__DOT____VdfgTmp_h72228fe7__0;
    IData/*31:0*/ top__DOT__mem_t0__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__lsu_t0__DOT__temp;
    IData/*31:0*/ __Vfunc_pmem_read__0__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__3__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__4__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__5__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__6__Vfuncout;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__mem_t0__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
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
