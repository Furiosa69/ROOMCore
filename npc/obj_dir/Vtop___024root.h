// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*4:0*/ top__DOT__rs1;
    CData/*2:0*/ top__DOT__fun3;
    CData/*0:0*/ top__DOT____Vtogcov__clk;
    CData/*0:0*/ top__DOT____Vtogcov__rst;
    CData/*4:0*/ top__DOT____Vtogcov__rs1;
    CData/*2:0*/ top__DOT____Vtogcov__fun3;
    CData/*0:0*/ top__DOT__i0__DOT____Vtogcov__wen;
    CData/*0:0*/ top__DOT__i2__DOT__i0__DOT____Vtogcov__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ top__DOT__imm;
    SData/*11:0*/ top__DOT____Vtogcov__imm;
    VL_OUT(result,31,0);
    IData/*31:0*/ top__DOT__ins;
    IData/*31:0*/ top__DOT__pc;
    IData/*31:0*/ top__DOT__rs1_data;
    IData/*31:0*/ top__DOT____Vcellout__i0____pinNumber4;
    IData/*31:0*/ top__DOT____Vtogcov__result;
    IData/*31:0*/ top__DOT____Vtogcov__ins;
    IData/*31:0*/ top__DOT____Vtogcov__pc;
    IData/*31:0*/ top__DOT____Vtogcov__rs1_data;
    IData/*31:0*/ top__DOT__i0__DOT____Vtogcov__dout;
    IData/*31:0*/ top__DOT__i2__DOT__i0__DOT__lut_out;
    IData/*31:0*/ top__DOT__i2__DOT__i0__DOT____Vtogcov__default_out;
    IData/*31:0*/ top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out;
    IData/*31:0*/ __VdfgTmp_he27f3d4e__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*34:0*/ top__DOT__i2__DOT____Vtogcov__lut;
    VlUnpacked<QData/*34:0*/, 1> top__DOT__i2__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 1> top__DOT__i2__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 1> top__DOT__i2__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*34:0*/, 1> top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list;
    VlUnpacked<CData/*2:0*/, 1> top__DOT__i2__DOT__i0__DOT____Vtogcov__key_list;
    VlUnpacked<IData/*31:0*/, 1> top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
