// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_um6845r.h for the primary calling header

#include "Vtb_um6845r__pch.h"
#include "Vtb_um6845r___024root.h"

VL_ATTR_COLD void Vtb_um6845r___024root___eval_static(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_um6845r___024root___eval_initial(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__CLOCK__0 = vlSelf->CLOCK;
}

VL_ATTR_COLD void Vtb_um6845r___024root___eval_final(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_um6845r___024root___dump_triggers__stl(Vtb_um6845r___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_um6845r___024root___eval_phase__stl(Vtb_um6845r___024root* vlSelf);

VL_ATTR_COLD void Vtb_um6845r___024root___eval_settle(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x7d0U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_um6845r___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_um6845r.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_um6845r___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_um6845r___024root___dump_triggers__stl(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_um6845r___024root___stl_sequent__TOP__0(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_um6845r__DOT__dut__DOT____VdfgTmp_h92972bcd__0;
    tb_um6845r__DOT__dut__DOT____VdfgTmp_h92972bcd__0 = 0;
    // Body
    vlSelf->MA = vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_r;
    vlSelf->FIELD = ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__field)) 
                     & (3U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace)));
    vlSelf->RA = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line) 
                  | ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__field) 
                     & (3U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace))));
    vlSelf->DO = 0xffU;
    if (((IData)(vlSelf->ENABLE) & (~ (IData)(vlSelf->nCS)))) {
        if (vlSelf->RS) {
            vlSelf->DO = ((0xaU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))
                           ? (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R10_cursor_mode) 
                               << 5U) | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R10_cursor_start))
                           : ((0xbU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))
                               ? (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R11_cursor_end)
                               : ((0xcU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))
                                   ? ((IData)(vlSelf->CRTC_TYPE)
                                       ? 0U : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R12_start_addr_h))
                                   : ((0xdU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))
                                       ? ((IData)(vlSelf->CRTC_TYPE)
                                           ? 0U : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R13_start_addr_l))
                                       : ((0xeU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))
                                           ? (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R14_cursor_h)
                                           : ((0xfU 
                                               == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))
                                               ? (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R15_cursor_l)
                                               : ((0x1fU 
                                                   == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))
                                                   ? 
                                                  ((IData)(vlSelf->CRTC_TYPE)
                                                    ? 0xffU
                                                    : 0U)
                                                   : 0U)))))));
        } else if (vlSelf->CRTC_TYPE) {
            vlSelf->DO = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__vde)
                           ? 0U : 0x20U);
        }
    }
    vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last = (
                                                   ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R0_h_total) 
                                                    == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc)) 
                                                   & ((IData)(vlSelf->CRTC_TYPE) 
                                                      | (0U 
                                                         != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R0_h_total))));
    tb_um6845r__DOT__dut__DOT____VdfgTmp_h92972bcd__0 
        = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hde) 
           & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__vde));
    vlSelf->tb_um6845r__DOT__dut__DOT__line_max = (0x1fU 
                                                   & ((~ 
                                                       (3U 
                                                        == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace))) 
                                                      & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__in_adj)
                                                          ? 
                                                         ((0U 
                                                           != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj))
                                                           ? 
                                                          ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj) 
                                                           - (IData)(1U))
                                                           : 0U)
                                                          : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R9_v_max_line))));
    vlSelf->tb_um6845r__DOT__dut__DOT__row_last = (1U 
                                                   & (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R4_v_total) 
                                                       == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row)) 
                                                      | ((~ (IData)(vlSelf->CRTC_TYPE)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R4_v_total)))))));
    vlSelf->tb_um6845r__DOT__dut__DOT__hcc_next = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last)
                                                    ? 0U
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc))));
    vlSelf->CURSOR = ((IData)(tb_um6845r__DOT__dut__DOT____VdfgTmp_h92972bcd__0) 
                      & (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_r) 
                          == (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R14_cursor_h) 
                               << 8U) | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R15_cursor_l))) 
                         & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__cursor_line)));
    vlSelf->tb_um6845r__DOT__dut__DOT__de = (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__dde) 
                                              << 1U) 
                                             | ((IData)(tb_um6845r__DOT__dut__DOT____VdfgTmp_h92972bcd__0) 
                                                & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__vde_r)));
    vlSelf->tb_um6845r__DOT__dut__DOT__line_last = 
        (1U & ((~ (IData)((0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line_max)))) 
               | ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line) 
                  == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line_max))));
    if (vlSelf->CRTC_TYPE) {
        vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj 
            = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_last) 
               & ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__in_adj)) 
                  & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj))));
        vlSelf->tb_um6845r__DOT__dut__DOT____VdfgTmp_h2284111e__0 
            = vlSelf->tb_um6845r__DOT__dut__DOT__line_last;
    } else {
        vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj 
            = ((2U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc))
                ? ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r) 
                   & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj)))
                : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r));
        vlSelf->tb_um6845r__DOT__dut__DOT____VdfgTmp_h2284111e__0 
            = vlSelf->tb_um6845r__DOT__dut__DOT__line_last_r;
    }
    vlSelf->DE = (1U & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__de) 
                        >> ((~ (- (IData)((IData)(vlSelf->CRTC_TYPE)))) 
                            & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_skew))));
    vlSelf->tb_um6845r__DOT__dut__DOT__row_frame_last 
        = ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj)) 
           & (((IData)(vlSelf->CRTC_TYPE) ? (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_last)
                : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_last_r)) 
              | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__in_adj)));
    vlSelf->tb_um6845r__DOT__dut__DOT__line_next = 
        (0x1fU & ((~ (3U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace))) 
                  & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT____VdfgTmp_h2284111e__0)
                      ? 0U : ((IData)(1U) + ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line) 
                                             + (3U 
                                                == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace)))))));
    vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_save 
        = (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R1_h_displayed) 
            == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc)) 
           & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT____VdfgTmp_h2284111e__0));
    vlSelf->tb_um6845r__DOT__dut__DOT__row_new = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last) 
                                                  & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT____VdfgTmp_h2284111e__0));
    if (vlSelf->tb_um6845r__DOT__dut__DOT__row_frame_last) {
        vlSelf->tb_um6845r__DOT__dut__DOT__row_next = 0U;
        vlSelf->tb_um6845r__DOT__dut__DOT__frame_new 
            = vlSelf->tb_um6845r__DOT__dut__DOT__row_new;
    } else {
        vlSelf->tb_um6845r__DOT__dut__DOT__row_next 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row)));
        vlSelf->tb_um6845r__DOT__dut__DOT__frame_new = 0U;
    }
}

VL_ATTR_COLD void Vtb_um6845r___024root___eval_stl(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_um6845r___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_um6845r___024root___eval_triggers__stl(Vtb_um6845r___024root* vlSelf);

VL_ATTR_COLD bool Vtb_um6845r___024root___eval_phase__stl(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_um6845r___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_um6845r___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_um6845r___024root___dump_triggers__ico(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtb_um6845r___024root___dump_triggers__act(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLOCK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_um6845r___024root___dump_triggers__nba(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLOCK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_um6845r___024root___ctor_var_reset(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLOCK = VL_RAND_RESET_I(1);
    vlSelf->CLKEN = VL_RAND_RESET_I(1);
    vlSelf->nCLKEN = VL_RAND_RESET_I(1);
    vlSelf->nRESET = VL_RAND_RESET_I(1);
    vlSelf->CRTC_TYPE = VL_RAND_RESET_I(1);
    vlSelf->ENABLE = VL_RAND_RESET_I(1);
    vlSelf->nCS = VL_RAND_RESET_I(1);
    vlSelf->R_nW = VL_RAND_RESET_I(1);
    vlSelf->RS = VL_RAND_RESET_I(1);
    vlSelf->DI = VL_RAND_RESET_I(8);
    vlSelf->DO = VL_RAND_RESET_I(8);
    vlSelf->VSYNC = VL_RAND_RESET_I(1);
    vlSelf->HSYNC = VL_RAND_RESET_I(1);
    vlSelf->DE = VL_RAND_RESET_I(1);
    vlSelf->FIELD = VL_RAND_RESET_I(1);
    vlSelf->CURSOR = VL_RAND_RESET_I(1);
    vlSelf->MA = VL_RAND_RESET_I(14);
    vlSelf->RA = VL_RAND_RESET_I(5);
    vlSelf->tb_um6845r__DOT__dut__DOT__R0_h_total = VL_RAND_RESET_I(8);
    vlSelf->tb_um6845r__DOT__dut__DOT__R1_h_displayed = VL_RAND_RESET_I(8);
    vlSelf->tb_um6845r__DOT__dut__DOT__R2_h_sync_pos = VL_RAND_RESET_I(8);
    vlSelf->tb_um6845r__DOT__dut__DOT__R3_v_sync_width = VL_RAND_RESET_I(4);
    vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width = VL_RAND_RESET_I(4);
    vlSelf->tb_um6845r__DOT__dut__DOT__R4_v_total = VL_RAND_RESET_I(7);
    vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj = VL_RAND_RESET_I(5);
    vlSelf->tb_um6845r__DOT__dut__DOT__R6_v_displayed = VL_RAND_RESET_I(7);
    vlSelf->tb_um6845r__DOT__dut__DOT__R7_v_sync_pos = VL_RAND_RESET_I(7);
    vlSelf->tb_um6845r__DOT__dut__DOT__R8_skew = VL_RAND_RESET_I(2);
    vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace = VL_RAND_RESET_I(2);
    vlSelf->tb_um6845r__DOT__dut__DOT__R9_v_max_line = VL_RAND_RESET_I(5);
    vlSelf->tb_um6845r__DOT__dut__DOT__R10_cursor_mode = VL_RAND_RESET_I(2);
    vlSelf->tb_um6845r__DOT__dut__DOT__R10_cursor_start = VL_RAND_RESET_I(5);
    vlSelf->tb_um6845r__DOT__dut__DOT__R11_cursor_end = VL_RAND_RESET_I(5);
    vlSelf->tb_um6845r__DOT__dut__DOT__R12_start_addr_h = VL_RAND_RESET_I(6);
    vlSelf->tb_um6845r__DOT__dut__DOT__R13_start_addr_l = VL_RAND_RESET_I(8);
    vlSelf->tb_um6845r__DOT__dut__DOT__R14_cursor_h = VL_RAND_RESET_I(6);
    vlSelf->tb_um6845r__DOT__dut__DOT__R15_cursor_l = VL_RAND_RESET_I(8);
    vlSelf->tb_um6845r__DOT__dut__DOT__addr = VL_RAND_RESET_I(5);
    vlSelf->tb_um6845r__DOT__dut__DOT__in_adj = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__hcc = VL_RAND_RESET_I(8);
    vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__hcc_next = VL_RAND_RESET_I(8);
    vlSelf->tb_um6845r__DOT__dut__DOT__line = VL_RAND_RESET_I(5);
    vlSelf->tb_um6845r__DOT__dut__DOT__line_max = VL_RAND_RESET_I(5);
    vlSelf->tb_um6845r__DOT__dut__DOT__line_last_r = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__line_last = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__line_next = VL_RAND_RESET_I(5);
    vlSelf->tb_um6845r__DOT__dut__DOT__row = VL_RAND_RESET_I(7);
    vlSelf->tb_um6845r__DOT__dut__DOT__row_last_r = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__row_last = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__row_frame_last = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__row_next = VL_RAND_RESET_I(7);
    vlSelf->tb_um6845r__DOT__dut__DOT__row_new = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__frame_new = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__field = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_save = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__row_addr = VL_RAND_RESET_I(14);
    vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_r = VL_RAND_RESET_I(14);
    vlSelf->tb_um6845r__DOT__dut__DOT__hde = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__hsc = VL_RAND_RESET_I(4);
    vlSelf->tb_um6845r__DOT__dut__DOT__vde = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__vde_r = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__VSYNC_r = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__de = VL_RAND_RESET_I(4);
    vlSelf->tb_um6845r__DOT__dut__DOT__dde = VL_RAND_RESET_I(2);
    vlSelf->tb_um6845r__DOT__dut__DOT__cursor_line = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsc = VL_RAND_RESET_I(4);
    vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow = VL_RAND_RESET_I(1);
    vlSelf->tb_um6845r__DOT__dut__DOT____VdfgTmp_h2284111e__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CLOCK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
