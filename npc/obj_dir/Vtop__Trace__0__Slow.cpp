// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"rst", false,-1);
    tracep->declBus(c+18,"result", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"rst", false,-1);
    tracep->declBus(c+18,"result", false,-1, 31,0);
    tracep->declBus(c+5,"ins", false,-1, 31,0);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"imm", false,-1, 11,0);
    tracep->declBus(c+7,"rs1", false,-1, 4,0);
    tracep->declBus(c+8,"fun3", false,-1, 2,0);
    tracep->declBus(c+3,"rs1_data", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"rst", false,-1);
    tracep->declBus(c+2,"din", false,-1, 31,0);
    tracep->declBus(c+4,"dout", false,-1, 31,0);
    tracep->declBit(c+21,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+22,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+23,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+19,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+18,"out", false,-1, 31,0);
    tracep->declBus(c+8,"key", false,-1, 2,0);
    tracep->declQuad(c+10,"lut", false,-1, 34,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+22,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+23,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+19,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+24,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+18,"out", false,-1, 31,0);
    tracep->declBus(c+8,"key", false,-1, 2,0);
    tracep->declBus(c+20,"default_out", false,-1, 31,0);
    tracep->declQuad(c+10,"lut", false,-1, 34,0);
    tracep->declBus(c+25,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+12+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+14+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+15,"lut_out", false,-1, 31,0);
    tracep->declBit(c+9,"hit", false,-1);
    tracep->declBus(c+26,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__pc),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT____Vcellout__i0____pinNumber4),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__ins),32);
    bufp->fullSData(oldp+6,(vlSelf->top__DOT__imm),12);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__rs1),5);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__fun3),3);
    bufp->fullBit(oldp+9,(((IData)(vlSelf->top__DOT__fun3) 
                           == vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                           [0U])));
    bufp->fullQData(oldp+10,((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0))),35);
    bufp->fullQData(oldp+12,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+16,(vlSelf->clk));
    bufp->fullBit(oldp+17,(vlSelf->rst));
    bufp->fullIData(oldp+18,(vlSelf->result),32);
    bufp->fullIData(oldp+19,(0x20U),32);
    bufp->fullIData(oldp+20,(0U),32);
    bufp->fullBit(oldp+21,(1U));
    bufp->fullIData(oldp+22,(1U),32);
    bufp->fullIData(oldp+23,(3U),32);
    bufp->fullIData(oldp+24,(0U),32);
    bufp->fullIData(oldp+25,(0x23U),32);
    bufp->fullIData(oldp+26,(1U),32);
}
