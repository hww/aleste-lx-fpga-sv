// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80___024root.h"

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__1(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out = 0;
    CData/*0:0*/ __VdfgTmp_h0f67300a__0;
    __VdfgTmp_h0f67300a__0 = 0;
    CData/*0:0*/ __VdfgTmp_h401674e0__0;
    __VdfgTmp_h401674e0__0 = 0;
    CData/*0:0*/ __VdfgTmp_hc8dbd629__0;
    __VdfgTmp_hc8dbd629__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha432ba06__0;
    __VdfgTmp_ha432ba06__0 = 0;
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 9U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xfU) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xfU) 
                                                      & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 5U) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0x1cU))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 5U) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x1cU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1dU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1dU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x10U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1aU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 3U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 3U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xdU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xdU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xeU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xeU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x11U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x11U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
               | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0x16U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | ((IData)((0x20000000U == (0x2c000000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
               | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0x16U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
               | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0x18U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xcU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xcU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xbU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 9U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0x1bU) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0x15U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0x1bU) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0x14U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x20000000U == (0x2c000000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
               | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0x15U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
               | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0x16U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x2100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 2U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (~ 
                                                      (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU))) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (~ 
                                                      (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 2U))) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x15U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_18 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3abf7a82__0) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_18)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_17 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3bf7ebda__0) 
           & (IData)(vlSelf->__VdfgTmp_ha7febeb7__0));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_hf2_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf2_we;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_hf2_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf2_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_im_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_im_we;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__ctl_im_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_im_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_ex_af 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_af;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_ex_af 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_af;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_exx 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_exx;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_exx 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_exx;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_repeat_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_repeat_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_tbl_ed_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_ed_set;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_tbl_ed_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_ed_set;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_halt_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_halt_set;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_halt_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_halt_set;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_tbl_cb_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_tbl_cb_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_iffx_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__ctl_iffx_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_tbl_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_tbl_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_iy_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_iy_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_no_ints 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__ctl_no_ints 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_8 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_ir_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we;
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__ctl_ir_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_mWrite 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ctl_mWrite 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_pf_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_pf_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_ex_de_hl 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_ex_de_hl 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_43 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_50 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_53) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_nf_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_nf_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_iffx_bit 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__ctl_iffx_bit 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_mRead 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ctl_mRead 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_zero_16bit 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_alu_zero_16bit 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_7 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_nf_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_nf_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_nf_clr 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_nf_clr 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_6 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_bus_db_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__ctl_bus_db_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_iff1_iff2 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__ctl_iff1_iff2 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_17 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_0 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2)));
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_alu 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_alu 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu;
    vlSelf->tb_z80__DOT__dut__DOT__in_alu = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu;
    vlSelf->tb_z80__DOT__dut__DOT__prefix = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_34) 
                                              << 6U) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->nHALT) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__table_xx) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED)))))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op1_sel_low 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op1_sel_low 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low;
    vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_low 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op1_sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op1_sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__SYNTHESIZED_WIRE_1 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__fMRead 
        = vlSelf->tb_z80__DOT__dut__DOT__fMRead;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__fMRead 
        = vlSelf->tb_z80__DOT__dut__DOT__fMRead;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op2_sel_lq 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op2_sel_lq 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq;
    vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_lq = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf2_sel_daa 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf2_sel_daa 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_9 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf2_sel_shift 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf2_sel_shift 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__sel 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa) 
            << 1U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_6 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_38) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_8 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_apin_mux 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_apin_mux 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__SYNTHESIZED_WIRE_0 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__fIORead 
        = vlSelf->tb_z80__DOT__dut__DOT__fIORead;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__fIORead 
        = vlSelf->tb_z80__DOT__dut__DOT__fIORead;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__fIORead 
        = vlSelf->tb_z80__DOT__dut__DOT__fIORead;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_cond_short 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_cond_short;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_cond_short 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_cond_short;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_cond_short)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__fMWrite 
        = vlSelf->tb_z80__DOT__dut__DOT__fMWrite;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__fMWrite 
        = vlSelf->tb_z80__DOT__dut__DOT__fMWrite;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_7));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__fIOWrite 
        = vlSelf->tb_z80__DOT__dut__DOT__fIOWrite;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__fIOWrite 
        = vlSelf->tb_z80__DOT__dut__DOT__fIOWrite;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__fIOWrite 
        = vlSelf->tb_z80__DOT__dut__DOT__fIOWrite;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_9 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fFetch) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite)))));
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_8) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_pf_sel 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_6 
        = (IData)(((3U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__repeat_en)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_8 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_9 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                    >> 1U)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_mask543_en 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en;
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__ctl_sw_mask543_en 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en;
    vlSelf->tb_z80__DOT__dut__DOT__bus_sw_mask543_en 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_4 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_daa_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_daa_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_daa_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_daa_oe;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_shift_en 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_shift_en 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en;
    vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3));
    vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_0) 
         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_66_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_66_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_daa_oe));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sel_ir 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sel_ir 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir;
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ir = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_bus_inc_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_bus_inc_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe;
    vlSelf->tb_z80__DOT__dut__DOT__abus__en7 = (0xffffU 
                                                & (VL_SHIFTL_III(16,16,32, 
                                                                 (3U 
                                                                  & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 0xeU) 
                                                   | (VL_SHIFTL_III(16,16,32, 
                                                                    (3U 
                                                                     & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 0xcU) 
                                                      | (VL_SHIFTL_III(16,16,32, 
                                                                       (3U 
                                                                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 0xaU) 
                                                         | (VL_SHIFTL_III(16,16,32, 
                                                                          (3U 
                                                                           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 8U) 
                                                            | (VL_SHIFTL_III(16,16,32, 
                                                                             (3U 
                                                                              & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 6U) 
                                                               | (VL_SHIFTL_III(16,16,32, 
                                                                                (3U 
                                                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 4U) 
                                                                  | (VL_SHIFTL_III(16,16,32, 
                                                                                (3U 
                                                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 2U) 
                                                                     | (3U 
                                                                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe))))))))))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_4u 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__ctl_sw_4u 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_inc_cy 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_inc_cy 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                 ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_core_V 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_core_V 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V;
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_V = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sys_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_use_sp 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_use_sp 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_5 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op2_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op2_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_op2_oe = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op1_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op1_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_op1_oe = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_core_R 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_core_R 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R;
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_R = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_inc_dec 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_inc_dec 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_16 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 0xeU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 0xdU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 0xcU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_12 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 0xbU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 0xaU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 9U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_46 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 8U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 7U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_5 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 6U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 5U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 4U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 3U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 2U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 1U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_gp_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we;
    vlSelf->tb_z80__DOT__dut__DOT__reg_gp_we = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_86 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_core_S 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_core_S 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S;
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_S = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_1u 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u;
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__ctl_sw_1u 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u;
    vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1u = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_iorw 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ctl_iorw 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit));
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__in_alu 
        = vlSelf->tb_z80__DOT__dut__DOT__in_alu;
    vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT__prefix 
        = vlSelf->tb_z80__DOT__dut__DOT__prefix;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op1_sel_low 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_low;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_sel_low 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_low;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op1_sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__SYNTHESIZED_WIRE_1 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__SYNTHESIZED_WIRE_1;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op2_sel_lq 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_lq;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_lq 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_lq;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__sel 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__sel;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__select 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_apin_mux;
    vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_2) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_3) 
            | (IData)(vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_4)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_10) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5));
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_5 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_9));
    vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_0) 
         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_1));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__sel 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_pf_sel;
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__bus_sw_mask543_en 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_sw_mask543_en;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__sw_mask543_en 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_sw_mask543_en;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_shift_right 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_shift_right 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_shift_left 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_shift_left 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_ir 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ir;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_ir 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ir;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__carry_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_inc_cy;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__d0_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_core_V 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_V;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_V 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_V;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op2_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op2_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op2_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op1_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op1_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op1_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_core_R 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_R;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_R 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_R;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__decrement 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_inc_dec;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__dec1_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__dec0_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__dec1_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__dec0_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__dec1_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_46;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__dec0_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__dec1_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__dec0_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__dec1_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__dec0_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__dec1_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__dec0_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_34 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41) 
                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42) 
                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43) 
                       & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44) 
                          & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_5) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_gp_we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_gp_we;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_gp_we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_gp_we;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_core_S 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_S;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_S 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_S;
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__bus_sw_1u 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1u;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__sw_up_en 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1u;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__sel_b 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_sel_low;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__sel_b 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_lq;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__sel_b 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_lq;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__bus_db_pin_re 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__bus_db_pin_re 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__sel 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0) 
            << 1U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_9 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)));
    vlSelf->tb_z80__DOT__dut__DOT__bus_ab_pin_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_5) 
         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_6));
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__bus_db_pin_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__bus_db_pin_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe;
    vlSelf->D__en1 = (0xffU & (VL_SHIFTL_III(8,8,32, 
                                             (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe)))), 6U) 
                               | (VL_SHIFTL_III(8,8,32, 
                                                (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe)))), 4U) 
                                  | (VL_SHIFTL_III(8,8,32, 
                                                   (3U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe)))), 2U) 
                                     | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe))))))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__shift_right 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_shift_right;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__shift_left 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_shift_left;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__carry_borrow_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__carry_in;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__V 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_V;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__R 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_R;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 1U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__SYNTHESIZED_WIRE_0)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__carry_borrow_out 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__carry_borrow_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22) 
                 ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                    >> 2U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_35) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_34));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__S 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_S;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__sel 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__sel;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__bus_ab_pin_we 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_ab_pin_we;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__bus_ab_pin_we 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_ab_pin_we;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__V 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__V;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__V 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__V;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__V 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__V;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__V 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__V;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__R 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__R;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__R 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__R;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__R 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__R;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__R 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__R;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__d1_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out7 
        = ((0xfffcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out7)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out)) 
               << 1U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                         & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out))));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__d0_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 3U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__SYNTHESIZED_WIRE_0)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__carry_borrow_out 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__carry_borrow_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25) 
                 ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                    >> 4U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_39 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__carry_borrow_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47) 
                 ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                    >> 7U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_46)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_46) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48) 
                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49) 
                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_12))))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__S 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__S;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__S 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__S;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__S 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__S;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__S 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__S;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__d1_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out6 
        = ((0xfff3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out6)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out)) 
               << 3U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                          & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out)) 
                         << 2U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__d0_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 5U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__SYNTHESIZED_WIRE_0)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__carry_borrow_out 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_39;
    __VdfgTmp_ha432ba06__0 = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_39) 
                                    ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 6U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__d0_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 8U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__SYNTHESIZED_WIRE_0)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__carry_borrow_out 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__carry_borrow_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31) 
                 ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                    >> 9U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_36 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__carry_borrow_in 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51;
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                 ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                    >> 0xcU)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_38 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_16))));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_37 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__d1_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out5 
        = ((0xffcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out5)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out)) 
               << 5U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                          & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out)) 
                         << 4U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out4 
        = ((0xff3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out4)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out)) 
               << 7U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                          & (IData)(__VdfgTmp_ha432ba06__0)) 
                         << 6U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__d1_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__d0_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out3 
        = ((0xfcffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out3)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out)) 
               << 9U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                          & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out)) 
                         << 8U)));
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 0xaU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__SYNTHESIZED_WIRE_0)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__carry_borrow_out 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_36;
    __VdfgTmp_hc8dbd629__0 = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_36) 
                                    ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__d0_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out;
    __VdfgTmp_h0f67300a__0 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_38) 
                              ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                 >> 0xfU));
    tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 0xdU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__SYNTHESIZED_WIRE_0)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__carry_borrow_out 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_37;
    __VdfgTmp_h401674e0__0 = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_37) 
                                    ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 0xeU)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__d1_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out2 
        = ((0xf3ffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out2)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(__VdfgTmp_hc8dbd629__0)) 
               << 0xbU) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                            & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out)) 
                           << 0xaU)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__d1_out 
        = tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out1 
        = ((0xcfffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out1)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out)) 
               << 0xdU) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                            & (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out)) 
                           << 0xcU)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_7 
        = (((IData)(__VdfgTmp_h0f67300a__0) << 0xfU) 
           | (((IData)(__VdfgTmp_h401674e0__0) << 0xeU) 
              | (((IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out) 
                  << 0xdU) | (((IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out) 
                               << 0xcU) | (((IData)(__VdfgTmp_hc8dbd629__0) 
                                            << 0xbU) 
                                           | (((IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out) 
                                               << 0xaU) 
                                              | (((IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out) 
                                                  << 9U) 
                                                 | (((IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out) 
                                                     << 8U) 
                                                    | (((IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out) 
                                                        << 7U) 
                                                       | (((IData)(__VdfgTmp_ha432ba06__0) 
                                                           << 6U) 
                                                          | (((IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out) 
                                                              << 5U) 
                                                             | (((IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out) 
                                                                 << 4U) 
                                                                | (((IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out) 
                                                                    << 3U) 
                                                                   | (((IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out) 
                                                                       << 2U) 
                                                                      | (((IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out) 
                                                                          << 1U) 
                                                                         | (IData)(tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out))))))))))))))));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out0 
        = ((0x3fffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out0)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(__VdfgTmp_h0f67300a__0)) 
               << 0xfU) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                            & (IData)(__VdfgTmp_h401674e0__0)) 
                           << 0xeU)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_7;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__in1 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_7;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_7;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__SYNTHESIZED_WIRE_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_7) 
           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux))));
    vlSelf->tb_z80__DOT__dut__DOT____Vcelloutt__address_latch___abus__out 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out0) 
            & VL_SHIFTL_III(16,16,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 0xeU)) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out1) 
               & VL_SHIFTL_III(16,16,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 0xcU)) 
              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out2) 
                  & VL_SHIFTL_III(16,16,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 0xaU)) 
                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out3) 
                     & VL_SHIFTL_III(16,16,32, (3U 
                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 8U)) 
                    | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out4) 
                        & VL_SHIFTL_III(16,16,32, (3U 
                                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 6U)) 
                       | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out5) 
                           & VL_SHIFTL_III(16,16,32, 
                                           (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 4U)) 
                          | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out6) 
                              & VL_SHIFTL_III(16,16,32, 
                                              (3U & 
                                               (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe)))), 2U)) 
                             | (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out7) 
                                      & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe))))))))))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__2(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_iorq_ff4) 
              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_15)));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__intr_iorq 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_intr_ff3) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta));
    vlSelf->tb_z80__DOT__dut__DOT__busack = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_1 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff3) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1))));
    vlSelf->tb_z80__DOT__dut__DOT__timings_en = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_z80__DOT__dut__DOT__hold_clk_iorq) 
                                                     | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9) 
                                                        | (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED)))));
    vlSelf->tb_z80__DOT__dut__DOT__nIORQ_out = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__intr_iorq) 
                                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq))));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__busack 
        = vlSelf->tb_z80__DOT__dut__DOT__busack;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__busack 
        = vlSelf->tb_z80__DOT__dut__DOT__busack;
    vlSelf->nBUSACK = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__busack)));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__m1_mreq 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_1) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr))));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__timings_en 
        = vlSelf->tb_z80__DOT__dut__DOT__timings_en;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__timings_en 
        = vlSelf->tb_z80__DOT__dut__DOT__timings_en;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_T 
        = vlSelf->tb_z80__DOT__dut__DOT__timings_en;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nIORQ_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nIORQ_out;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nIORQ_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nIORQ_out;
    vlSelf->tb_z80__DOT__nBUSACK = vlSelf->nBUSACK;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__m1_mreq) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mrd_mreq));
    vlSelf->tb_z80__DOT__dut__DOT__nBUSACK = vlSelf->tb_z80__DOT__nBUSACK;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nMEMRQ_int 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_mreq))));
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nBUSACK 
        = vlSelf->tb_z80__DOT__dut__DOT__nBUSACK;
    vlSelf->tb_z80__DOT__dut__DOT__nMREQ_out = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_0) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nMEMRQ_int));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nMREQ_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nMREQ_out;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nMREQ_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nMREQ_out;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__3(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_sequent__TOP__9(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__ctl_eval_cond = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_eval_cond = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_eval_cond) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__iorq_Tw = vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__DFF_inst5;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_eval_cond 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_eval_cond;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_eval_cond 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_eval_cond;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__iorq_Tw 
        = vlSelf->tb_z80__DOT__dut__DOT__iorq_Tw;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq_Tw 
        = vlSelf->tb_z80__DOT__dut__DOT__iorq_Tw;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_sequent__TOP__10(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_13 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__intr) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__iff1));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__4(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_9 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_hf2));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_sequent__TOP__11(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_12 
        = ((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8))) 
           || (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x3));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_2 
        = vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_12;
    vlSelf->tb_z80__DOT__dut__DOT__nreset = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_12)));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_6 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__5(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__clrpc = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc_int) 
                                            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_9) 
                                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__DFFE_intr_ff3) 
                                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_10))));
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc 
        = vlSelf->tb_z80__DOT__dut__DOT__clrpc;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__clrpc 
        = vlSelf->tb_z80__DOT__dut__DOT__clrpc;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_2 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clrpc)));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__6(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->__VdfgTmp_h392e7459__0 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_22) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x11U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x12U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 8U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 8U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 8U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000U 
                                                        == 
                                                        (0x40100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000U 
                                                        == 
                                                        (0x40100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x2100U 
                                                        == 
                                                        (0x2100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x100U 
                                                        == 
                                                        (0x2100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xdU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xdU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xdU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 7U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 7U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x810000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x810000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x800000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x800000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 5U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 5U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 8U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1bU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 2U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1cU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1cU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 2U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1dU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1dU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xfU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xfU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x10U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x10U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1aU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1aU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                               & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xdU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xdU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xeU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xeU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x11U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x11U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x11U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 6U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setIXIY = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla17npla50M1T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla17npla50M1T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla17npla50M1T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla17npla50M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x11U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x12U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x11U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x12U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x11U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x12U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x11U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x12U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T1_2 
        = ((IData)((0x20000000U == (0x2c000000U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T1_3 
        = ((IData)((0x20000000U == (0x2c000000U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((IData)((0x20000000U == (0x2c000000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((IData)((0x20000000U == (0x2c000000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((IData)(
                                                           (0x20000000U 
                                                            == 
                                                            (0x2c000000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((IData)(
                                                            (0x20000000U 
                                                             == 
                                                             (0x2c000000U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((IData)((0x20000000U == (0x2c000000U 
                                       & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((IData)(
                                                       (0x20000000U 
                                                        == 
                                                        (0x2c000000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T4_3 
        = ((IData)((0x20000000U == (0x2c000000U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T4_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T4_4 
        = ((IData)((0x20000000U == (0x2c000000U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T4_4))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((IData)((0x20000000U == (0x2c000000U & 
                                      vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((IData)((0x20000000U == (0x2c000000U & 
                                      vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((IData)(
                                                            (0x20000000U 
                                                             == 
                                                             (0x2c000000U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((IData)(
                                                            (0x20000000U 
                                                             == 
                                                             (0x2c000000U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((IData)((0x20000000U == (0x2c000000U 
                                        & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((IData)((0x20000000U == (0x2c000000U 
                                       & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla58M1T1_2 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla58M1T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla58M1T1_3 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla58M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T1_3 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T2_4 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M1T1_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M1T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M1T1_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M2T1_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M2T1_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T1_3 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T2_4 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M1T4_4 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M1T4_4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M1T4_5 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M1T4_5))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M2T1_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M2T1_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M4T1_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M4T1_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M4T1_4 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M4T1_4))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 8U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 8U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T1_3 
        = ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000U 
                                                            == 
                                                            (0x40100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T2_4 
        = ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla50npla40M3T1_2 
        = ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla50npla40M3T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla50npla40M3T1_3 
        = ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla50npla40M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x40000U 
                                                            == 
                                                            (0x40100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000U 
                                                            == 
                                                            (0x40100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((IData)(
                                                       (0x40000U 
                                                        == 
                                                        (0x40100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((IData)(
                                                       (0x40000U 
                                                        == 
                                                        (0x40100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M1T4_4 
        = ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M1T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M1T4_5 
        = ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M1T4_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((IData)(
                                                           (0x2100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M2T1_2 
        = ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M2T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M2T1_3 
        = ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x2100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x2100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla8pla13M2T2_4 
        = ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla8pla13M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((IData)(
                                                       (0x2100U 
                                                        == 
                                                        (0x2100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M1T1_2 
        = ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M1T1_3 
        = ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M2T1_2 
        = ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M2T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M2T1_3 
        = ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla8npla13M2T2_4 
        = ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla8npla13M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((IData)(
                                                       (0x100U 
                                                        == 
                                                        (0x2100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T3_6 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_5 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_10 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_10))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla38pla13M4T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla38pla13M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla38pla13M4T1_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla38pla13M4T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M4T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xdU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla38npla13M1T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla38npla13M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla38npla13M1T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla38npla13M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T3_6 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T3_6 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T3_6))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla83M1T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla83M1T4_3))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 0x13U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla57M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla57M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla57M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla57M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla57M1T4_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla57M1T4_4))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x19U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x19U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x19U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x19U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla7M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla7M1T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla7M3T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla7M3T1_6))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M3T1_7 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M3T1_7)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 7U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((IData)((0x40002000U == (0x40002000U 
                                       & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T1_3 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T2_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((IData)((0x40002000U == (0x40002000U 
                                       & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T3_6 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T1_3 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T2_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_5 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((IData)((0x40002000U == (0x40002000U 
                                       & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_10 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_10))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M4T1_3 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M4T1_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M4T1_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M4T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T2_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T3_5 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M5T1_3 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M5T1_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M5T1_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M5T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M5T2_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M5T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((IData)((0x40000000U == (0x40002000U 
                                       & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T1_3 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T2_4 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((IData)((0x40000000U == (0x40002000U 
                                       & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T3_6 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T1_3 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T2_4 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((IData)((0x40000000U == (0x40002000U 
                                       & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T3_6 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T3_6))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T1_3 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T2_4 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M4T3_5 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M4T3_5))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M4T3_6 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M4T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T1_3 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T2_4 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M5T3_4 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M5T3_4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M5T3_5 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M5T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T3_6 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_5 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_10 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_10))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M4T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M4T1_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M4T1_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M4T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T3_5 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M5T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M5T1_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M5T1_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M5T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M5T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M5T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T3_6 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T3_6 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T3_6))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M4T3_5 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M4T3_5))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M4T3_6 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M4T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M5T3_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M5T3_4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M5T3_5 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M5T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T4_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T5_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T5_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T5_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T5_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 5U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T6))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M1T5_4 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M1T5_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M1T5_5 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M1T5_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T1_5 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T1_5))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T1_6 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T2_3 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T2_4 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T3_5 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T3_6 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T1_5 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T1_5))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T1_6 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T2_3 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T2_4 
        = ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((IData)(
                                                       (0x810000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T1_3 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T1_4 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T2_3 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T2_4 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T3_5 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T3_5))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T3_6 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T1_3 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T1_4 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T2_3 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T2_4 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((IData)(
                                                       (0x800000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T3_4 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T3_4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T3_5 
        = ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 2U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 2U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 7U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 1U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 1U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M3T3_4))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T4_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T4_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T4_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T1_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T1_5))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T3_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T1_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T1_5))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M5T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M5T3_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T4_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep) 
                 | vlSelf->tb_z80__DOT__dut__DOT__pla[0U]));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xcU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T3_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep) 
                                                  | (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__repeat_en)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xbU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xbU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
                                               & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep) 
                                                   | (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__repeat_en))) 
                                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_zf))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 1U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x14U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x14U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 1U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T4_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T4_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T4_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T4_4))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x14U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x14U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T2_2 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T2_3 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T3_1 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T3_2 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T4_4 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T4_4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T4_5 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T4_5))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T1_3 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T2_4 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla52M1T3_1 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla52M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla52M1T3_2 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla52M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T1_3 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T2_4 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x14U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T2_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T2_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T3_1 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T3_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M2T1_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M2T1_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla52M2T2_4 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla52M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M4T2_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M4T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M4T2_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 2U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x15U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 2U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x15U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5)) 
                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T4nop4op5nop3_1 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
           & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5)) 
                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T4nop4op5nop3_1))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T4nop4op5nop3_2 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
           & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5)) 
                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T4nop4op5nop3_2))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 2U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x15U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 2U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x15U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__M4)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__M4)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__M4)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla53M1T3_1 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla53M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla53M1T3_2 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla53M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T1_3 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T2_4 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T2_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T2_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T3_1 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T3_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M2T1_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M2T1_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
}
