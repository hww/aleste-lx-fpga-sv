// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_i8255.h for the primary calling header

#include "Vtb_i8255__pch.h"
#include "Vtb_i8255___024root.h"

VL_ATTR_COLD void Vtb_i8255___024root___eval_static(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_i8255___024root___eval_initial(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtb_i8255___024root___eval_final(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_i8255___024root___dump_triggers__stl(Vtb_i8255___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_i8255___024root___eval_phase__stl(Vtb_i8255___024root* vlSelf);

VL_ATTR_COLD void Vtb_i8255___024root___eval_settle(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_i8255___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_i8255.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_i8255___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_i8255___024root___dump_triggers__stl(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 256> Vtb_i8255__ConstPool__TABLE_hc453538b_0;

VL_ATTR_COLD void Vtb_i8255___024root___stl_sequent__TOP__0(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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

VL_ATTR_COLD void Vtb_i8255___024root___eval_stl(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_i8255___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_i8255___024root___eval_triggers__stl(Vtb_i8255___024root* vlSelf);

VL_ATTR_COLD bool Vtb_i8255___024root___eval_phase__stl(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_i8255___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_i8255___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_i8255___024root___dump_triggers__ico(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_i8255___024root___dump_triggers__act(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_i8255___024root___dump_triggers__nba(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_i8255___024root___ctor_var_reset(Vtb_i8255___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->addr = VL_RAND_RESET_I(2);
    vlSelf->idata = VL_RAND_RESET_I(8);
    vlSelf->odata = VL_RAND_RESET_I(8);
    vlSelf->cs = VL_RAND_RESET_I(1);
    vlSelf->we = VL_RAND_RESET_I(1);
    vlSelf->oe = VL_RAND_RESET_I(1);
    vlSelf->ipa = VL_RAND_RESET_I(8);
    vlSelf->opa = VL_RAND_RESET_I(8);
    vlSelf->ipb = VL_RAND_RESET_I(8);
    vlSelf->opb = VL_RAND_RESET_I(8);
    vlSelf->ipc = VL_RAND_RESET_I(8);
    vlSelf->opc = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_i8255__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_i8255__DOT__addr = VL_RAND_RESET_I(2);
    vlSelf->tb_i8255__DOT__idata = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__odata = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__cs = VL_RAND_RESET_I(1);
    vlSelf->tb_i8255__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_i8255__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_i8255__DOT__ipa = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__opa = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__ipb = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__opb = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__ipc = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__opc = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_i8255__DOT__dut__DOT__clk_sys = VL_RAND_RESET_I(1);
    vlSelf->tb_i8255__DOT__dut__DOT__addr = VL_RAND_RESET_I(2);
    vlSelf->tb_i8255__DOT__dut__DOT__idata = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__odata = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__cs = VL_RAND_RESET_I(1);
    vlSelf->tb_i8255__DOT__dut__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_i8255__DOT__dut__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_i8255__DOT__dut__DOT__ipa = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__opa = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__ipb = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__opb = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__ipc = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__opc = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__mode = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__opa_r = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__opb_r = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__opc_r = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__maskC = VL_RAND_RESET_I(8);
    vlSelf->tb_i8255__DOT__dut__DOT__tapemotor = VL_RAND_RESET_I(4);
    vlSelf->tb_i8255__DOT__dut__DOT__unnamedblk1__DOT__old_we = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
