// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_i8255.h for the primary calling header

#include "Vtb_i8255__pch.h"
#include "Vtb_i8255___024root.h"

VL_INLINE_OPT void Vtb_i8255___024root___ico_sequent__TOP__0(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_i8255__DOT__reset = vlSelf->reset;
    vlSelf->tb_i8255__DOT__clk = vlSelf->clk;
    vlSelf->tb_i8255__DOT__addr = vlSelf->addr;
    vlSelf->tb_i8255__DOT__idata = vlSelf->idata;
    vlSelf->tb_i8255__DOT__cs = vlSelf->cs;
    vlSelf->tb_i8255__DOT__we = vlSelf->we;
    vlSelf->tb_i8255__DOT__oe = vlSelf->oe;
    vlSelf->tb_i8255__DOT__ipa = vlSelf->ipa;
    vlSelf->tb_i8255__DOT__ipb = vlSelf->ipb;
    vlSelf->tb_i8255__DOT__ipc = vlSelf->ipc;
    if ((0U == (0xfffffffcU & ((((IData)(vlSelf->oe) 
                                 & (IData)(vlSelf->cs)) 
                                << 2U) | (IData)(vlSelf->addr))))) {
        vlSelf->odata = 0xffU;
    } else if ((4U == ((((IData)(vlSelf->oe) & (IData)(vlSelf->cs)) 
                        << 2U) | (IData)(vlSelf->addr)))) {
        vlSelf->odata = ((IData)((0U != (0x50U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))))
                          ? (IData)(vlSelf->ipa) : (IData)(vlSelf->tb_i8255__DOT__dut__DOT__opa_r));
    } else if ((5U == ((((IData)(vlSelf->oe) & (IData)(vlSelf->cs)) 
                        << 2U) | (IData)(vlSelf->addr)))) {
        vlSelf->odata = ((2U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))
                          ? (IData)(vlSelf->ipb) : (IData)(vlSelf->tb_i8255__DOT__dut__DOT__opb_r));
    } else if ((6U == ((((IData)(vlSelf->oe) & (IData)(vlSelf->cs)) 
                        << 2U) | (IData)(vlSelf->addr)))) {
        vlSelf->odata = ((0xf0U & (((8U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))
                                     ? ((((IData)(vlSelf->ipc) 
                                          & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__maskC)) 
                                         >> 4U) | (IData)(vlSelf->tb_i8255__DOT__dut__DOT__tapemotor))
                                     : ((IData)(vlSelf->tb_i8255__DOT__dut__DOT__opc_r) 
                                        >> 4U)) << 4U)) 
                         | (0xfU & ((1U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))
                                     ? ((IData)(vlSelf->ipc) 
                                        & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__maskC))
                                     : (IData)(vlSelf->tb_i8255__DOT__dut__DOT__opc_r))));
    } else if ((7U == ((((IData)(vlSelf->oe) & (IData)(vlSelf->cs)) 
                        << 2U) | (IData)(vlSelf->addr)))) {
        vlSelf->odata = vlSelf->tb_i8255__DOT__dut__DOT__mode;
    }
    vlSelf->tb_i8255__DOT__dut__DOT__reset = vlSelf->tb_i8255__DOT__reset;
    vlSelf->tb_i8255__DOT__dut__DOT__clk_sys = vlSelf->tb_i8255__DOT__clk;
    vlSelf->tb_i8255__DOT__dut__DOT__addr = vlSelf->tb_i8255__DOT__addr;
    vlSelf->tb_i8255__DOT__dut__DOT__idata = vlSelf->tb_i8255__DOT__idata;
    vlSelf->tb_i8255__DOT__dut__DOT__cs = vlSelf->tb_i8255__DOT__cs;
    vlSelf->tb_i8255__DOT__dut__DOT__we = vlSelf->tb_i8255__DOT__we;
    vlSelf->tb_i8255__DOT__dut__DOT__oe = vlSelf->tb_i8255__DOT__oe;
    vlSelf->tb_i8255__DOT__dut__DOT__ipa = vlSelf->tb_i8255__DOT__ipa;
    vlSelf->tb_i8255__DOT__dut__DOT__ipb = vlSelf->tb_i8255__DOT__ipb;
    vlSelf->tb_i8255__DOT__dut__DOT__ipc = vlSelf->tb_i8255__DOT__ipc;
    vlSelf->tb_i8255__DOT__odata = vlSelf->odata;
    vlSelf->tb_i8255__DOT__dut__DOT__odata = vlSelf->tb_i8255__DOT__odata;
}

void Vtb_i8255___024root___eval_ico(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_i8255___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtb_i8255___024root___eval_triggers__ico(Vtb_i8255___024root* vlSelf);

bool Vtb_i8255___024root___eval_phase__ico(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_i8255___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_i8255___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb_i8255___024root___eval_act(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 256> Vtb_i8255__ConstPool__TABLE_hc453538b_0;

VL_INLINE_OPT void Vtb_i8255___024root___nba_sequent__TOP__0(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vdly__tb_i8255__DOT__dut__DOT__opc_r;
    __Vdly__tb_i8255__DOT__dut__DOT__opc_r = 0;
    // Body
    __Vdly__tb_i8255__DOT__dut__DOT__opc_r = vlSelf->tb_i8255__DOT__dut__DOT__opc_r;
    if (vlSelf->reset) {
        vlSelf->tb_i8255__DOT__dut__DOT__opa_r = 0U;
        vlSelf->tb_i8255__DOT__dut__DOT__opb_r = 0U;
        __Vdly__tb_i8255__DOT__dut__DOT__opc_r = 0U;
        vlSelf->tb_i8255__DOT__dut__DOT__mode = 0x9bU;
    } else if ((((~ (IData)(vlSelf->tb_i8255__DOT__dut__DOT__unnamedblk1__DOT__old_we)) 
                 & (IData)(vlSelf->we)) & (IData)(vlSelf->cs))) {
        if ((0U == (IData)(vlSelf->addr))) {
            vlSelf->tb_i8255__DOT__dut__DOT__opa_r 
                = vlSelf->idata;
        } else if ((1U == (IData)(vlSelf->addr))) {
            vlSelf->tb_i8255__DOT__dut__DOT__opb_r 
                = vlSelf->idata;
        } else if ((2U == (IData)(vlSelf->addr))) {
            __Vdly__tb_i8255__DOT__dut__DOT__opc_r 
                = (((IData)(vlSelf->idata) & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__maskC)) 
                   | ((IData)(vlSelf->tb_i8255__DOT__dut__DOT__opc_r) 
                      & (~ (IData)(vlSelf->tb_i8255__DOT__dut__DOT__maskC))));
        } else if ((0x80U & (IData)(vlSelf->idata))) {
            vlSelf->tb_i8255__DOT__dut__DOT__opa_r 
                = ((IData)(vlSelf->idata) >> 0x18U);
            vlSelf->tb_i8255__DOT__dut__DOT__opb_r 
                = (0xffU & ((IData)(vlSelf->idata) 
                            >> 0x10U));
            __Vdly__tb_i8255__DOT__dut__DOT__opc_r 
                = (0xffU & ((IData)(vlSelf->idata) 
                            >> 8U));
            vlSelf->tb_i8255__DOT__dut__DOT__mode = vlSelf->idata;
        } else {
            __Vdly__tb_i8255__DOT__dut__DOT__opc_r 
                = (((~ ((IData)(1U) << (7U & ((IData)(vlSelf->idata) 
                                              >> 1U)))) 
                    & (IData)(__Vdly__tb_i8255__DOT__dut__DOT__opc_r)) 
                   | (0xffU & ((1U & (IData)(vlSelf->idata)) 
                               << (7U & ((IData)(vlSelf->idata) 
                                         >> 1U)))));
        }
    }
    vlSelf->tb_i8255__DOT__dut__DOT__opc_r = __Vdly__tb_i8255__DOT__dut__DOT__opc_r;
    vlSelf->tb_i8255__DOT__dut__DOT__unnamedblk1__DOT__old_we 
        = vlSelf->we;
    vlSelf->opa = ((IData)((0x10U != (0x50U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))))
                    ? (IData)(vlSelf->tb_i8255__DOT__dut__DOT__opa_r)
                    : 0xffU);
    vlSelf->opb = ((2U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))
                    ? 0xffU : (IData)(vlSelf->tb_i8255__DOT__dut__DOT__opb_r));
    vlSelf->opc = ((((8U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))
                      ? 0xfU : (0xfU & ((IData)(vlSelf->tb_i8255__DOT__dut__DOT__opc_r) 
                                        >> 4U))) << 4U) 
                   | ((1U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))
                       ? 0xfU : (0xfU & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__opc_r))));
    vlSelf->tb_i8255__DOT__dut__DOT__tapemotor = ((IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x74U 
                                                            & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))))
                                                   ? 2U
                                                   : 0U);
    __Vtableidx1 = vlSelf->tb_i8255__DOT__dut__DOT__mode;
    vlSelf->tb_i8255__DOT__dut__DOT__maskC = Vtb_i8255__ConstPool__TABLE_hc453538b_0
        [__Vtableidx1];
    vlSelf->tb_i8255__DOT__opa = vlSelf->opa;
    vlSelf->tb_i8255__DOT__opb = vlSelf->opb;
    vlSelf->tb_i8255__DOT__opc = vlSelf->opc;
    if ((0U == (0xfffffffcU & ((((IData)(vlSelf->oe) 
                                 & (IData)(vlSelf->cs)) 
                                << 2U) | (IData)(vlSelf->addr))))) {
        vlSelf->odata = 0xffU;
    } else if ((4U == ((((IData)(vlSelf->oe) & (IData)(vlSelf->cs)) 
                        << 2U) | (IData)(vlSelf->addr)))) {
        vlSelf->odata = ((IData)((0U != (0x50U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))))
                          ? (IData)(vlSelf->ipa) : (IData)(vlSelf->tb_i8255__DOT__dut__DOT__opa_r));
    } else if ((5U == ((((IData)(vlSelf->oe) & (IData)(vlSelf->cs)) 
                        << 2U) | (IData)(vlSelf->addr)))) {
        vlSelf->odata = ((2U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))
                          ? (IData)(vlSelf->ipb) : (IData)(vlSelf->tb_i8255__DOT__dut__DOT__opb_r));
    } else if ((6U == ((((IData)(vlSelf->oe) & (IData)(vlSelf->cs)) 
                        << 2U) | (IData)(vlSelf->addr)))) {
        vlSelf->odata = ((0xf0U & (((8U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))
                                     ? ((((IData)(vlSelf->ipc) 
                                          & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__maskC)) 
                                         >> 4U) | (IData)(vlSelf->tb_i8255__DOT__dut__DOT__tapemotor))
                                     : ((IData)(vlSelf->tb_i8255__DOT__dut__DOT__opc_r) 
                                        >> 4U)) << 4U)) 
                         | (0xfU & ((1U & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__mode))
                                     ? ((IData)(vlSelf->ipc) 
                                        & (IData)(vlSelf->tb_i8255__DOT__dut__DOT__maskC))
                                     : (IData)(vlSelf->tb_i8255__DOT__dut__DOT__opc_r))));
    } else if ((7U == ((((IData)(vlSelf->oe) & (IData)(vlSelf->cs)) 
                        << 2U) | (IData)(vlSelf->addr)))) {
        vlSelf->odata = vlSelf->tb_i8255__DOT__dut__DOT__mode;
    }
    vlSelf->tb_i8255__DOT__dut__DOT__opa = vlSelf->tb_i8255__DOT__opa;
    vlSelf->tb_i8255__DOT__dut__DOT__opb = vlSelf->tb_i8255__DOT__opb;
    vlSelf->tb_i8255__DOT__dut__DOT__opc = vlSelf->tb_i8255__DOT__opc;
    vlSelf->tb_i8255__DOT__odata = vlSelf->odata;
    vlSelf->tb_i8255__DOT__dut__DOT__odata = vlSelf->tb_i8255__DOT__odata;
}

void Vtb_i8255___024root___eval_nba(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_i8255___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_i8255___024root___eval_triggers__act(Vtb_i8255___024root* vlSelf);

bool Vtb_i8255___024root___eval_phase__act(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_i8255___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_i8255___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_i8255___024root___eval_phase__nba(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_i8255___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_i8255___024root___dump_triggers__ico(Vtb_i8255___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_i8255___024root___dump_triggers__nba(Vtb_i8255___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_i8255___024root___dump_triggers__act(Vtb_i8255___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_i8255___024root___eval(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtb_i8255___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tb_i8255.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_i8255___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_i8255___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_i8255.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_i8255___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_i8255.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_i8255___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_i8255___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_i8255___024root___eval_debug_assertions(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->addr & 0xfcU))) {
        Verilated::overWidthError("addr");}
    if (VL_UNLIKELY((vlSelf->cs & 0xfeU))) {
        Verilated::overWidthError("cs");}
    if (VL_UNLIKELY((vlSelf->we & 0xfeU))) {
        Verilated::overWidthError("we");}
    if (VL_UNLIKELY((vlSelf->oe & 0xfeU))) {
        Verilated::overWidthError("oe");}
}
#endif  // VL_DEBUG
