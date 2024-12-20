// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" int pmem_read(int rs1);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(IData/*31:0*/ rs1, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP\n"); );
    // Body
    int rs1__Vcvt;
    for (size_t rs1__Vidx = 0; rs1__Vidx < 1; ++rs1__Vidx) rs1__Vcvt = rs1;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(rs1__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

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

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT____Vtogcov__rst))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rst = vlSelf->rst;
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
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_top__DOT__pmem_read__0__Vfuncout;
    __Vfunc_top__DOT__pmem_read__0__Vfuncout = 0;
    // Body
    vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->rst) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vcellout__i0____pinNumber4 = 0U;
    } else {
        vlSelf->top__DOT____Vcellout__i0____pinNumber4 
            = vlSelf->top__DOT__pc;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__rs1_data = 0U;
    } else {
        Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(vlSelf->top__DOT__rs1, __Vfunc_top__DOT__pmem_read__0__Vfuncout);
        vlSelf->top__DOT__rs1_data = __Vfunc_top__DOT__pmem_read__0__Vfuncout;
    }
    if ((1U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
               ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfffffffeU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (1U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((2U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
               ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfffffffdU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (2U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((4U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
               ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfffffffbU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (4U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((8U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
               ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfffffff7U & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (8U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x10U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                  ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xffffffefU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x10U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x20U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                  ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xffffffdfU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x20U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x40U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                  ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xffffffbfU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x40U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x80U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                  ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xffffff7fU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x80U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x100U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                   ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfffffeffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x100U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x200U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                   ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfffffdffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x200U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x400U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                   ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfffffbffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x400U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x800U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                   ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfffff7ffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x800U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x1000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                    ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xffffefffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x1000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x2000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                    ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xffffdfffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x2000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x4000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                    ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xffffbfffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x4000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x8000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                    ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xffff7fffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x8000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x10000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                     ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfffeffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x10000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x20000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                     ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfffdffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x20000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x40000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                     ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfffbffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x40000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x80000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                     ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfff7ffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x80000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x100000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                      ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xffefffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x100000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x200000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                      ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xffdfffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x200000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x400000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                      ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xffbfffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x400000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x800000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                      ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xff7fffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x800000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x1000000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                       ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfeffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x1000000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x2000000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                       ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfdffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x2000000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x4000000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                       ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xfbffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x4000000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x8000000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                       ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xf7ffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x8000000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x10000000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                        ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xefffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x10000000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x20000000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                        ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xdfffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x20000000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if ((0x40000000U & (vlSelf->top__DOT____Vcellout__i0____pinNumber4 
                        ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0xbfffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x40000000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    if (((vlSelf->top__DOT____Vcellout__i0____pinNumber4 
          ^ vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i0__DOT____Vtogcov__dout 
            = ((0x7fffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__dout) 
               | (0x80000000U & vlSelf->top__DOT____Vcellout__i0____pinNumber4));
    }
    ((IData)(4U) + vlSelf->top__DOT__pc) = vlSelf->top__DOT____Vcellout__i0____pinNumber4;
    if ((1U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfffffffeU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (1U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((2U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfffffffdU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (2U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((4U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfffffffbU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (4U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((8U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfffffff7U 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (8U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x10U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xffffffefU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x10U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x20U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xffffffdfU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x20U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x40U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xffffffbfU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x40U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x80U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xffffff7fU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x80U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x100U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfffffeffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x100U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x200U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfffffdffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x200U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x400U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfffffbffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x400U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x800U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfffff7ffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x800U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xffffefffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x1000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xffffdfffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x2000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xffffbfffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x4000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xffff7fffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x8000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfffeffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x10000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfffdffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x20000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfffbffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x40000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfff7ffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x80000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xffefffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x100000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xffdfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x200000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xffbfffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x400000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xff7fffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x800000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfeffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x1000000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfdffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x2000000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xfbffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x4000000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xf7ffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x8000000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__rs1_data 
                        ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xefffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x10000000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__rs1_data 
                        ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xdfffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x20000000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__rs1_data 
                        ^ vlSelf->top__DOT____Vtogcov__rs1_data))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0xbfffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x40000000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if (((vlSelf->top__DOT__rs1_data ^ vlSelf->top__DOT____Vtogcov__rs1_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1_data = ((0x7fffffffU 
                                                  & vlSelf->top__DOT____Vtogcov__rs1_data) 
                                                 | (0x80000000U 
                                                    & vlSelf->top__DOT__rs1_data));
    }
    if ((1U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffeU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (1U & vlSelf->top__DOT__pc));
    }
    if ((2U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffdU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (2U & vlSelf->top__DOT__pc));
    }
    if ((4U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffffbU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (4U & vlSelf->top__DOT__pc));
    }
    if ((8U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffff7U 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (8U & vlSelf->top__DOT__pc));
    }
    if ((0x10U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffefU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x10U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x20U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffdfU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x20U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x40U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffffbfU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x40U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x80U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffff7fU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x80U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x100U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffeffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x100U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x200U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffdffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x200U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x400U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffffbffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x400U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x800U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffff7ffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x800U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x1000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffefffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x1000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x2000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffdfffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x2000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x4000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffffbfffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x4000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x8000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffff7fffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x8000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x10000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffeffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x10000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x20000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffdffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x20000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x40000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfffbffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x40000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x80000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfff7ffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x80000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x100000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffefffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x100000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x200000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffdfffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x200000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x400000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xffbfffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x400000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x800000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xff7fffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x800000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x1000000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfeffffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x1000000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x2000000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfdffffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x2000000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x4000000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xfbffffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x4000000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x8000000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xf7ffffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x8000000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x10000000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xefffffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x10000000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x20000000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xdfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x20000000U 
                                              & vlSelf->top__DOT__pc));
    }
    if ((0x40000000U & (vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0xbfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x40000000U 
                                              & vlSelf->top__DOT__pc));
    }
    if (((vlSelf->top__DOT__pc ^ vlSelf->top__DOT____Vtogcov__pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__pc = ((0x7fffffffU 
                                            & vlSelf->top__DOT____Vtogcov__pc) 
                                           | (0x80000000U 
                                              & vlSelf->top__DOT__pc));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__imm = (vlSelf->top__DOT__ins 
                             >> 0x14U);
    vlSelf->top__DOT__rs1 = (0x1fU & (vlSelf->top__DOT__ins 
                                      >> 0xfU));
    vlSelf->top__DOT__fun3 = (7U & (vlSelf->top__DOT__ins 
                                    >> 0xcU));
    if ((1U & ((IData)(vlSelf->top__DOT__rs1) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1 = ((0x1eU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__rs1)) 
                                            | (1U & (IData)(vlSelf->top__DOT__rs1)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__rs1) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1 = ((0x1dU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__rs1)) 
                                            | (2U & (IData)(vlSelf->top__DOT__rs1)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__rs1) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1 = ((0x1bU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__rs1)) 
                                            | (4U & (IData)(vlSelf->top__DOT__rs1)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__rs1) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1 = ((0x17U 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__rs1)) 
                                            | (8U & (IData)(vlSelf->top__DOT__rs1)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__rs1) ^ (IData)(vlSelf->top__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__rs1 = ((0xfU & (IData)(vlSelf->top__DOT____Vtogcov__rs1)) 
                                            | (0x10U 
                                               & (IData)(vlSelf->top__DOT__rs1)));
    }
    vlSelf->top__DOT__ins = 0x1bU;
    if ((((IData)(vlSelf->top__DOT__fun3) == vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
          [0U]) ^ (IData)(vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__hit))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__hit 
            = ((IData)(vlSelf->top__DOT__fun3) == vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
               [0U]);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__fun3) ^ (IData)(vlSelf->top__DOT____Vtogcov__fun3)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__fun3 = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__fun3)) 
                                             | (1U 
                                                & (IData)(vlSelf->top__DOT__fun3)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__fun3) ^ (IData)(vlSelf->top__DOT____Vtogcov__fun3)))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__fun3 = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__fun3)) 
                                             | (2U 
                                                & (IData)(vlSelf->top__DOT__fun3)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__fun3) ^ (IData)(vlSelf->top__DOT____Vtogcov__fun3)))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__fun3 = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__fun3)) 
                                             | (4U 
                                                & (IData)(vlSelf->top__DOT__fun3)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffeU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (1U & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffdU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (2U & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffbU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (4U & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xff7U 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (8U & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfefU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (0x10U 
                                               & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfdfU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (0x20U 
                                               & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfbfU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (0x40U 
                                               & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xf7fU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (0x80U 
                                               & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xeffU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (0x100U 
                                               & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xdffU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (0x200U 
                                               & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0xbffU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (0x400U 
                                               & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imm = ((0x7ffU 
                                             & (IData)(vlSelf->top__DOT____Vtogcov__imm)) 
                                            | (0x800U 
                                               & (IData)(vlSelf->top__DOT__imm)));
    }
    if ((1U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (1U & vlSelf->top__DOT__ins));
    }
    if ((2U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfffffffdU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (2U & vlSelf->top__DOT__ins));
    }
    if ((4U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfffffffbU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (4U & vlSelf->top__DOT__ins));
    }
    if ((8U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfffffff7U 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (8U & vlSelf->top__DOT__ins));
    }
    if ((0x10U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xffffffefU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x10U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x20U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xffffffdfU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x20U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x40U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xffffffbfU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x40U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x80U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xffffff7fU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x80U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x100U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfffffeffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x100U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x200U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfffffdffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x200U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x400U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfffffbffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x400U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x800U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfffff7ffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x800U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x1000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xffffefffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x1000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x2000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xffffdfffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x2000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x4000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xffffbfffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x4000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x8000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xffff7fffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x8000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x10000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfffeffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x10000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x20000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfffdffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x20000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x40000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfffbffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x40000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x80000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfff7ffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x80000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x100000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xffefffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x100000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x200000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xffdfffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x200000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x400000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xffbfffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x400000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x800000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xff7fffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x800000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfeffffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x1000000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfdffffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x2000000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xfbffffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x4000000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xf7ffffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x8000000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xefffffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x10000000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xdfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x20000000U 
                                               & vlSelf->top__DOT__ins));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0xbfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x40000000U 
                                               & vlSelf->top__DOT__ins));
    }
    if (((vlSelf->top__DOT__ins ^ vlSelf->top__DOT____Vtogcov__ins) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ins = ((0x7fffffffU 
                                             & vlSelf->top__DOT____Vtogcov__ins) 
                                            | (0x80000000U 
                                               & vlSelf->top__DOT__ins));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->__VdfgTmp_he27f3d4e__0 = (vlSelf->top__DOT__rs1_data 
                                      + (IData)(vlSelf->top__DOT__imm));
    vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->top__DOT__rs1_data + (IData)(vlSelf->top__DOT__imm));
    if ((1U & ((IData)((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0))) 
               ^ (IData)(vlSelf->top__DOT__i2__DOT____Vtogcov__lut)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fffffffeULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | (IData)((IData)((1U & (IData)((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)))))));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fffffffdULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fffffffbULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fffffff7ULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ffffffefULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ffffffdfULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ffffffbfULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ffffff7fULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fffffeffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fffffdffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fffffbffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fffff7ffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ffffefffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ffffdfffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ffffbfffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ffff7fffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fffeffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fffdffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fffbffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fff7ffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ffefffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ffdfffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ffbfffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7ff7fffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7feffffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fdffffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7fbffffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7f7ffffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7efffffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7dfffffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x7bfffffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x77fffffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
               >> 0x20U))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x6ffffffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & (vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
               >> 0x21U))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x5ffffffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & (IData)((vlSelf->top__DOT__i2__DOT____Vtogcov__lut 
                       >> 0x22U)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT____Vtogcov__lut = 
            ((0x3ffffffffULL & vlSelf->top__DOT__i2__DOT____Vtogcov__lut) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0)) 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_he27f3d4e__0));
    if ((1U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x20U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x40U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x80U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x100U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x200U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x400U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x800U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                    [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x1000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                    [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x2000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                    [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x4000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                    [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x8000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                     [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                     [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x20000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                     [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x40000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                     [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x80000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                      [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x100000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                      [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x200000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                      [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x400000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                      [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x800000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                       [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                       [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                       [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                       [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                        [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                        [0U]))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                        [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                        [0U]))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                        [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                        [0U]))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
          [0U] ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                         [0U]));
    }
    vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out = (
                                                   (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__fun3) 
                                                               == 
                                                               vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                               [0U]))) 
                                                   & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                                                   [0U]);
    vlSelf->result = vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out;
    if ((1U & ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffffffeULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                      [0U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffffffdULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffffffbULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffffff7ULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ffffffefULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ffffffdfULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ffffffbfULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ffffff7fULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 7U))))) 
                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 8U))))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffffeffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 8U))))) 
                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 9U))))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffffdffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 9U))))) 
                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffffbffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xaU))))) 
                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffff7ffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xbU))))) 
                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ffffefffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xcU))))) 
                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ffffdfffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xdU))))) 
                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ffffbfffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xeU))))) 
                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ffff7fffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xfU))))) 
                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffeffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x10U))))) 
                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffdffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x11U))))) 
                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffbffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x12U))))) 
                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fff7ffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x13U))))) 
                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ffefffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x14U))))) 
                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ffdfffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x15U))))) 
                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ffbfffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x16U))))) 
                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7ff7fffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x17U))))) 
                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7feffffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x18U))))) 
                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fdffffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x19U))))) 
                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fbffffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1aU))))) 
                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7f7ffffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1bU))))) 
                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7efffffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1cU))))) 
                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7dfffffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1dU))))) 
                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7bfffffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1eU))))) 
                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x77fffffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1fU))))) 
                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x6ffffffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x20U))))) 
                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x5ffffffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x21U))))) 
                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                        [0U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x22U))))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x3ffffffffULL & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x22U))))) 
                         << 0x22U));
    }
    if ((1U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
               ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffeU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (1U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((2U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
               ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffdU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (2U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((4U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
               ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffbU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (4U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((8U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
               ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffff7U & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (8U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x10U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                  ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffefU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x10U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x20U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                  ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffdfU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x20U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x40U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                  ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffbfU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x40U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x80U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                  ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffff7fU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x80U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x100U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                   ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffeffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x100U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x200U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                   ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffdffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x200U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x400U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                   ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffbffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x400U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x800U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                   ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x800U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                    ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffefffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x1000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                    ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffdfffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x2000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                    ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffbfffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x4000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                    ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffff7fffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x8000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                     ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffeffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x10000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                     ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffdffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x20000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                     ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffbffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x40000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                     ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x80000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                      ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffefffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x100000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                      ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffdfffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x200000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                      ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffbfffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x400000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                      ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xff7fffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x800000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                       ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfeffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x1000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                       ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfdffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x2000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                       ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfbffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x4000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                       ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x8000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                        ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xefffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x10000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                        ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdfffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x20000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
                        ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbfffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x40000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if (((vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out 
          ^ vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x7fffffffU & vlSelf->top__DOT__i2__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x80000000U & vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    }
    if ((1U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffeU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (1U 
                                                  & vlSelf->result));
    }
    if ((2U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffdU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (2U 
                                                  & vlSelf->result));
    }
    if ((4U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffffbU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (4U 
                                                  & vlSelf->result));
    }
    if ((8U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffff7U 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (8U 
                                                  & vlSelf->result));
    }
    if ((0x10U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffefU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x10U 
                                                  & vlSelf->result));
    }
    if ((0x20U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffdfU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x20U 
                                                  & vlSelf->result));
    }
    if ((0x40U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffffbfU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x40U 
                                                  & vlSelf->result));
    }
    if ((0x80U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffff7fU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x80U 
                                                  & vlSelf->result));
    }
    if ((0x100U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffeffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x100U 
                                                  & vlSelf->result));
    }
    if ((0x200U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffdffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x200U 
                                                  & vlSelf->result));
    }
    if ((0x400U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffffbffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x400U 
                                                  & vlSelf->result));
    }
    if ((0x800U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffff7ffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x800U 
                                                  & vlSelf->result));
    }
    if ((0x1000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffefffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x1000U 
                                                  & vlSelf->result));
    }
    if ((0x2000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffdfffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x2000U 
                                                  & vlSelf->result));
    }
    if ((0x4000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xffffbfffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x4000U 
                                                  & vlSelf->result));
    }
    if ((0x8000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xffff7fffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x8000U 
                                                  & vlSelf->result));
    }
    if ((0x10000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffeffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x10000U 
                                                  & vlSelf->result));
    }
    if ((0x20000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffdffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x20000U 
                                                  & vlSelf->result));
    }
    if ((0x40000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfffbffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x40000U 
                                                  & vlSelf->result));
    }
    if ((0x80000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfff7ffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x80000U 
                                                  & vlSelf->result));
    }
    if ((0x100000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xffefffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x100000U 
                                                  & vlSelf->result));
    }
    if ((0x200000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xffdfffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x200000U 
                                                  & vlSelf->result));
    }
    if ((0x400000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xffbfffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x400000U 
                                                  & vlSelf->result));
    }
    if ((0x800000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xff7fffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x800000U 
                                                  & vlSelf->result));
    }
    if ((0x1000000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfeffffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x1000000U 
                                                  & vlSelf->result));
    }
    if ((0x2000000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfdffffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x2000000U 
                                                  & vlSelf->result));
    }
    if ((0x4000000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xfbffffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x4000000U 
                                                  & vlSelf->result));
    }
    if ((0x8000000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xf7ffffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x8000000U 
                                                  & vlSelf->result));
    }
    if ((0x10000000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xefffffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x10000000U 
                                                  & vlSelf->result));
    }
    if ((0x20000000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xdfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x20000000U 
                                                  & vlSelf->result));
    }
    if ((0x40000000U & (vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0xbfffffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x40000000U 
                                                  & vlSelf->result));
    }
    if (((vlSelf->result ^ vlSelf->top__DOT____Vtogcov__result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__result = ((0x7fffffffU 
                                                & vlSelf->top__DOT____Vtogcov__result) 
                                               | (0x80000000U 
                                                  & vlSelf->result));
    }
}
