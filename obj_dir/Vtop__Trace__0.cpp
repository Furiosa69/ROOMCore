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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__lsu_cnt),4);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__alu_cnt),4);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__pc_cnt),4);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__imm),32);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__exu_t0__DOT__UType));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__exu_t0__DOT__IType));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__rdata1),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__rdata2),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__addr_load),32);
        bufp->chgIData(oldp+9,(((4U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                 ? (((- (IData)((1U 
                                                 & (vlSelf->top__DOT__lsu_t0__DOT__temp 
                                                    >> 7U)))) 
                                     << 8U) | (0xffU 
                                               & vlSelf->top__DOT__lsu_t0__DOT__temp))
                                 : ((5U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->top__DOT__lsu_t0__DOT__temp 
                                                        >> 0xfU)))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & vlSelf->top__DOT__lsu_t0__DOT__temp))
                                     : ((6U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                         ? vlSelf->top__DOT__lsu_t0__DOT__temp
                                         : ((7U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                             ? (0xffU 
                                                & vlSelf->top__DOT__lsu_t0__DOT__temp)
                                             : ((8U 
                                                 == (IData)(vlSelf->top__DOT__lsu_cnt))
                                                 ? 
                                                (0xffffU 
                                                 & vlSelf->top__DOT__lsu_t0__DOT__temp)
                                                 : 0U)))))),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__exu_t0__DOT__alu_a),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__exu_t0__DOT__alu_b),32);
        bufp->chgBit(oldp+12,(((1U == (IData)(vlSelf->top__DOT__pc_cnt))
                                ? (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                   == vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                : ((2U == (IData)(vlSelf->top__DOT__pc_cnt))
                                    ? (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                       != vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                    : ((3U == (IData)(vlSelf->top__DOT__pc_cnt))
                                        ? (IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_hb68cf044__0)
                                        : ((4U == (IData)(vlSelf->top__DOT__pc_cnt))
                                            ? VL_GTES_III(32, vlSelf->top__DOT__exu_t0__DOT__alu_a, vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                            : ((5U 
                                                == (IData)(vlSelf->top__DOT__pc_cnt))
                                                ? (IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_hb6985176__0)
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->top__DOT__pc_cnt)) 
                                                   & (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                                      >= vlSelf->top__DOT__exu_t0__DOT__alu_b)))))))));
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__lsu_t0__DOT__temp),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__ifu_t0__DOT__c_state));
        bufp->chgBit(oldp+15,((1U & (~ (IData)(vlSelf->top__DOT__idu_t0__DOT__c_state)))));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__idu_t0__DOT__c_state));
        bufp->chgBit(oldp+17,((1U & (~ (IData)(vlSelf->top__DOT__exu_t0__DOT__c_state)))));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__exu_t0__DOT__c_state));
        bufp->chgBit(oldp+19,((0U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state))));
        bufp->chgBit(oldp+20,((2U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state))));
        bufp->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->top__DOT__lsu_t0__DOT__c_state)))));
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__ifu_pc),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__idu_pc),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__exu_pc),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__mem_pc),32);
        bufp->chgBit(oldp+26,(((IData)(vlSelf->top__DOT__exu_t0__DOT__c_state)
                                ? ((IData)(vlSelf->top__DOT__exu_t0__DOT__c_state) 
                                   & (0U != (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state)))
                                : (IData)(vlSelf->top__DOT__idu_t0__DOT__c_state))));
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__exu_t0__DOT__pc_exu),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__idu_t0__DOT__pc_idu),32);
        bufp->chgBit(oldp+29,(((IData)(vlSelf->top__DOT__idu_t0__DOT__c_state)
                                ? ((IData)(vlSelf->top__DOT__idu_t0__DOT__c_state) 
                                   & (IData)(vlSelf->top__DOT__exu_t0__DOT__c_state))
                                : (IData)(vlSelf->top__DOT__ifu_t0__DOT__c_state))));
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__ifu_t0__DOT__pc_ifu),32);
        bufp->chgBit(oldp+31,((1U & ((~ (IData)(vlSelf->top__DOT__ifu_t0__DOT__c_state)) 
                                     & (~ (IData)(vlSelf->top__DOT__idu_t0__DOT__c_state))))));
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__lsu_t0__DOT__pc_lsu),32);
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__lsu_t0__DOT__c_state));
        bufp->chgBit(oldp+34,(((~ (IData)(vlSelf->top__DOT__lsu_t0__DOT__c_state)) 
                               & (2U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state)))));
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__mem_t0__DOT__pc_mem),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__mem_t0__DOT__rf[0]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__mem_t0__DOT__rf[1]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__mem_t0__DOT__rf[2]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__mem_t0__DOT__rf[3]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__mem_t0__DOT__rf[4]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__mem_t0__DOT__rf[5]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__mem_t0__DOT__rf[6]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__mem_t0__DOT__rf[7]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__mem_t0__DOT__rf[8]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__mem_t0__DOT__rf[9]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__mem_t0__DOT__rf[10]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__mem_t0__DOT__rf[11]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__mem_t0__DOT__rf[12]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__mem_t0__DOT__rf[13]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__mem_t0__DOT__rf[14]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__mem_t0__DOT__rf[15]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__mem_t0__DOT__rf[16]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__mem_t0__DOT__rf[17]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__mem_t0__DOT__rf[18]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__mem_t0__DOT__rf[19]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__mem_t0__DOT__rf[20]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__mem_t0__DOT__rf[21]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__mem_t0__DOT__rf[22]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__mem_t0__DOT__rf[23]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__mem_t0__DOT__rf[24]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__mem_t0__DOT__rf[25]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__mem_t0__DOT__rf[26]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__mem_t0__DOT__rf[27]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__mem_t0__DOT__rf[28]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__mem_t0__DOT__rf[29]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__mem_t0__DOT__rf[30]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__mem_t0__DOT__rf[31]),32);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__mem_t0__DOT__c_state),2);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__mem_t0__DOT__n_state),2);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__mem_t0__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+71,(vlSelf->clk));
    bufp->chgBit(oldp+72,(vlSelf->reset));
    bufp->chgIData(oldp+73,(vlSelf->ifu_idu_inst),32);
    bufp->chgIData(oldp+74,(vlSelf->lsu_pc),32);
    bufp->chgBit(oldp+75,(((IData)(vlSelf->top__DOT__exu_t0__DOT__UType) 
                           | ((0x6fU == (0x7fU & vlSelf->ifu_idu_inst)) 
                              | ((IData)(vlSelf->top__DOT__exu_t0__DOT__IType) 
                                 | (0x33U == (0x7fU 
                                              & vlSelf->ifu_idu_inst)))))));
    bufp->chgCData(oldp+76,((((IData)(vlSelf->top__DOT__exu_t0__DOT__UType) 
                              << 5U) | (((0x6fU == 
                                          (0x7fU & vlSelf->ifu_idu_inst)) 
                                         << 4U) | (
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ifu_idu_inst)) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT__exu_t0__DOT__IType) 
                                                       << 2U) 
                                                      | (((0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ifu_idu_inst)) 
                                                          << 1U) 
                                                         | (0x33U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ifu_idu_inst)))))))),6);
    bufp->chgCData(oldp+77,((0x1fU & (vlSelf->ifu_idu_inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+78,((0x1fU & (vlSelf->ifu_idu_inst 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+79,((0x1fU & (vlSelf->ifu_idu_inst 
                                      >> 7U))),5);
    bufp->chgIData(oldp+80,(((3U == (0x7fU & vlSelf->ifu_idu_inst))
                              ? ((4U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->top__DOT__lsu_t0__DOT__temp 
                                                     >> 7U)))) 
                                      << 8U) | (0xffU 
                                                & vlSelf->top__DOT__lsu_t0__DOT__temp))
                                  : ((5U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->top__DOT__lsu_t0__DOT__temp 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->top__DOT__lsu_t0__DOT__temp))
                                      : ((6U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                          ? vlSelf->top__DOT__lsu_t0__DOT__temp
                                          : ((7U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                              ? (0xffU 
                                                 & vlSelf->top__DOT__lsu_t0__DOT__temp)
                                              : ((8U 
                                                  == (IData)(vlSelf->top__DOT__lsu_cnt))
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelf->top__DOT__lsu_t0__DOT__temp)
                                                  : 0U)))))
                              : ((1U == (IData)(vlSelf->top__DOT__alu_cnt))
                                  ? (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                     + vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                  : ((2U == (IData)(vlSelf->top__DOT__alu_cnt))
                                      ? (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                         - vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                      : ((3U == (IData)(vlSelf->top__DOT__alu_cnt))
                                          ? ((IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_hb68cf044__0)
                                              ? 1U : 0U)
                                          : ((4U == (IData)(vlSelf->top__DOT__alu_cnt))
                                              ? ((IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_hb6985176__0)
                                                  ? 1U
                                                  : 0U)
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__alu_cnt))
                                                  ? 
                                                 (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                                  & vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__alu_cnt))
                                                   ? 
                                                  (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                                   | vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__alu_cnt))
                                                    ? 
                                                   (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                                    ^ vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->top__DOT__alu_cnt))
                                                     ? 
                                                    (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__exu_t0__DOT__alu_b))
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->top__DOT__alu_cnt))
                                                      ? vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_h4d3eedd5__0
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->top__DOT__alu_cnt))
                                                       ? vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_h4d3eedd5__0
                                                       : 0U)))))))))))),32);
    bufp->chgBit(oldp+81,((0x17U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->chgBit(oldp+82,((0x37U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->chgBit(oldp+83,((0x100073U == vlSelf->ifu_idu_inst)));
    bufp->chgBit(oldp+84,((3U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->chgBit(oldp+85,((0x6fU == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->chgBit(oldp+86,((0x63U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->chgBit(oldp+87,((0x23U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->chgBit(oldp+88,((0x33U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->chgCData(oldp+89,((0x7fU & vlSelf->ifu_idu_inst)),7);
    bufp->chgCData(oldp+90,((7U & (vlSelf->ifu_idu_inst 
                                   >> 0xcU))),3);
    bufp->chgCData(oldp+91,((vlSelf->ifu_idu_inst >> 0x19U)),7);
    bufp->chgBit(oldp+92,((0x67U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->chgBit(oldp+93,((0x13U == (0x7fU & vlSelf->ifu_idu_inst))));
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
}
