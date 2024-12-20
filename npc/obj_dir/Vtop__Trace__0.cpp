// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[0]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__pc),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT____Vcellout__i0____pinNumber4),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__ins),32);
        bufp->chgSData(oldp+5,(vlSelf->top__DOT__imm),12);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__rs1),5);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__fun3),3);
        bufp->chgBit(oldp+8,(((IData)(vlSelf->top__DOT__fun3) 
                              == vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                              [0U])));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+9,((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0))),35);
        bufp->chgQData(oldp+11,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out),32);
    }
    bufp->chgBit(oldp+15,(vlSelf->clk));
    bufp->chgBit(oldp+16,(vlSelf->rst));
    bufp->chgIData(oldp+17,(vlSelf->result),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
