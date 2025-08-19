// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_um6845r.h for the primary calling header

#include "Vtb_um6845r__pch.h"
#include "Vtb_um6845r___024root.h"

VL_INLINE_OPT void Vtb_um6845r___024root___ico_sequent__TOP__0(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->DE = (1U & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__de) 
                        >> ((~ (- (IData)((IData)(vlSelf->CRTC_TYPE)))) 
                            & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_skew))));
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
    vlSelf->tb_um6845r__DOT__dut__DOT__row_last = (1U 
                                                   & (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R4_v_total) 
                                                       == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row)) 
                                                      | ((~ (IData)(vlSelf->CRTC_TYPE)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R4_v_total)))))));
    if (vlSelf->CRTC_TYPE) {
        vlSelf->tb_um6845r__DOT__dut__DOT____VdfgTmp_h2284111e__0 
            = vlSelf->tb_um6845r__DOT__dut__DOT__line_last;
        vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj 
            = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_last) 
               & ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__in_adj)) 
                  & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj))));
    } else {
        vlSelf->tb_um6845r__DOT__dut__DOT____VdfgTmp_h2284111e__0 
            = vlSelf->tb_um6845r__DOT__dut__DOT__line_last_r;
        vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj 
            = ((2U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc))
                ? ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r) 
                   & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj)))
                : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r));
    }
    vlSelf->tb_um6845r__DOT__dut__DOT__hcc_next = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last)
                                                    ? 0U
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc))));
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
    vlSelf->tb_um6845r__DOT__dut__DOT__row_frame_last 
        = ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj)) 
           & (((IData)(vlSelf->CRTC_TYPE) ? (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_last)
                : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_last_r)) 
              | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__in_adj)));
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

void Vtb_um6845r___024root___eval_ico(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_um6845r___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_um6845r___024root___eval_triggers__ico(Vtb_um6845r___024root* vlSelf);

bool Vtb_um6845r___024root___eval_phase__ico(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_um6845r___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_um6845r___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb_um6845r___024root___eval_act(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_um6845r___024root___nba_sequent__TOP__0(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_um6845r__DOT__dut__DOT____VdfgTmp_h92972bcd__0;
    tb_um6845r__DOT__dut__DOT____VdfgTmp_h92972bcd__0 = 0;
    CData/*0:0*/ __Vdly__tb_um6845r__DOT__dut__DOT__frame_adj_r;
    __Vdly__tb_um6845r__DOT__dut__DOT__frame_adj_r = 0;
    CData/*0:0*/ __Vdly__tb_um6845r__DOT__dut__DOT__field;
    __Vdly__tb_um6845r__DOT__dut__DOT__field = 0;
    SData/*13:0*/ __Vdly__tb_um6845r__DOT__dut__DOT__row_addr;
    __Vdly__tb_um6845r__DOT__dut__DOT__row_addr = 0;
    SData/*13:0*/ __Vdly__tb_um6845r__DOT__dut__DOT__row_addr_r;
    __Vdly__tb_um6845r__DOT__dut__DOT__row_addr_r = 0;
    CData/*3:0*/ __Vdly__tb_um6845r__DOT__dut__DOT__hsc;
    __Vdly__tb_um6845r__DOT__dut__DOT__hsc = 0;
    CData/*0:0*/ __Vdly__tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow;
    __Vdly__tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow = 0;
    CData/*0:0*/ __Vdly__tb_um6845r__DOT__dut__DOT__VSYNC_r;
    __Vdly__tb_um6845r__DOT__dut__DOT__VSYNC_r = 0;
    CData/*0:0*/ __Vdly__tb_um6845r__DOT__dut__DOT__vde;
    __Vdly__tb_um6845r__DOT__dut__DOT__vde = 0;
    CData/*0:0*/ __Vdly__tb_um6845r__DOT__dut__DOT__vde_r;
    __Vdly__tb_um6845r__DOT__dut__DOT__vde_r = 0;
    // Body
    __Vdly__tb_um6845r__DOT__dut__DOT__field = vlSelf->tb_um6845r__DOT__dut__DOT__field;
    __Vdly__tb_um6845r__DOT__dut__DOT__vde_r = vlSelf->tb_um6845r__DOT__dut__DOT__vde_r;
    __Vdly__tb_um6845r__DOT__dut__DOT__vde = vlSelf->tb_um6845r__DOT__dut__DOT__vde;
    __Vdly__tb_um6845r__DOT__dut__DOT__frame_adj_r 
        = vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r;
    __Vdly__tb_um6845r__DOT__dut__DOT__hsc = vlSelf->tb_um6845r__DOT__dut__DOT__hsc;
    __Vdly__tb_um6845r__DOT__dut__DOT__row_addr = vlSelf->tb_um6845r__DOT__dut__DOT__row_addr;
    __Vdly__tb_um6845r__DOT__dut__DOT__row_addr_r = vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_r;
    __Vdly__tb_um6845r__DOT__dut__DOT__VSYNC_r = vlSelf->tb_um6845r__DOT__dut__DOT__VSYNC_r;
    __Vdly__tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow 
        = vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow;
    if (vlSelf->CLKEN) {
        vlSelf->tb_um6845r__DOT__dut__DOT__dde = ((2U 
                                                   & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__dde) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__de)));
        if (vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_save) {
            __Vdly__tb_um6845r__DOT__dut__DOT__row_addr 
                = vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_r;
        }
        if (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last) 
             & (~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_save)))) {
            __Vdly__tb_um6845r__DOT__dut__DOT__row_addr_r 
                = vlSelf->tb_um6845r__DOT__dut__DOT__row_addr;
        }
        if ((1U & (~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last)))) {
            __Vdly__tb_um6845r__DOT__dut__DOT__row_addr_r 
                = (0x3fffU & ((IData)(1U) + (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_r)));
        }
        if (((~ (IData)(vlSelf->CRTC_TYPE)) & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_new))) {
            __Vdly__tb_um6845r__DOT__dut__DOT__row_addr 
                = (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R12_start_addr_h) 
                    << 8U) | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R13_start_addr_l));
            __Vdly__tb_um6845r__DOT__dut__DOT__row_addr_r 
                = (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R12_start_addr_h) 
                    << 8U) | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R13_start_addr_l));
        }
        if (((IData)(vlSelf->CRTC_TYPE) & ((~ ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line_last) 
                                               | ((0U 
                                                   != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row)) 
                                                  | ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last)) 
                                                     & (0U 
                                                        != 
                                                        (0xffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc)))))))) 
                                           | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_new)))) {
            __Vdly__tb_um6845r__DOT__dut__DOT__row_addr_r 
                = (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R12_start_addr_h) 
                    << 8U) | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R13_start_addr_l));
        }
    }
    if (vlSelf->nRESET) {
        if (vlSelf->CLKEN) {
            if (((((~ (IData)(vlSelf->CRTC_TYPE)) & 
                   (0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row))) 
                  & (0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line))) 
                 & (0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R6_v_displayed)))) {
                __Vdly__tb_um6845r__DOT__dut__DOT__vde 
                    = (1U & (~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__vde)));
                __Vdly__tb_um6845r__DOT__dut__DOT__vde_r 
                    = (1U & (~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__vde_r)));
            }
            if (vlSelf->tb_um6845r__DOT__dut__DOT__row_new) {
                if ((1U & (~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj)))) {
                    if (vlSelf->tb_um6845r__DOT__dut__DOT__frame_new) {
                        __Vdly__tb_um6845r__DOT__dut__DOT__field 
                            = (1U & ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__field)) 
                                     & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace)));
                    }
                }
                if (vlSelf->tb_um6845r__DOT__dut__DOT__frame_new) {
                    __Vdly__tb_um6845r__DOT__dut__DOT__vde = 1U;
                    __Vdly__tb_um6845r__DOT__dut__DOT__vde_r = 1U;
                }
                if (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_next) 
                     == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R6_v_displayed))) {
                    __Vdly__tb_um6845r__DOT__dut__DOT__vde = 0U;
                    __Vdly__tb_um6845r__DOT__dut__DOT__vde_r = 0U;
                }
            }
        } else if (vlSelf->nCLKEN) {
            if (((((~ (IData)(vlSelf->CRTC_TYPE)) & 
                   (0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row))) 
                  & (0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line))) 
                 & (0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R6_v_displayed)))) {
                __Vdly__tb_um6845r__DOT__dut__DOT__vde 
                    = (1U & (~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__vde)));
                __Vdly__tb_um6845r__DOT__dut__DOT__vde_r 
                    = (1U & (~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__vde_r)));
            }
        }
    } else {
        __Vdly__tb_um6845r__DOT__dut__DOT__field = 0U;
        __Vdly__tb_um6845r__DOT__dut__DOT__vde = 0U;
        __Vdly__tb_um6845r__DOT__dut__DOT__vde_r = 0U;
    }
    if (((((((IData)(vlSelf->nCLKEN) & (IData)(vlSelf->ENABLE)) 
            & (IData)(vlSelf->RS)) & (~ (IData)(vlSelf->nCS))) 
          & (~ (IData)(vlSelf->R_nW))) & (6U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr)))) {
        if (vlSelf->CRTC_TYPE) {
            if (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row) 
                 == (0x7fU & (IData)(vlSelf->DI)))) {
                __Vdly__tb_um6845r__DOT__dut__DOT__vde_r = 0U;
            }
            if ((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row) 
                  != (0x7fU & (IData)(vlSelf->DI))) 
                 & (0U != (0x7fU & (IData)(vlSelf->DI))))) {
                __Vdly__tb_um6845r__DOT__dut__DOT__vde 
                    = vlSelf->tb_um6845r__DOT__dut__DOT__vde_r;
            }
            if ((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row) 
                  == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R6_v_displayed)) 
                 & ((0x7fU & (IData)(vlSelf->DI)) != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row)))) {
                __Vdly__tb_um6845r__DOT__dut__DOT__vde = 1U;
            }
            if ((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row) 
                  == (0x7fU & (IData)(vlSelf->DI))) 
                 | (0U == (0x7fU & (IData)(vlSelf->DI))))) {
                __Vdly__tb_um6845r__DOT__dut__DOT__vde = 0U;
            }
        } else if ((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row) 
                     == (0x7fU & (IData)(vlSelf->DI))) 
                    & (~ ((0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row)) 
                          & (0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line)))))) {
            __Vdly__tb_um6845r__DOT__dut__DOT__vde_r = 0U;
        }
    }
    if (vlSelf->nRESET) {
        if (vlSelf->CLKEN) {
            __Vdly__tb_um6845r__DOT__dut__DOT__hsc 
                = ((IData)(vlSelf->HSYNC) ? (0xfU & 
                                             ((IData)(1U) 
                                              + (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hsc)))
                    : 0U);
            if (vlSelf->tb_um6845r__DOT__dut__DOT__row_new) {
                if ((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_new) 
                      & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row))) 
                     | ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_next) 
                        != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row)))) {
                    __Vdly__tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow = 1U;
                }
            }
            if (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__field)
                  ? ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_next) 
                     == (0x7fU & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R0_h_total) 
                                  >> 1U))) : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last))) {
                if ((0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsc))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsc 
                        = (0xfU & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsc) 
                                   - (IData)(1U)));
                } else if (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow) 
                            & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__field)
                                ? (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row) 
                                    == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R7_v_sync_pos)) 
                                   & (~ (IData)((0U 
                                                 != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line)))))
                                : (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_next) 
                                    == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R7_v_sync_pos)) 
                                   & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line_last))))) {
                    __Vdly__tb_um6845r__DOT__dut__DOT__VSYNC_r = 1U;
                    __Vdly__tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow = 0U;
                    vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsc 
                        = (0xfU & (((IData)(vlSelf->CRTC_TYPE)
                                     ? 0U : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R3_v_sync_width)) 
                                   - (IData)(1U)));
                } else {
                    __Vdly__tb_um6845r__DOT__dut__DOT__VSYNC_r = 0U;
                }
            }
        }
    } else {
        __Vdly__tb_um6845r__DOT__dut__DOT__hsc = 0U;
        __Vdly__tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow = 1U;
        vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsc = 0U;
        __Vdly__tb_um6845r__DOT__dut__DOT__VSYNC_r = 0U;
    }
    if ((((((IData)(vlSelf->ENABLE) & (IData)(vlSelf->RS)) 
           & (~ (IData)(vlSelf->nCS))) & (~ (IData)(vlSelf->R_nW))) 
         & (7U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr)))) {
        __Vdly__tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow = 1U;
        if ((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row) 
              == (0x7fU & (IData)(vlSelf->DI))) & (~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__VSYNC_r)))) {
            __Vdly__tb_um6845r__DOT__dut__DOT__VSYNC_r = 1U;
            vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsc 
                = (0xfU & (((IData)(vlSelf->CRTC_TYPE)
                             ? 0U : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R3_v_sync_width)) 
                           - (IData)(1U)));
        }
    }
    if (vlSelf->nRESET) {
        if (((((((IData)(vlSelf->ENABLE) & (IData)(vlSelf->RS)) 
                & (~ (IData)(vlSelf->nCS))) & (~ (IData)(vlSelf->R_nW))) 
              & (1U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
             & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc) 
                == (IData)(vlSelf->DI)))) {
            vlSelf->tb_um6845r__DOT__dut__DOT__hde = 0U;
        }
        if ((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width) 
              == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hsc)) 
             | ((IData)(vlSelf->CRTC_TYPE) & (0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width))))) {
            vlSelf->HSYNC = 0U;
        } else if ((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R2_h_sync_pos) 
                     == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc)) 
                    & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width)))) {
            vlSelf->HSYNC = 1U;
        }
        if (vlSelf->CLKEN) {
            if (vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last) {
                vlSelf->tb_um6845r__DOT__dut__DOT__hde = 1U;
            }
            if (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_next) 
                 == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R1_h_displayed))) {
                vlSelf->tb_um6845r__DOT__dut__DOT__hde = 0U;
            }
            if ((0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc))) {
                vlSelf->tb_um6845r__DOT__dut__DOT__line_last_r 
                    = vlSelf->tb_um6845r__DOT__dut__DOT__line_last;
                vlSelf->tb_um6845r__DOT__dut__DOT__row_last_r 
                    = vlSelf->tb_um6845r__DOT__dut__DOT__row_last;
                __Vdly__tb_um6845r__DOT__dut__DOT__frame_adj_r 
                    = (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line_last) 
                        & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_last)) 
                       & (~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__in_adj)));
            }
            if ((2U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc))) {
                __Vdly__tb_um6845r__DOT__dut__DOT__frame_adj_r 
                    = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r) 
                       & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj)));
            }
            if (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line) 
                 == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R10_cursor_start))) {
                vlSelf->tb_um6845r__DOT__dut__DOT__cursor_line = 1U;
            } else if (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line) 
                        == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R11_cursor_end))) {
                vlSelf->tb_um6845r__DOT__dut__DOT__cursor_line = 0U;
            }
            if (vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last) {
                vlSelf->tb_um6845r__DOT__dut__DOT__line 
                    = vlSelf->tb_um6845r__DOT__dut__DOT__line_next;
            }
            if (vlSelf->tb_um6845r__DOT__dut__DOT__row_new) {
                vlSelf->tb_um6845r__DOT__dut__DOT__row 
                    = vlSelf->tb_um6845r__DOT__dut__DOT__row_next;
                if ((1U & (~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj)))) {
                    if (vlSelf->tb_um6845r__DOT__dut__DOT__frame_new) {
                        vlSelf->tb_um6845r__DOT__dut__DOT__row = 0U;
                    }
                }
                if (vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__in_adj = 1U;
                } else if (vlSelf->tb_um6845r__DOT__dut__DOT__frame_new) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__in_adj = 0U;
                }
            }
            vlSelf->tb_um6845r__DOT__dut__DOT__hcc 
                = vlSelf->tb_um6845r__DOT__dut__DOT__hcc_next;
        }
    } else {
        vlSelf->tb_um6845r__DOT__dut__DOT__hde = 0U;
        vlSelf->tb_um6845r__DOT__dut__DOT__cursor_line = 0U;
        vlSelf->HSYNC = 0U;
        vlSelf->tb_um6845r__DOT__dut__DOT__row = 0U;
        vlSelf->tb_um6845r__DOT__dut__DOT__in_adj = 0U;
        vlSelf->tb_um6845r__DOT__dut__DOT__line = 0U;
        vlSelf->tb_um6845r__DOT__dut__DOT__hcc = 0U;
    }
    vlSelf->VSYNC = vlSelf->tb_um6845r__DOT__dut__DOT__VSYNC_r;
    vlSelf->tb_um6845r__DOT__dut__DOT__vde_r = __Vdly__tb_um6845r__DOT__dut__DOT__vde_r;
    vlSelf->tb_um6845r__DOT__dut__DOT__vde = __Vdly__tb_um6845r__DOT__dut__DOT__vde;
    vlSelf->tb_um6845r__DOT__dut__DOT__row_addr = __Vdly__tb_um6845r__DOT__dut__DOT__row_addr;
    vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_r = __Vdly__tb_um6845r__DOT__dut__DOT__row_addr_r;
    vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow 
        = __Vdly__tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow;
    vlSelf->tb_um6845r__DOT__dut__DOT__field = __Vdly__tb_um6845r__DOT__dut__DOT__field;
    vlSelf->tb_um6845r__DOT__dut__DOT__VSYNC_r = __Vdly__tb_um6845r__DOT__dut__DOT__VSYNC_r;
    vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r 
        = __Vdly__tb_um6845r__DOT__dut__DOT__frame_adj_r;
    vlSelf->MA = vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_r;
    tb_um6845r__DOT__dut__DOT____VdfgTmp_h92972bcd__0 
        = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hde) 
           & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__vde));
    vlSelf->tb_um6845r__DOT__dut__DOT__hsc = __Vdly__tb_um6845r__DOT__dut__DOT__hsc;
    vlSelf->tb_um6845r__DOT__dut__DOT__de = (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__dde) 
                                              << 1U) 
                                             | ((IData)(tb_um6845r__DOT__dut__DOT____VdfgTmp_h92972bcd__0) 
                                                & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__vde_r)));
    if ((((IData)(vlSelf->ENABLE) & (~ (IData)(vlSelf->nCS))) 
         & (~ (IData)(vlSelf->R_nW)))) {
        if (vlSelf->RS) {
            if (((((((((0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr)) 
                       | (1U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                      | (2U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                     | (3U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                    | (4U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                   | (5U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                  | (6U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                 | (7U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr)))) {
                if ((0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R0_h_total 
                        = vlSelf->DI;
                } else if ((1U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R1_h_displayed 
                        = vlSelf->DI;
                } else if ((2U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R2_h_sync_pos 
                        = vlSelf->DI;
                } else if ((3U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R3_v_sync_width 
                        = (0xfU & ((IData)(vlSelf->DI) 
                                   >> 4U));
                    vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width 
                        = (0xfU & (IData)(vlSelf->DI));
                } else if ((4U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R4_v_total 
                        = (0x7fU & (IData)(vlSelf->DI));
                } else if ((5U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj 
                        = (0x1fU & (IData)(vlSelf->DI));
                } else if ((6U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R6_v_displayed 
                        = (0x7fU & (IData)(vlSelf->DI));
                } else {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R7_v_sync_pos 
                        = (0x7fU & (IData)(vlSelf->DI));
                }
            } else if (((((((((8U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr)) 
                              | (9U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                             | (0xaU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                            | (0xbU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                           | (0xcU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                          | (0xdU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                         | (0xeU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) 
                        | (0xfU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr)))) {
                if ((8U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R8_skew 
                        = (3U & ((IData)(vlSelf->DI) 
                                 >> 4U));
                    vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace 
                        = (3U & (IData)(vlSelf->DI));
                } else if ((9U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R9_v_max_line 
                        = (0x1fU & (IData)(vlSelf->DI));
                } else if ((0xaU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R10_cursor_mode 
                        = (3U & ((IData)(vlSelf->DI) 
                                 >> 5U));
                    vlSelf->tb_um6845r__DOT__dut__DOT__R10_cursor_start 
                        = (0x1fU & (IData)(vlSelf->DI));
                } else if ((0xbU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R11_cursor_end 
                        = (0x1fU & (IData)(vlSelf->DI));
                } else if ((0xcU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R12_start_addr_h 
                        = (0x3fU & (IData)(vlSelf->DI));
                } else if ((0xdU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R13_start_addr_l 
                        = vlSelf->DI;
                } else if ((0xeU == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__addr))) {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R14_cursor_h 
                        = (0x3fU & (IData)(vlSelf->DI));
                } else {
                    vlSelf->tb_um6845r__DOT__dut__DOT__R15_cursor_l 
                        = vlSelf->DI;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->RS)))) {
            vlSelf->tb_um6845r__DOT__dut__DOT__addr 
                = (0x1fU & (IData)(vlSelf->DI));
        }
    }
    vlSelf->DE = (1U & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__de) 
                        >> ((~ (- (IData)((IData)(vlSelf->CRTC_TYPE)))) 
                            & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_skew))));
    vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last = (
                                                   ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R0_h_total) 
                                                    == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc)) 
                                                   & ((IData)(vlSelf->CRTC_TYPE) 
                                                      | (0U 
                                                         != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R0_h_total))));
    vlSelf->CURSOR = ((IData)(tb_um6845r__DOT__dut__DOT____VdfgTmp_h92972bcd__0) 
                      & (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_r) 
                          == (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R14_cursor_h) 
                               << 8U) | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R15_cursor_l))) 
                         & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__cursor_line)));
    vlSelf->tb_um6845r__DOT__dut__DOT__row_last = (1U 
                                                   & (((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R4_v_total) 
                                                       == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row)) 
                                                      | ((~ (IData)(vlSelf->CRTC_TYPE)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R4_v_total)))))));
    vlSelf->FIELD = ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__field)) 
                     & (3U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace)));
    vlSelf->RA = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line) 
                  | ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__field) 
                     & (3U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace))));
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
    vlSelf->tb_um6845r__DOT__dut__DOT__hcc_next = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last)
                                                    ? 0U
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc))));
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
    vlSelf->tb_um6845r__DOT__dut__DOT__row_frame_last 
        = ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj)) 
           & (((IData)(vlSelf->CRTC_TYPE) ? (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_last)
                : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_last_r)) 
              | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__in_adj)));
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
    vlSelf->tb_um6845r__DOT__dut__DOT__row_next = ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_frame_last)
                                                    ? 0U
                                                    : 
                                                   (0x7fU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row))));
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
    vlSelf->tb_um6845r__DOT__dut__DOT__frame_new = 
        ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_new) 
         & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_frame_last));
}

void Vtb_um6845r___024root___eval_nba(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_um6845r___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vtb_um6845r___024root___eval_triggers__act(Vtb_um6845r___024root* vlSelf);

bool Vtb_um6845r___024root___eval_phase__act(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_um6845r___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_um6845r___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_um6845r___024root___eval_phase__nba(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_um6845r___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_um6845r___024root___dump_triggers__ico(Vtb_um6845r___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_um6845r___024root___dump_triggers__nba(Vtb_um6845r___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_um6845r___024root___dump_triggers__act(Vtb_um6845r___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_um6845r___024root___eval(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval\n"); );
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
        if (VL_UNLIKELY((0x7d0U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtb_um6845r___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tb_um6845r.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_um6845r___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x7d0U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_um6845r___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_um6845r.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x7d0U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_um6845r___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_um6845r.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_um6845r___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_um6845r___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_um6845r___024root___eval_debug_assertions(Vtb_um6845r___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLOCK & 0xfeU))) {
        Verilated::overWidthError("CLOCK");}
    if (VL_UNLIKELY((vlSelf->CLKEN & 0xfeU))) {
        Verilated::overWidthError("CLKEN");}
    if (VL_UNLIKELY((vlSelf->nCLKEN & 0xfeU))) {
        Verilated::overWidthError("nCLKEN");}
    if (VL_UNLIKELY((vlSelf->nRESET & 0xfeU))) {
        Verilated::overWidthError("nRESET");}
    if (VL_UNLIKELY((vlSelf->CRTC_TYPE & 0xfeU))) {
        Verilated::overWidthError("CRTC_TYPE");}
    if (VL_UNLIKELY((vlSelf->ENABLE & 0xfeU))) {
        Verilated::overWidthError("ENABLE");}
    if (VL_UNLIKELY((vlSelf->nCS & 0xfeU))) {
        Verilated::overWidthError("nCS");}
    if (VL_UNLIKELY((vlSelf->R_nW & 0xfeU))) {
        Verilated::overWidthError("R_nW");}
    if (VL_UNLIKELY((vlSelf->RS & 0xfeU))) {
        Verilated::overWidthError("RS");}
}
#endif  // VL_DEBUG
