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
    tracep->declBit(c+72,"clk", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+72,"clk", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declBus(c+1,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->declBus(c+3,"lsu_cnt", false,-1, 3,0);
    tracep->declBit(c+4,"mem_cnt", false,-1);
    tracep->declBus(c+5,"alu_cnt", false,-1, 3,0);
    tracep->declBus(c+6,"ins_cnt", false,-1, 5,0);
    tracep->declBus(c+7,"pc_cnt", false,-1, 3,0);
    tracep->declBus(c+8,"raddr1", false,-1, 4,0);
    tracep->declBus(c+9,"raddr2", false,-1, 4,0);
    tracep->declBus(c+10,"waddr", false,-1, 4,0);
    tracep->declBus(c+11,"rdata1", false,-1, 31,0);
    tracep->declBus(c+12,"rdata2", false,-1, 31,0);
    tracep->declBus(c+13,"wdata", false,-1, 31,0);
    tracep->declBus(c+14,"addr_load", false,-1, 31,0);
    tracep->declBus(c+14,"addr_store", false,-1, 31,0);
    tracep->declBus(c+15,"data_load", false,-1, 31,0);
    tracep->declBus(c+12,"data_store", false,-1, 31,0);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBit(c+17,"br_taken", false,-1);
    tracep->declBit(c+18,"auipc", false,-1);
    tracep->declBit(c+19,"lui", false,-1);
    tracep->declBit(c+20,"ebreak", false,-1);
    tracep->declBit(c+21,"load", false,-1);
    tracep->declBit(c+22,"jalr", false,-1);
    tracep->declBit(c+23,"jal", false,-1);
    tracep->pushNamePrefix("exu_t0 ");
    tracep->declBus(c+1,"pc_in", false,-1, 31,0);
    tracep->declBus(c+7,"pc_cnt", false,-1, 3,0);
    tracep->declBus(c+5,"alu_cnt", false,-1, 3,0);
    tracep->declBit(c+18,"auipc", false,-1);
    tracep->declBit(c+19,"lui", false,-1);
    tracep->declBit(c+22,"jalr", false,-1);
    tracep->declBit(c+21,"load", false,-1);
    tracep->declBit(c+23,"jal", false,-1);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBus(c+13,"alu_result", false,-1, 31,0);
    tracep->declBit(c+17,"br_taken", false,-1);
    tracep->declBus(c+11,"rdata1", false,-1, 31,0);
    tracep->declBus(c+12,"rdata2", false,-1, 31,0);
    tracep->declBus(c+15,"data_load", false,-1, 31,0);
    tracep->declBus(c+6,"ins_cnt", false,-1, 5,0);
    tracep->declBit(c+24,"UType", false,-1);
    tracep->declBit(c+23,"JType", false,-1);
    tracep->declBit(c+25,"BType", false,-1);
    tracep->declBit(c+26,"IType", false,-1);
    tracep->declBit(c+27,"SType", false,-1);
    tracep->declBit(c+28,"RType", false,-1);
    tracep->declBus(c+29,"alu_a", false,-1, 31,0);
    tracep->declBus(c+30,"alu_b", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu_t0 ");
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->declBus(c+7,"pc_cnt", false,-1, 3,0);
    tracep->declBus(c+3,"lsu_cnt", false,-1, 3,0);
    tracep->declBit(c+4,"mem_cnt", false,-1);
    tracep->declBus(c+5,"alu_cnt", false,-1, 3,0);
    tracep->declBus(c+6,"ins_cnt", false,-1, 5,0);
    tracep->declBus(c+8,"rs1", false,-1, 4,0);
    tracep->declBus(c+9,"rs2", false,-1, 4,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBit(c+18,"auipc", false,-1);
    tracep->declBit(c+19,"lui", false,-1);
    tracep->declBit(c+20,"ebreak", false,-1);
    tracep->declBit(c+21,"load", false,-1);
    tracep->declBit(c+23,"jal", false,-1);
    tracep->declBit(c+22,"jalr", false,-1);
    tracep->declBus(c+31,"opcode", false,-1, 6,0);
    tracep->declBus(c+32,"fun3", false,-1, 2,0);
    tracep->declBus(c+33,"fun7", false,-1, 6,0);
    tracep->declBit(c+24,"UType", false,-1);
    tracep->declBit(c+23,"JType", false,-1);
    tracep->declBit(c+25,"BType", false,-1);
    tracep->declBit(c+26,"IType", false,-1);
    tracep->declBit(c+27,"SType", false,-1);
    tracep->declBit(c+28,"RType", false,-1);
    tracep->declBit(c+34,"I_imm", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_t0 ");
    tracep->declBit(c+72,"clk", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBit(c+17,"br_taken", false,-1);
    tracep->declBus(c+2,"inst", false,-1, 31,0);
    tracep->declBus(c+1,"pc_out", false,-1, 31,0);
    tracep->declBus(c+11,"ret", false,-1, 31,0);
    tracep->declBus(c+7,"pc_cnt", false,-1, 3,0);
    tracep->declBit(c+35,"jalr", false,-1);
    tracep->declBit(c+36,"jal", false,-1);
    tracep->declBit(c+37,"bxx", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_t0 ");
    tracep->declBus(c+3,"lsu_cnt", false,-1, 3,0);
    tracep->declBus(c+15,"data_load", false,-1, 31,0);
    tracep->declBus(c+12,"data_store", false,-1, 31,0);
    tracep->declBus(c+14,"addr_load", false,-1, 31,0);
    tracep->declBus(c+14,"addr_store", false,-1, 31,0);
    tracep->declBus(c+38,"temp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_t0 ");
    tracep->declBit(c+72,"clk", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declBus(c+1,"pc_in", false,-1, 31,0);
    tracep->declBus(c+8,"raddr1", false,-1, 4,0);
    tracep->declBus(c+9,"raddr2", false,-1, 4,0);
    tracep->declBus(c+11,"rdata1", false,-1, 31,0);
    tracep->declBus(c+12,"rdata2", false,-1, 31,0);
    tracep->declBus(c+10,"waddr", false,-1, 4,0);
    tracep->declBus(c+13,"wdata", false,-1, 31,0);
    tracep->declBit(c+20,"ebreak", false,-1);
    tracep->declBit(c+4,"mem_cnt", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+39+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBit(c+4,"wen", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+71,"i", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ifu_pc),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__inst),32);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__lsu_cnt),4);
    bufp->fullBit(oldp+4,(((IData)(vlSelf->top__DOT__exu_t0__DOT__UType) 
                           | ((0x6fU == (0x7fU & vlSelf->top__DOT__inst)) 
                              | ((IData)(vlSelf->top__DOT__exu_t0__DOT__IType) 
                                 | (0x33U == (0x7fU 
                                              & vlSelf->top__DOT__inst)))))));
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__alu_cnt),4);
    bufp->fullCData(oldp+6,((((IData)(vlSelf->top__DOT__exu_t0__DOT__UType) 
                              << 5U) | (((0x6fU == 
                                          (0x7fU & vlSelf->top__DOT__inst)) 
                                         << 4U) | (
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__inst)) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT__exu_t0__DOT__IType) 
                                                       << 2U) 
                                                      | (((0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__inst)) 
                                                          << 1U) 
                                                         | (0x33U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__inst)))))))),6);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__pc_cnt),4);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->top__DOT__inst 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->top__DOT__inst 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelf->top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__rdata1),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__rdata2),32);
    bufp->fullIData(oldp+13,(((3U == (0x7fU & vlSelf->top__DOT__inst))
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
                                           ? ((IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_h800671aa__0)
                                               ? 1U
                                               : 0U)
                                           : ((4U == (IData)(vlSelf->top__DOT__alu_cnt))
                                               ? ((IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_h8052707d__0)
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
                                                      << (IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_he33d4997__0))
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->top__DOT__alu_cnt))
                                                       ? vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_h72228fe7__0
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->top__DOT__alu_cnt))
                                                        ? vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_h72228fe7__0
                                                        : 0U)))))))))))),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__addr_load),32);
    bufp->fullIData(oldp+15,(((4U == (IData)(vlSelf->top__DOT__lsu_cnt))
                               ? (((- (IData)((1U & 
                                               (vlSelf->top__DOT__lsu_t0__DOT__temp 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelf->top__DOT__lsu_t0__DOT__temp))
                               : ((5U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                   ? (((- (IData)((1U 
                                                   & (vlSelf->top__DOT__lsu_t0__DOT__temp 
                                                      >> 0xfU)))) 
                                       << 0x10U) | 
                                      (0xffffU & vlSelf->top__DOT__lsu_t0__DOT__temp))
                                   : ((6U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                       ? vlSelf->top__DOT__lsu_t0__DOT__temp
                                       : ((7U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                           ? (0xffU 
                                              & vlSelf->top__DOT__lsu_t0__DOT__temp)
                                           : ((8U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                               ? (0xffffU 
                                                  & vlSelf->top__DOT__lsu_t0__DOT__temp)
                                               : 0U)))))),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__imm),32);
    bufp->fullBit(oldp+17,(((1U == (IData)(vlSelf->top__DOT__pc_cnt))
                             ? (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                == vlSelf->top__DOT__exu_t0__DOT__alu_b)
                             : ((2U == (IData)(vlSelf->top__DOT__pc_cnt))
                                 ? (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                    != vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                 : ((3U == (IData)(vlSelf->top__DOT__pc_cnt))
                                     ? (IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_h800671aa__0)
                                     : ((4U == (IData)(vlSelf->top__DOT__pc_cnt))
                                         ? VL_GTES_III(32, vlSelf->top__DOT__exu_t0__DOT__alu_a, vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                         : ((5U == (IData)(vlSelf->top__DOT__pc_cnt))
                                             ? (IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_h8052707d__0)
                                             : ((6U 
                                                 == (IData)(vlSelf->top__DOT__pc_cnt)) 
                                                & (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                                   >= vlSelf->top__DOT__exu_t0__DOT__alu_b)))))))));
    bufp->fullBit(oldp+18,((0x17U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+19,((0x37U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+20,((0x100073U == vlSelf->top__DOT__inst)));
    bufp->fullBit(oldp+21,((3U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+22,((0x67U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+23,((0x6fU == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__exu_t0__DOT__UType));
    bufp->fullBit(oldp+25,((0x63U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__exu_t0__DOT__IType));
    bufp->fullBit(oldp+27,((0x23U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+28,((0x33U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__exu_t0__DOT__alu_a),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__exu_t0__DOT__alu_b),32);
    bufp->fullCData(oldp+31,((0x7fU & vlSelf->top__DOT__inst)),7);
    bufp->fullCData(oldp+32,((7U & (vlSelf->top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+33,((vlSelf->top__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+34,((0x13U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelf->top__DOT__pc_cnt) 
                                  >> 3U))));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__ifu_t0__DOT__jal));
    bufp->fullBit(oldp+37,(((~ (((IData)(vlSelf->top__DOT__pc_cnt) 
                                 >> 3U) | (IData)(vlSelf->top__DOT__ifu_t0__DOT__jal))) 
                            & (0U != (IData)(vlSelf->top__DOT__pc_cnt)))));
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__lsu_t0__DOT__temp),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__mem_t0__DOT__rf[0]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__mem_t0__DOT__rf[1]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__mem_t0__DOT__rf[2]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__mem_t0__DOT__rf[3]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__mem_t0__DOT__rf[4]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__mem_t0__DOT__rf[5]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__mem_t0__DOT__rf[6]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__mem_t0__DOT__rf[7]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__mem_t0__DOT__rf[8]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__mem_t0__DOT__rf[9]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__mem_t0__DOT__rf[10]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__mem_t0__DOT__rf[11]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__mem_t0__DOT__rf[12]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__mem_t0__DOT__rf[13]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__mem_t0__DOT__rf[14]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__mem_t0__DOT__rf[15]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__mem_t0__DOT__rf[16]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__mem_t0__DOT__rf[17]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__mem_t0__DOT__rf[18]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__mem_t0__DOT__rf[19]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__mem_t0__DOT__rf[20]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__mem_t0__DOT__rf[21]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__mem_t0__DOT__rf[22]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__mem_t0__DOT__rf[23]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__mem_t0__DOT__rf[24]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__mem_t0__DOT__rf[25]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__mem_t0__DOT__rf[26]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__mem_t0__DOT__rf[27]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__mem_t0__DOT__rf[28]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__mem_t0__DOT__rf[29]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__mem_t0__DOT__rf[30]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__mem_t0__DOT__rf[31]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__mem_t0__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+72,(vlSelf->clk));
    bufp->fullBit(oldp+73,(vlSelf->reset));
}
