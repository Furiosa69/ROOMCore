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
    tracep->declBus(c+74,"ifu_idu_inst", false,-1, 31,0);
    tracep->declBus(c+75,"lsu_pc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+72,"clk", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declBus(c+74,"ifu_idu_inst", false,-1, 31,0);
    tracep->declBus(c+75,"lsu_pc", false,-1, 31,0);
    tracep->declBit(c+15,"ifu_idu_valid", false,-1);
    tracep->declBit(c+16,"idu_ifu_ready", false,-1);
    tracep->declBit(c+17,"idu_exu_valid", false,-1);
    tracep->declBit(c+18,"exu_idu_ready", false,-1);
    tracep->declBit(c+19,"exu_mem_valid", false,-1);
    tracep->declBit(c+20,"mem_exu_ready", false,-1);
    tracep->declBit(c+21,"mem_lsu_valid", false,-1);
    tracep->declBit(c+22,"lsu_mem_ready", false,-1);
    tracep->declBus(c+23,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+24,"idu_pc", false,-1, 31,0);
    tracep->declBus(c+25,"exu_pc", false,-1, 31,0);
    tracep->declBus(c+26,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+1,"lsu_cnt", false,-1, 3,0);
    tracep->declBit(c+76,"mem_cnt", false,-1);
    tracep->declBus(c+2,"alu_cnt", false,-1, 3,0);
    tracep->declBus(c+77,"ins_cnt", false,-1, 5,0);
    tracep->declBus(c+3,"pc_cnt", false,-1, 3,0);
    tracep->declBus(c+78,"raddr1", false,-1, 4,0);
    tracep->declBus(c+79,"raddr2", false,-1, 4,0);
    tracep->declBus(c+80,"waddr", false,-1, 4,0);
    tracep->declBus(c+7,"rdata1", false,-1, 31,0);
    tracep->declBus(c+8,"rdata2", false,-1, 31,0);
    tracep->declBus(c+81,"wdata", false,-1, 31,0);
    tracep->declBus(c+9,"addr_load", false,-1, 31,0);
    tracep->declBus(c+9,"addr_store", false,-1, 31,0);
    tracep->declBus(c+10,"data_load", false,-1, 31,0);
    tracep->declBus(c+8,"data_store", false,-1, 31,0);
    tracep->declBus(c+4,"imm", false,-1, 31,0);
    tracep->declBit(c+82,"auipc", false,-1);
    tracep->declBit(c+83,"lui", false,-1);
    tracep->declBit(c+84,"ebreak", false,-1);
    tracep->declBit(c+85,"load", false,-1);
    tracep->pushNamePrefix("exu_t0 ");
    tracep->declBit(c+72,"clk", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declBus(c+24,"pc_in", false,-1, 31,0);
    tracep->declBus(c+25,"pc_out", false,-1, 31,0);
    tracep->declBus(c+3,"pc_cnt", false,-1, 3,0);
    tracep->declBus(c+2,"alu_cnt", false,-1, 3,0);
    tracep->declBit(c+82,"auipc", false,-1);
    tracep->declBit(c+83,"lui", false,-1);
    tracep->declBit(c+84,"ebreak", false,-1);
    tracep->declBit(c+85,"load", false,-1);
    tracep->declBus(c+4,"imm", false,-1, 31,0);
    tracep->declBus(c+81,"alu_result", false,-1, 31,0);
    tracep->declBus(c+7,"rdata1", false,-1, 31,0);
    tracep->declBus(c+8,"rdata2", false,-1, 31,0);
    tracep->declBus(c+10,"data_load", false,-1, 31,0);
    tracep->declBus(c+77,"ins_cnt", false,-1, 5,0);
    tracep->declBit(c+17,"idu_exu_valid", false,-1);
    tracep->declBit(c+18,"exu_idu_ready", false,-1);
    tracep->declBit(c+19,"exu_mem_valid", false,-1);
    tracep->declBit(c+20,"mem_exu_ready", false,-1);
    tracep->declBus(c+95,"IDLE", false,-1, 0,0);
    tracep->declBus(c+96,"READY", false,-1, 0,0);
    tracep->declBit(c+5,"UType", false,-1);
    tracep->declBit(c+86,"JType", false,-1);
    tracep->declBit(c+87,"BType", false,-1);
    tracep->declBit(c+6,"IType", false,-1);
    tracep->declBit(c+88,"SType", false,-1);
    tracep->declBit(c+89,"RType", false,-1);
    tracep->declBit(c+19,"c_state", false,-1);
    tracep->declBit(c+27,"n_state", false,-1);
    tracep->declBus(c+28,"pc_exu", false,-1, 31,0);
    tracep->declBus(c+11,"alu_a", false,-1, 31,0);
    tracep->declBus(c+12,"alu_b", false,-1, 31,0);
    tracep->declBit(c+13,"br_taken", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu_t0 ");
    tracep->declBit(c+72,"clk", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declBus(c+23,"pc_in", false,-1, 31,0);
    tracep->declBus(c+24,"pc_out", false,-1, 31,0);
    tracep->declBus(c+74,"inst", false,-1, 31,0);
    tracep->declBus(c+3,"pc_cnt", false,-1, 3,0);
    tracep->declBus(c+1,"lsu_cnt", false,-1, 3,0);
    tracep->declBit(c+76,"mem_cnt", false,-1);
    tracep->declBus(c+2,"alu_cnt", false,-1, 3,0);
    tracep->declBus(c+77,"ins_cnt", false,-1, 5,0);
    tracep->declBus(c+78,"rs1", false,-1, 4,0);
    tracep->declBus(c+79,"rs2", false,-1, 4,0);
    tracep->declBus(c+80,"rd", false,-1, 4,0);
    tracep->declBus(c+4,"imm", false,-1, 31,0);
    tracep->declBit(c+82,"auipc", false,-1);
    tracep->declBit(c+83,"lui", false,-1);
    tracep->declBit(c+84,"ebreak", false,-1);
    tracep->declBit(c+85,"load", false,-1);
    tracep->declBit(c+15,"ifu_idu_valid", false,-1);
    tracep->declBit(c+16,"idu_ifu_ready", false,-1);
    tracep->declBit(c+17,"idu_exu_valid", false,-1);
    tracep->declBit(c+18,"exu_idu_ready", false,-1);
    tracep->declBus(c+90,"opcode", false,-1, 6,0);
    tracep->declBus(c+91,"fun3", false,-1, 2,0);
    tracep->declBus(c+92,"fun7", false,-1, 6,0);
    tracep->declBit(c+5,"UType", false,-1);
    tracep->declBit(c+86,"JType", false,-1);
    tracep->declBit(c+87,"BType", false,-1);
    tracep->declBit(c+6,"IType", false,-1);
    tracep->declBit(c+88,"SType", false,-1);
    tracep->declBit(c+89,"RType", false,-1);
    tracep->declBit(c+93,"jalr", false,-1);
    tracep->declBit(c+94,"I_imm", false,-1);
    tracep->declBus(c+29,"pc_idu", false,-1, 31,0);
    tracep->declBus(c+95,"IDLE", false,-1, 0,0);
    tracep->declBus(c+96,"READY", false,-1, 0,0);
    tracep->declBit(c+17,"c_state", false,-1);
    tracep->declBit(c+30,"n_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_t0 ");
    tracep->declBit(c+72,"clk", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declBus(c+75,"pc_in", false,-1, 31,0);
    tracep->declBus(c+23,"pc_out", false,-1, 31,0);
    tracep->declBit(c+15,"ifu_idu_valid", false,-1);
    tracep->declBit(c+16,"idu_ifu_ready", false,-1);
    tracep->declBus(c+95,"IDLE", false,-1, 0,0);
    tracep->declBus(c+96,"READY", false,-1, 0,0);
    tracep->declBus(c+31,"pc_ifu", false,-1, 31,0);
    tracep->declBit(c+15,"c_state", false,-1);
    tracep->declBit(c+32,"n_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_t0 ");
    tracep->declBit(c+72,"clk", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declBus(c+26,"pc_in", false,-1, 31,0);
    tracep->declBus(c+75,"pc_out", false,-1, 31,0);
    tracep->declBus(c+1,"lsu_cnt", false,-1, 3,0);
    tracep->declBus(c+10,"data_load", false,-1, 31,0);
    tracep->declBus(c+8,"data_store", false,-1, 31,0);
    tracep->declBus(c+9,"addr_load", false,-1, 31,0);
    tracep->declBus(c+9,"addr_store", false,-1, 31,0);
    tracep->declBit(c+21,"mem_lsu_valid", false,-1);
    tracep->declBit(c+22,"lsu_mem_ready", false,-1);
    tracep->declBus(c+33,"pc_lsu", false,-1, 31,0);
    tracep->declBus(c+14,"temp", false,-1, 31,0);
    tracep->declBus(c+95,"IDLE", false,-1, 0,0);
    tracep->declBus(c+96,"READY", false,-1, 0,0);
    tracep->declBit(c+34,"c_state", false,-1);
    tracep->declBit(c+35,"n_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_t0 ");
    tracep->declBit(c+72,"clk", false,-1);
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declBus(c+25,"pc_in", false,-1, 31,0);
    tracep->declBus(c+26,"pc_out", false,-1, 31,0);
    tracep->declBus(c+78,"raddr1", false,-1, 4,0);
    tracep->declBus(c+79,"raddr2", false,-1, 4,0);
    tracep->declBus(c+7,"rdata1", false,-1, 31,0);
    tracep->declBus(c+8,"rdata2", false,-1, 31,0);
    tracep->declBus(c+80,"waddr", false,-1, 4,0);
    tracep->declBus(c+81,"wdata", false,-1, 31,0);
    tracep->declBit(c+76,"mem_cnt", false,-1);
    tracep->declBit(c+19,"exu_mem_valid", false,-1);
    tracep->declBit(c+20,"mem_exu_ready", false,-1);
    tracep->declBit(c+21,"mem_lsu_valid", false,-1);
    tracep->declBit(c+22,"lsu_mem_ready", false,-1);
    tracep->declBus(c+36,"pc_mem", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+37+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBit(c+76,"wen", false,-1);
    tracep->declBus(c+97,"IDLE", false,-1, 1,0);
    tracep->declBus(c+98,"WORK", false,-1, 1,0);
    tracep->declBus(c+99,"READY", false,-1, 1,0);
    tracep->declBus(c+69,"c_state", false,-1, 1,0);
    tracep->declBus(c+70,"n_state", false,-1, 1,0);
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
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__lsu_cnt),4);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__alu_cnt),4);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__pc_cnt),4);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__imm),32);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__exu_t0__DOT__UType));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__exu_t0__DOT__IType));
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__rdata1),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__rdata2),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__addr_load),32);
    bufp->fullIData(oldp+10,(((4U == (IData)(vlSelf->top__DOT__lsu_cnt))
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
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__exu_t0__DOT__alu_a),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__exu_t0__DOT__alu_b),32);
    bufp->fullBit(oldp+13,(((1U == (IData)(vlSelf->top__DOT__pc_cnt))
                             ? (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                == vlSelf->top__DOT__exu_t0__DOT__alu_b)
                             : ((2U == (IData)(vlSelf->top__DOT__pc_cnt))
                                 ? (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                    != vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                 : ((3U == (IData)(vlSelf->top__DOT__pc_cnt))
                                     ? (IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_hb68cf044__0)
                                     : ((4U == (IData)(vlSelf->top__DOT__pc_cnt))
                                         ? VL_GTES_III(32, vlSelf->top__DOT__exu_t0__DOT__alu_a, vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                         : ((5U == (IData)(vlSelf->top__DOT__pc_cnt))
                                             ? (IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_hb6985176__0)
                                             : ((6U 
                                                 == (IData)(vlSelf->top__DOT__pc_cnt)) 
                                                & (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                                   >= vlSelf->top__DOT__exu_t0__DOT__alu_b)))))))));
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__lsu_t0__DOT__temp),32);
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__ifu_t0__DOT__c_state));
    bufp->fullBit(oldp+16,((1U & (~ (IData)(vlSelf->top__DOT__idu_t0__DOT__c_state)))));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__idu_t0__DOT__c_state));
    bufp->fullBit(oldp+18,((1U & (~ (IData)(vlSelf->top__DOT__exu_t0__DOT__c_state)))));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__exu_t0__DOT__c_state));
    bufp->fullBit(oldp+20,((0U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state))));
    bufp->fullBit(oldp+21,((2U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state))));
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->top__DOT__lsu_t0__DOT__c_state)))));
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__ifu_pc),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__idu_pc),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__exu_pc),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__mem_pc),32);
    bufp->fullBit(oldp+27,(((IData)(vlSelf->top__DOT__exu_t0__DOT__c_state)
                             ? ((IData)(vlSelf->top__DOT__exu_t0__DOT__c_state) 
                                & (0U != (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state)))
                             : (IData)(vlSelf->top__DOT__idu_t0__DOT__c_state))));
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__exu_t0__DOT__pc_exu),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__idu_t0__DOT__pc_idu),32);
    bufp->fullBit(oldp+30,(((IData)(vlSelf->top__DOT__idu_t0__DOT__c_state)
                             ? ((IData)(vlSelf->top__DOT__idu_t0__DOT__c_state) 
                                & (IData)(vlSelf->top__DOT__exu_t0__DOT__c_state))
                             : (IData)(vlSelf->top__DOT__ifu_t0__DOT__c_state))));
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__ifu_t0__DOT__pc_ifu),32);
    bufp->fullBit(oldp+32,((1U & ((~ (IData)(vlSelf->top__DOT__ifu_t0__DOT__c_state)) 
                                  & (~ (IData)(vlSelf->top__DOT__idu_t0__DOT__c_state))))));
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__lsu_t0__DOT__pc_lsu),32);
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__lsu_t0__DOT__c_state));
    bufp->fullBit(oldp+35,(((~ (IData)(vlSelf->top__DOT__lsu_t0__DOT__c_state)) 
                            & (2U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state)))));
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__mem_t0__DOT__pc_mem),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__mem_t0__DOT__rf[0]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__mem_t0__DOT__rf[1]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__mem_t0__DOT__rf[2]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__mem_t0__DOT__rf[3]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__mem_t0__DOT__rf[4]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__mem_t0__DOT__rf[5]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__mem_t0__DOT__rf[6]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__mem_t0__DOT__rf[7]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__mem_t0__DOT__rf[8]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__mem_t0__DOT__rf[9]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__mem_t0__DOT__rf[10]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__mem_t0__DOT__rf[11]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__mem_t0__DOT__rf[12]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__mem_t0__DOT__rf[13]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__mem_t0__DOT__rf[14]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__mem_t0__DOT__rf[15]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__mem_t0__DOT__rf[16]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__mem_t0__DOT__rf[17]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__mem_t0__DOT__rf[18]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__mem_t0__DOT__rf[19]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__mem_t0__DOT__rf[20]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__mem_t0__DOT__rf[21]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__mem_t0__DOT__rf[22]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__mem_t0__DOT__rf[23]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__mem_t0__DOT__rf[24]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__mem_t0__DOT__rf[25]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__mem_t0__DOT__rf[26]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__mem_t0__DOT__rf[27]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__mem_t0__DOT__rf[28]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__mem_t0__DOT__rf[29]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__mem_t0__DOT__rf[30]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__mem_t0__DOT__rf[31]),32);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__mem_t0__DOT__c_state),2);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__mem_t0__DOT__n_state),2);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__mem_t0__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+72,(vlSelf->clk));
    bufp->fullBit(oldp+73,(vlSelf->reset));
    bufp->fullIData(oldp+74,(vlSelf->ifu_idu_inst),32);
    bufp->fullIData(oldp+75,(vlSelf->lsu_pc),32);
    bufp->fullBit(oldp+76,(((IData)(vlSelf->top__DOT__exu_t0__DOT__UType) 
                            | ((0x6fU == (0x7fU & vlSelf->ifu_idu_inst)) 
                               | ((IData)(vlSelf->top__DOT__exu_t0__DOT__IType) 
                                  | (0x33U == (0x7fU 
                                               & vlSelf->ifu_idu_inst)))))));
    bufp->fullCData(oldp+77,((((IData)(vlSelf->top__DOT__exu_t0__DOT__UType) 
                               << 5U) | (((0x6fU == 
                                           (0x7fU & vlSelf->ifu_idu_inst)) 
                                          << 4U) | 
                                         (((0x63U == 
                                            (0x7fU 
                                             & vlSelf->ifu_idu_inst)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT__exu_t0__DOT__IType) 
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
    bufp->fullCData(oldp+78,((0x1fU & (vlSelf->ifu_idu_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+79,((0x1fU & (vlSelf->ifu_idu_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+80,((0x1fU & (vlSelf->ifu_idu_inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+81,(((3U == (0x7fU & vlSelf->ifu_idu_inst))
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
                                               ? 1U
                                               : 0U)
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
    bufp->fullBit(oldp+82,((0x17U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->fullBit(oldp+83,((0x37U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->fullBit(oldp+84,((0x100073U == vlSelf->ifu_idu_inst)));
    bufp->fullBit(oldp+85,((3U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->fullBit(oldp+86,((0x6fU == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->fullBit(oldp+87,((0x63U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->fullBit(oldp+88,((0x23U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->fullBit(oldp+89,((0x33U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->fullCData(oldp+90,((0x7fU & vlSelf->ifu_idu_inst)),7);
    bufp->fullCData(oldp+91,((7U & (vlSelf->ifu_idu_inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+92,((vlSelf->ifu_idu_inst 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+93,((0x67U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->fullBit(oldp+94,((0x13U == (0x7fU & vlSelf->ifu_idu_inst))));
    bufp->fullBit(oldp+95,(0U));
    bufp->fullBit(oldp+96,(1U));
    bufp->fullCData(oldp+97,(0U),2);
    bufp->fullCData(oldp+98,(1U),2);
    bufp->fullCData(oldp+99,(2U),2);
}
