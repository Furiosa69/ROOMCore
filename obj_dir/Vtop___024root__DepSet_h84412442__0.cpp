// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ size, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ size);

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__pc_cnt = ((0x63U == (0x7fU & vlSelf->ifu_idu_inst))
                                 ? ((0U == (7U & (vlSelf->ifu_idu_inst 
                                                  >> 0xcU)))
                                     ? 1U : ((1U == 
                                              (7U & 
                                               (vlSelf->ifu_idu_inst 
                                                >> 0xcU)))
                                              ? 2U : 
                                             ((4U == 
                                               (7U 
                                                & (vlSelf->ifu_idu_inst 
                                                   >> 0xcU)))
                                               ? 3U
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ifu_idu_inst 
                                                       >> 0xcU)))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ifu_idu_inst 
                                                        >> 0xcU)))
                                                    ? 5U
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ifu_idu_inst 
                                                         >> 0xcU)))
                                                     ? 6U
                                                     : 0U))))))
                                 : ((0x6fU == (0x7fU 
                                               & vlSelf->ifu_idu_inst))
                                     ? 7U : ((0x67U 
                                              == (0x7fU 
                                                  & vlSelf->ifu_idu_inst))
                                              ? 8U : 0U)));
    vlSelf->top__DOT__idu_t0__DOT____VdfgTmp_h5d003edb__0 
        = ((2U == (7U & (vlSelf->ifu_idu_inst >> 0xcU)))
            ? 3U : ((3U == (7U & (vlSelf->ifu_idu_inst 
                                  >> 0xcU))) ? 4U : 
                    ((7U == (7U & (vlSelf->ifu_idu_inst 
                                   >> 0xcU))) ? 5U : 
                     ((6U == (7U & (vlSelf->ifu_idu_inst 
                                    >> 0xcU))) ? 6U
                       : ((4U == (7U & (vlSelf->ifu_idu_inst 
                                        >> 0xcU))) ? 7U
                           : ((1U == (7U & (vlSelf->ifu_idu_inst 
                                            >> 0xcU)))
                               ? 8U : ((5U == (7U & 
                                               (vlSelf->ifu_idu_inst 
                                                >> 0xcU)))
                                        ? ((0U == (vlSelf->ifu_idu_inst 
                                                   >> 0x19U))
                                            ? 9U : 0xaU)
                                        : 0U)))))));
    vlSelf->top__DOT__lsu_cnt = ((0x23U == (0x7fU & vlSelf->ifu_idu_inst))
                                  ? ((0U == (7U & (vlSelf->ifu_idu_inst 
                                                   >> 0xcU)))
                                      ? 1U : ((1U == 
                                               (7U 
                                                & (vlSelf->ifu_idu_inst 
                                                   >> 0xcU)))
                                               ? 2U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ifu_idu_inst 
                                                       >> 0xcU)))
                                                   ? 3U
                                                   : 0U)))
                                  : ((3U == (0x7fU 
                                             & vlSelf->ifu_idu_inst))
                                      ? ((0U == (7U 
                                                 & (vlSelf->ifu_idu_inst 
                                                    >> 0xcU)))
                                          ? 4U : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ifu_idu_inst 
                                                       >> 0xcU)))
                                                   ? 5U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ifu_idu_inst 
                                                        >> 0xcU)))
                                                    ? 6U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ifu_idu_inst 
                                                         >> 0xcU)))
                                                     ? 7U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ifu_idu_inst 
                                                          >> 0xcU)))
                                                      ? 8U
                                                      : 0U)))))
                                      : 0U));
    vlSelf->top__DOT__rdata2 = ((0U == (0x1fU & (vlSelf->ifu_idu_inst 
                                                 >> 0x14U)))
                                 ? 0U : vlSelf->top__DOT__mem_t0__DOT__rf
                                [(0x1fU & (vlSelf->ifu_idu_inst 
                                           >> 0x14U))]);
    vlSelf->top__DOT__rdata1 = ((0U == (0x1fU & (vlSelf->ifu_idu_inst 
                                                 >> 0xfU)))
                                 ? 0U : vlSelf->top__DOT__mem_t0__DOT__rf
                                [(0x1fU & (vlSelf->ifu_idu_inst 
                                           >> 0xfU))]);
    vlSelf->top__DOT__exu_t0__DOT__UType = ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->ifu_idu_inst)) 
                                            | (0x37U 
                                               == (0x7fU 
                                                   & vlSelf->ifu_idu_inst)));
    vlSelf->top__DOT__exu_t0__DOT__IType = ((0x67U 
                                             == (0x7fU 
                                                 & vlSelf->ifu_idu_inst)) 
                                            | ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ifu_idu_inst)) 
                                               | (0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ifu_idu_inst))));
    vlSelf->top__DOT__alu_cnt = ((0x33U == (0x7fU & vlSelf->ifu_idu_inst))
                                  ? ((0U == (7U & (vlSelf->ifu_idu_inst 
                                                   >> 0xcU)))
                                      ? ((0U == (vlSelf->ifu_idu_inst 
                                                 >> 0x19U))
                                          ? 1U : 2U)
                                      : (IData)(vlSelf->top__DOT__idu_t0__DOT____VdfgTmp_h5d003edb__0))
                                  : ((0x13U == (0x7fU 
                                                & vlSelf->ifu_idu_inst))
                                      ? ((0U == (7U 
                                                 & (vlSelf->ifu_idu_inst 
                                                    >> 0xcU)))
                                          ? 1U : (IData)(vlSelf->top__DOT__idu_t0__DOT____VdfgTmp_h5d003edb__0))
                                      : 0U));
    vlSelf->top__DOT__exu_t0__DOT__alu_a = ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->ifu_idu_inst))
                                             ? vlSelf->top__DOT__exu_t0__DOT__pc_exu
                                             : ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ifu_idu_inst))
                                                 ? 0U
                                                 : vlSelf->top__DOT__rdata1));
    vlSelf->top__DOT__imm = (((- (IData)((0x6fU == 
                                          (0x7fU & vlSelf->ifu_idu_inst)))) 
                              & (((- (IData)((vlSelf->ifu_idu_inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ifu_idu_inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ifu_idu_inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ifu_idu_inst 
                                                        >> 0x14U)))))) 
                             | ((0xfffff000U & ((- (IData)((IData)(vlSelf->top__DOT__exu_t0__DOT__UType))) 
                                                & vlSelf->ifu_idu_inst)) 
                                | (((- (IData)((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ifu_idu_inst)))) 
                                    & (((- (IData)(
                                                   (vlSelf->ifu_idu_inst 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       ((0x1000U & 
                                         (vlSelf->ifu_idu_inst 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->ifu_idu_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->ifu_idu_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->ifu_idu_inst 
                                                    >> 7U))))))) 
                                   | (((- (IData)((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ifu_idu_inst)))) 
                                       & (((- (IData)(
                                                      (vlSelf->ifu_idu_inst 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | ((0xfe0U 
                                              & (vlSelf->ifu_idu_inst 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ifu_idu_inst 
                                                   >> 7U))))) 
                                      | ((- (IData)((IData)(vlSelf->top__DOT__exu_t0__DOT__IType))) 
                                         & (((- (IData)(
                                                        (vlSelf->ifu_idu_inst 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->ifu_idu_inst 
                                               >> 0x14U)))))));
    vlSelf->top__DOT__exu_t0__DOT__alu_b = (((IData)(vlSelf->top__DOT__exu_t0__DOT__UType) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ifu_idu_inst)) 
                                                | (IData)(vlSelf->top__DOT__exu_t0__DOT__IType)))
                                             ? vlSelf->top__DOT__imm
                                             : (((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ifu_idu_inst)) 
                                                 | ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ifu_idu_inst)) 
                                                    | (0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ifu_idu_inst))))
                                                 ? vlSelf->top__DOT__rdata2
                                                 : 0U));
    vlSelf->top__DOT__addr_load = (vlSelf->top__DOT__imm 
                                   + vlSelf->top__DOT__rdata1);
    vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_hb68cf044__0 
        = VL_LTS_III(32, vlSelf->top__DOT__exu_t0__DOT__alu_a, vlSelf->top__DOT__exu_t0__DOT__alu_b);
    vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_hb6985176__0 
        = (vlSelf->top__DOT__exu_t0__DOT__alu_a < vlSelf->top__DOT__exu_t0__DOT__alu_b);
    vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_h4d3eedd5__0 
        = (vlSelf->top__DOT__exu_t0__DOT__alu_a >> 
           (0x1fU & vlSelf->top__DOT__exu_t0__DOT__alu_b));
    if (((~ (IData)(vlSelf->top__DOT__lsu_t0__DOT__c_state)) 
         & (2U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state)))) {
        if ((8U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lsu_cnt) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__lsu_cnt) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__lsu_cnt)))) {
                        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__addr_load, 2U, vlSelf->__Vfunc_pmem_read__1__Vfuncout);
                        vlSelf->top__DOT__lsu_t0__DOT__temp 
                            = vlSelf->__Vfunc_pmem_read__1__Vfuncout;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
            if ((2U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
                if ((1U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
                    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__addr_load, 1U, vlSelf->__Vfunc_pmem_read__2__Vfuncout);
                    vlSelf->top__DOT__lsu_t0__DOT__temp 
                        = vlSelf->__Vfunc_pmem_read__2__Vfuncout;
                } else {
                    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__addr_load, 4U, vlSelf->__Vfunc_pmem_read__3__Vfuncout);
                    vlSelf->top__DOT__lsu_t0__DOT__temp 
                        = vlSelf->__Vfunc_pmem_read__3__Vfuncout;
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__addr_load, 2U, vlSelf->__Vfunc_pmem_read__4__Vfuncout);
                vlSelf->top__DOT__lsu_t0__DOT__temp 
                    = vlSelf->__Vfunc_pmem_read__4__Vfuncout;
            } else {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__addr_load, 1U, vlSelf->__Vfunc_pmem_read__5__Vfuncout);
                vlSelf->top__DOT__lsu_t0__DOT__temp 
                    = vlSelf->__Vfunc_pmem_read__5__Vfuncout;
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
            if ((1U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
                Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__addr_load, vlSelf->top__DOT__rdata2, 4U);
            } else {
                Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__addr_load, vlSelf->top__DOT__rdata2, 2U);
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
            Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__addr_load, vlSelf->top__DOT__rdata2, 1U);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_npctrap_TOP____024unit();
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hba7eb94a_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__top__DOT__ifu_t0__DOT__pc_ifu;
    __Vdly__top__DOT__ifu_t0__DOT__pc_ifu = 0;
    IData/*31:0*/ __Vdly__top__DOT__idu_t0__DOT__pc_idu;
    __Vdly__top__DOT__idu_t0__DOT__pc_idu = 0;
    IData/*31:0*/ __Vdly__top__DOT__idu_pc;
    __Vdly__top__DOT__idu_pc = 0;
    IData/*31:0*/ __Vdly__top__DOT__exu_t0__DOT__pc_exu;
    __Vdly__top__DOT__exu_t0__DOT__pc_exu = 0;
    CData/*0:0*/ __Vdly__top__DOT__exu_t0__DOT__c_state;
    __Vdly__top__DOT__exu_t0__DOT__c_state = 0;
    IData/*31:0*/ __Vdly__top__DOT__mem_t0__DOT__pc_mem;
    __Vdly__top__DOT__mem_t0__DOT__pc_mem = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_t0__DOT__rf__v0;
    __Vdlyvset__top__DOT__mem_t0__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__mem_t0__DOT__rf__v31;
    __Vdlyvdim0__top__DOT__mem_t0__DOT__rf__v31 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__mem_t0__DOT__rf__v31;
    __Vdlyvval__top__DOT__mem_t0__DOT__rf__v31 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_t0__DOT__rf__v31;
    __Vdlyvset__top__DOT__mem_t0__DOT__rf__v31 = 0;
    IData/*31:0*/ __Vdly__top__DOT__lsu_t0__DOT__pc_lsu;
    __Vdly__top__DOT__lsu_t0__DOT__pc_lsu = 0;
    // Body
    __Vdly__top__DOT__exu_t0__DOT__pc_exu = vlSelf->top__DOT__exu_t0__DOT__pc_exu;
    __Vdly__top__DOT__exu_t0__DOT__c_state = vlSelf->top__DOT__exu_t0__DOT__c_state;
    __Vdly__top__DOT__mem_t0__DOT__pc_mem = vlSelf->top__DOT__mem_t0__DOT__pc_mem;
    __Vdlyvset__top__DOT__mem_t0__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__mem_t0__DOT__rf__v31 = 0U;
    __Vdly__top__DOT__lsu_t0__DOT__pc_lsu = vlSelf->top__DOT__lsu_t0__DOT__pc_lsu;
    __Vdly__top__DOT__ifu_t0__DOT__pc_ifu = vlSelf->top__DOT__ifu_t0__DOT__pc_ifu;
    __Vdly__top__DOT__idu_pc = vlSelf->top__DOT__idu_pc;
    __Vdly__top__DOT__idu_t0__DOT__pc_idu = vlSelf->top__DOT__idu_t0__DOT__pc_idu;
    if (vlSelf->reset) {
        vlSelf->top__DOT__mem_t0__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdly__top__DOT__idu_t0__DOT__pc_idu = 0x80000000U;
        vlSelf->top__DOT__idu_t0__DOT__pc_idu = __Vdly__top__DOT__idu_t0__DOT__pc_idu;
        __Vdly__top__DOT__ifu_t0__DOT__pc_ifu = 0x80000000U;
    } else {
        if (vlSelf->top__DOT__idu_t0__DOT__c_state) {
            if (vlSelf->top__DOT__idu_t0__DOT__c_state) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__exu_t0__DOT__c_state)))) {
                    __Vdly__top__DOT__idu_pc = vlSelf->top__DOT__idu_t0__DOT__pc_idu;
                }
            }
        } else if (vlSelf->top__DOT__ifu_t0__DOT__c_state) {
            __Vdly__top__DOT__idu_t0__DOT__pc_idu = vlSelf->top__DOT__ifu_pc;
        }
        vlSelf->top__DOT__idu_t0__DOT__pc_idu = __Vdly__top__DOT__idu_t0__DOT__pc_idu;
        if (vlSelf->top__DOT__ifu_t0__DOT__c_state) {
            if (vlSelf->top__DOT__ifu_t0__DOT__c_state) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__idu_t0__DOT__c_state)))) {
                    vlSelf->top__DOT__ifu_pc = vlSelf->top__DOT__ifu_t0__DOT__pc_ifu;
                }
            }
        } else {
            __Vdly__top__DOT__ifu_t0__DOT__pc_ifu = vlSelf->lsu_pc;
        }
    }
    vlSelf->top__DOT__ifu_t0__DOT__pc_ifu = __Vdly__top__DOT__ifu_t0__DOT__pc_ifu;
    vlSelf->top__DOT__ifu_t0__DOT__c_state = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->top__DOT__ifu_t0__DOT__n_state));
    if (vlSelf->reset) {
        __Vdly__top__DOT__lsu_t0__DOT__pc_lsu = 0x80000000U;
        vlSelf->top__DOT__lsu_t0__DOT__pc_lsu = __Vdly__top__DOT__lsu_t0__DOT__pc_lsu;
        __Vdly__top__DOT__mem_t0__DOT__pc_mem = 0x80000000U;
        __Vdlyvset__top__DOT__mem_t0__DOT__rf__v0 = 1U;
    } else {
        if (vlSelf->top__DOT__lsu_t0__DOT__c_state) {
            if (vlSelf->top__DOT__lsu_t0__DOT__c_state) {
                vlSelf->lsu_pc = vlSelf->top__DOT__lsu_t0__DOT__pc_lsu;
            }
        } else if ((2U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state))) {
            __Vdly__top__DOT__lsu_t0__DOT__pc_lsu = vlSelf->top__DOT__mem_pc;
        }
        vlSelf->top__DOT__lsu_t0__DOT__pc_lsu = __Vdly__top__DOT__lsu_t0__DOT__pc_lsu;
        if ((0U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state))) {
            if (vlSelf->top__DOT__exu_t0__DOT__c_state) {
                __Vdly__top__DOT__mem_t0__DOT__pc_mem 
                    = vlSelf->top__DOT__exu_pc;
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state))) {
            if ((((IData)(vlSelf->top__DOT__exu_t0__DOT__UType) 
                  | ((0x6fU == (0x7fU & vlSelf->ifu_idu_inst)) 
                     | ((IData)(vlSelf->top__DOT__exu_t0__DOT__IType) 
                        | (0x33U == (0x7fU & vlSelf->ifu_idu_inst))))) 
                 & (0U != (0x1fU & (vlSelf->ifu_idu_inst 
                                    >> 7U))))) {
                __Vdlyvval__top__DOT__mem_t0__DOT__rf__v31 
                    = ((3U == (0x7fU & vlSelf->ifu_idu_inst))
                        ? ((4U == (IData)(vlSelf->top__DOT__lsu_cnt))
                            ? (((- (IData)((1U & (vlSelf->top__DOT__lsu_t0__DOT__temp 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->top__DOT__lsu_t0__DOT__temp))
                            : ((5U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                ? (((- (IData)((1U 
                                                & (vlSelf->top__DOT__lsu_t0__DOT__temp 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->top__DOT__lsu_t0__DOT__temp))
                                : ((6U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                    ? vlSelf->top__DOT__lsu_t0__DOT__temp
                                    : ((7U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                        ? (0xffU & vlSelf->top__DOT__lsu_t0__DOT__temp)
                                        : ((8U == (IData)(vlSelf->top__DOT__lsu_cnt))
                                            ? (0xffffU 
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
                                        ? 1U : 0U) : 
                                   ((4U == (IData)(vlSelf->top__DOT__alu_cnt))
                                     ? ((IData)(vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_hb6985176__0)
                                         ? 1U : 0U)
                                     : ((5U == (IData)(vlSelf->top__DOT__alu_cnt))
                                         ? (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                            & vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                         : ((6U == (IData)(vlSelf->top__DOT__alu_cnt))
                                             ? (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                                | vlSelf->top__DOT__exu_t0__DOT__alu_b)
                                             : ((7U 
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
                                                    : 0U)))))))))));
                __Vdlyvset__top__DOT__mem_t0__DOT__rf__v31 = 1U;
                __Vdlyvdim0__top__DOT__mem_t0__DOT__rf__v31 
                    = (0x1fU & (vlSelf->ifu_idu_inst 
                                >> 7U));
            }
        } else if ((2U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__lsu_t0__DOT__c_state)))) {
                vlSelf->top__DOT__mem_pc = vlSelf->top__DOT__mem_t0__DOT__pc_mem;
            }
        }
    }
    vlSelf->top__DOT__mem_t0__DOT__pc_mem = __Vdly__top__DOT__mem_t0__DOT__pc_mem;
    if (__Vdlyvset__top__DOT__mem_t0__DOT__rf__v0) {
        vlSelf->top__DOT__mem_t0__DOT__rf[1U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[2U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[3U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[4U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[5U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[6U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[7U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[8U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[9U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0xaU] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0xbU] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0xcU] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0xdU] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0xeU] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0xfU] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x10U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x11U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x12U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x13U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x14U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x15U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x16U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x17U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x18U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x19U] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x1aU] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x1bU] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x1cU] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x1dU] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x1eU] = 0U;
        vlSelf->top__DOT__mem_t0__DOT__rf[0x1fU] = 0U;
    }
    if (__Vdlyvset__top__DOT__mem_t0__DOT__rf__v31) {
        vlSelf->top__DOT__mem_t0__DOT__rf[__Vdlyvdim0__top__DOT__mem_t0__DOT__rf__v31] 
            = __Vdlyvval__top__DOT__mem_t0__DOT__rf__v31;
    }
    vlSelf->top__DOT__rdata2 = ((0U == (0x1fU & (vlSelf->ifu_idu_inst 
                                                 >> 0x14U)))
                                 ? 0U : vlSelf->top__DOT__mem_t0__DOT__rf
                                [(0x1fU & (vlSelf->ifu_idu_inst 
                                           >> 0x14U))]);
    vlSelf->top__DOT__rdata1 = ((0U == (0x1fU & (vlSelf->ifu_idu_inst 
                                                 >> 0xfU)))
                                 ? 0U : vlSelf->top__DOT__mem_t0__DOT__rf
                                [(0x1fU & (vlSelf->ifu_idu_inst 
                                           >> 0xfU))]);
    vlSelf->top__DOT__lsu_t0__DOT__c_state = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->top__DOT__lsu_t0__DOT__n_state));
    if (vlSelf->reset) {
        __Vdly__top__DOT__exu_t0__DOT__pc_exu = 0x80000000U;
        __Vdly__top__DOT__exu_t0__DOT__c_state = 0U;
    } else {
        if (vlSelf->top__DOT__exu_t0__DOT__c_state) {
            if (vlSelf->top__DOT__exu_t0__DOT__c_state) {
                if ((0U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state))) {
                    vlSelf->top__DOT__exu_pc = vlSelf->top__DOT__exu_t0__DOT__pc_exu;
                }
            }
        } else if (vlSelf->top__DOT__idu_t0__DOT__c_state) {
            if ((0x100073U == vlSelf->ifu_idu_inst)) {
                Vtop___024unit____Vdpiimwrap_npctrap_TOP____024unit();
            }
            __Vdly__top__DOT__exu_t0__DOT__pc_exu = 
                ((0x63U == (0x7fU & vlSelf->ifu_idu_inst))
                  ? (((1U == (IData)(vlSelf->top__DOT__pc_cnt))
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
                                       : ((6U == (IData)(vlSelf->top__DOT__pc_cnt)) 
                                          & (vlSelf->top__DOT__exu_t0__DOT__alu_a 
                                             >= vlSelf->top__DOT__exu_t0__DOT__alu_b)))))))
                      ? (vlSelf->top__DOT__idu_pc + vlSelf->top__DOT__imm)
                      : ((IData)(4U) + vlSelf->top__DOT__idu_pc))
                  : ((0x6fU == (0x7fU & vlSelf->ifu_idu_inst))
                      ? (vlSelf->top__DOT__idu_pc + vlSelf->top__DOT__imm)
                      : ((IData)(4U) + vlSelf->top__DOT__idu_pc)));
        }
        __Vdly__top__DOT__exu_t0__DOT__c_state = vlSelf->top__DOT__exu_t0__DOT__n_state;
    }
    vlSelf->top__DOT__mem_t0__DOT__c_state = ((IData)(vlSelf->reset)
                                               ? 0U
                                               : (IData)(vlSelf->top__DOT__mem_t0__DOT__n_state));
    vlSelf->top__DOT__idu_pc = __Vdly__top__DOT__idu_pc;
    vlSelf->top__DOT__exu_t0__DOT__pc_exu = __Vdly__top__DOT__exu_t0__DOT__pc_exu;
    vlSelf->top__DOT__exu_t0__DOT__c_state = __Vdly__top__DOT__exu_t0__DOT__c_state;
    vlSelf->top__DOT__exu_t0__DOT__alu_a = ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->ifu_idu_inst))
                                             ? vlSelf->top__DOT__exu_t0__DOT__pc_exu
                                             : ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ifu_idu_inst))
                                                 ? 0U
                                                 : vlSelf->top__DOT__rdata1));
    vlSelf->top__DOT__idu_t0__DOT__c_state = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->top__DOT__idu_t0__DOT__n_state));
    vlSelf->top__DOT__ifu_t0__DOT__n_state = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__ifu_t0__DOT__c_state)) 
                                               & (~ (IData)(vlSelf->top__DOT__idu_t0__DOT__c_state))));
    vlSelf->top__DOT__idu_t0__DOT__n_state = ((IData)(vlSelf->top__DOT__idu_t0__DOT__c_state)
                                               ? ((IData)(vlSelf->top__DOT__idu_t0__DOT__c_state) 
                                                  & (IData)(vlSelf->top__DOT__exu_t0__DOT__c_state))
                                               : (IData)(vlSelf->top__DOT__ifu_t0__DOT__c_state));
    vlSelf->top__DOT__lsu_t0__DOT__n_state = ((~ (IData)(vlSelf->top__DOT__lsu_t0__DOT__c_state)) 
                                              & (2U 
                                                 == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state)));
    vlSelf->top__DOT__exu_t0__DOT__n_state = ((IData)(vlSelf->top__DOT__exu_t0__DOT__c_state)
                                               ? ((IData)(vlSelf->top__DOT__exu_t0__DOT__c_state) 
                                                  & (0U 
                                                     != (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state)))
                                               : (IData)(vlSelf->top__DOT__idu_t0__DOT__c_state));
    vlSelf->__Vtableidx1 = ((8U & ((~ (IData)(vlSelf->top__DOT__lsu_t0__DOT__c_state)) 
                                   << 3U)) | (((IData)(vlSelf->top__DOT__exu_t0__DOT__c_state) 
                                               << 2U) 
                                              | (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state)));
    vlSelf->top__DOT__mem_t0__DOT__n_state = Vtop__ConstPool__TABLE_hba7eb94a_0
        [vlSelf->__Vtableidx1];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__exu_t0__DOT__alu_b = (((IData)(vlSelf->top__DOT__exu_t0__DOT__UType) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ifu_idu_inst)) 
                                                | (IData)(vlSelf->top__DOT__exu_t0__DOT__IType)))
                                             ? vlSelf->top__DOT__imm
                                             : (((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ifu_idu_inst)) 
                                                 | ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ifu_idu_inst)) 
                                                    | (0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ifu_idu_inst))))
                                                 ? vlSelf->top__DOT__rdata2
                                                 : 0U));
    vlSelf->top__DOT__addr_load = (vlSelf->top__DOT__imm 
                                   + vlSelf->top__DOT__rdata1);
    vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_hb68cf044__0 
        = VL_LTS_III(32, vlSelf->top__DOT__exu_t0__DOT__alu_a, vlSelf->top__DOT__exu_t0__DOT__alu_b);
    vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_hb6985176__0 
        = (vlSelf->top__DOT__exu_t0__DOT__alu_a < vlSelf->top__DOT__exu_t0__DOT__alu_b);
    vlSelf->top__DOT__exu_t0__DOT____VdfgTmp_h4d3eedd5__0 
        = (vlSelf->top__DOT__exu_t0__DOT__alu_a >> 
           (0x1fU & vlSelf->top__DOT__exu_t0__DOT__alu_b));
    if (((~ (IData)(vlSelf->top__DOT__lsu_t0__DOT__c_state)) 
         & (2U == (IData)(vlSelf->top__DOT__mem_t0__DOT__c_state)))) {
        if ((8U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__lsu_cnt) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__lsu_cnt) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->top__DOT__lsu_cnt)))) {
                        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__addr_load, 2U, vlSelf->__Vfunc_pmem_read__1__Vfuncout);
                        vlSelf->top__DOT__lsu_t0__DOT__temp 
                            = vlSelf->__Vfunc_pmem_read__1__Vfuncout;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
            if ((2U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
                if ((1U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
                    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__addr_load, 1U, vlSelf->__Vfunc_pmem_read__2__Vfuncout);
                    vlSelf->top__DOT__lsu_t0__DOT__temp 
                        = vlSelf->__Vfunc_pmem_read__2__Vfuncout;
                } else {
                    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__addr_load, 4U, vlSelf->__Vfunc_pmem_read__3__Vfuncout);
                    vlSelf->top__DOT__lsu_t0__DOT__temp 
                        = vlSelf->__Vfunc_pmem_read__3__Vfuncout;
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__addr_load, 2U, vlSelf->__Vfunc_pmem_read__4__Vfuncout);
                vlSelf->top__DOT__lsu_t0__DOT__temp 
                    = vlSelf->__Vfunc_pmem_read__4__Vfuncout;
            } else {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__addr_load, 1U, vlSelf->__Vfunc_pmem_read__5__Vfuncout);
                vlSelf->top__DOT__lsu_t0__DOT__temp 
                    = vlSelf->__Vfunc_pmem_read__5__Vfuncout;
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
            if ((1U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
                Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__addr_load, vlSelf->top__DOT__rdata2, 4U);
            } else {
                Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__addr_load, vlSelf->top__DOT__rdata2, 2U);
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__lsu_cnt))) {
            Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__addr_load, vlSelf->top__DOT__rdata2, 1U);
        }
    }
}
