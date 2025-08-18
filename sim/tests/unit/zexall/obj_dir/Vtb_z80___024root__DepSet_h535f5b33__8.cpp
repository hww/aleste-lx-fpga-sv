// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80___024root.h"

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__6(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
           & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = (((
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x11U) 
                                                   & (~ 
                                                      (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x12U))) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x1aU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x1bU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 8U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 8U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000U 
                                                              == 
                                                              (0x40100U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x2100U 
                                                              == 
                                                              (0x2100U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x100U 
                                                              == 
                                                              (0x2100U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0xdU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0xdU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0xdU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0xdU))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0xdU))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0xdU))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 7U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 7U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40002000U == (0x40002000U 
                                        & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40002000U == (0x40002000U 
                                        & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40000000U == (0x40002000U 
                                        & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40000000U == (0x40002000U 
                                        & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x800000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x800000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 9U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xfU) 
                                                       & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                          >> 3U)) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xfU) 
                                                      & (8U 
                                                         != 
                                                         (8U 
                                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 5U) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0x1cU))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 5U) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x1cU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1dU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1dU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x10U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1aU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 3U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 3U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xdU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xdU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xeU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xeU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x11U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x11U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] >> 0x11U) 
          & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] >> 7U) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(
                                                          (0x810000U 
                                                           == 
                                                           (0x810000U 
                                                            & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xcU) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xcU) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xbU) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 9U) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x15U) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 0x1bU)) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x14U) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 0x1bU)) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] >> 0x11U) 
          & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x20000000U == (0x2c000000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2 = 
        ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] >> 0xeU) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
              >> 3U));
    vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left = 
        ((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re = 
        (((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)) 
            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe = 
        ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff) 
              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite)) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
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
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                 ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 0xdU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 0xcU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)));
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
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
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
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 1U) ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41))));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47 
        = ((~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40) 
                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41) 
                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42) 
                       & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43) 
                          & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44) 
                             & ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                  >> 6U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45)))))))));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out7 
        = ((0xfffcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out7)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out)) 
               << 1U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out))));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22) 
                 ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                    >> 2U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 3U) ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42))));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47) 
                 ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                    >> 7U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 8U) ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48))));
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
                       & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                           >> 0xbU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)))))));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out6 
        = ((0xfff3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out6)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out)) 
               << 3U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out)) 
                         << 2U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25) 
                 ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                    >> 4U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 5U) ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44))));
    vlSelf->__VdfgTmp_ha432ba06__0 = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44) 
                                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43))) 
                                            ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                               >> 6U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31) 
                 ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                    >> 9U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 0xaU) ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49))));
    vlSelf->__VdfgTmp_hc8dbd629__0 = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49) 
                                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50))) 
                                            ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                               >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                 ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                    >> 0xcU)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                  >> 0xdU) ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52))));
    vlSelf->__VdfgTmp_h401674e0__0 = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52) 
                                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53))) 
                                            ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                               >> 0xeU)));
    vlSelf->__VdfgTmp_h0f67300a__0 = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53) 
                                                   & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                                       >> 0xeU) 
                                                      ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec))))) 
                                            ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                               >> 0xfU)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out5 
        = ((0xffcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out5)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out)) 
               << 5U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out)) 
                         << 4U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out4 
        = ((0xff3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out4)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out)) 
               << 7U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                          & (IData)(vlSelf->__VdfgTmp_ha432ba06__0)) 
                         << 6U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out3 
        = ((0xfcffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out3)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out)) 
               << 9U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out)) 
                         << 8U)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out2 
        = ((0xf3ffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out2)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(vlSelf->__VdfgTmp_hc8dbd629__0)) 
               << 0xbU) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out)) 
                           << 0xaU)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out1 
        = ((0xcfffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out1)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out)) 
               << 0xdU) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out)) 
                           << 0xcU)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out0 
        = ((0x3fffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out0)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                & (IData)(vlSelf->__VdfgTmp_h0f67300a__0)) 
               << 0xfU) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
                            & (IData)(vlSelf->__VdfgTmp_h401674e0__0)) 
                           << 0xeU)));
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

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__7(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__7\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0 
        = (1U & ((~ ((~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff3) 
                         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1))) 
                     | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr))) 
                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mrd_ff3) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd))));
    vlSelf->tb_z80__DOT__dut__DOT__timings_en = (1U 
                                                 & (~ 
                                                    (((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__DFF_inst5) 
                                                      | (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7)) 
                                                     | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9) 
                                                        | (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED)))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_sequent__TOP__11(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__fpga_reset)));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_sequent__TOP__12(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_sequent__TOP__13(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_sequent__TOP__13\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1 
        = vlSelf->__Vdly__tb_z80__DOT__dut__DOT__resets___DOT__x1;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__8(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__8\n"); );
    // Body
    vlSelf->nM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16) 
                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_12));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9 
        = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nreset));
    vlSelf->nMREQ__en2 = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED)) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nreset));
    vlSelf->A__en0 = (0xffffU & (VL_SHIFTL_III(16,16,32, 
                                               (3U 
                                                & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 0xeU) 
                                 | (VL_SHIFTL_III(16,16,32, 
                                                  (3U 
                                                   & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 0xcU) 
                                    | (VL_SHIFTL_III(16,16,32, 
                                                     (3U 
                                                      & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 0xaU) 
                                       | (VL_SHIFTL_III(16,16,32, 
                                                        (3U 
                                                         & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 8U) 
                                          | (VL_SHIFTL_III(16,16,32, 
                                                           (3U 
                                                            & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 6U) 
                                             | (VL_SHIFTL_III(16,16,32, 
                                                              (3U 
                                                               & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 4U) 
                                                | (VL_SHIFTL_III(16,16,32, 
                                                                 (3U 
                                                                  & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 2U) 
                                                   | (3U 
                                                      & (- (IData)((IData)(vlSelf->nMREQ__en2))))))))))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_sequent__TOP__14(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_sequent__TOP__14\n"); );
    // Body
    if (vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21) {
        if (vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we) {
            vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2 
                = vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit;
        }
    } else {
        vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2 = 0U;
    }
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__10(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__10\n"); );
    // Init
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h9419b5f6__0;
    tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h9419b5f6__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h42c530b2__0;
    tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h42c530b2__0 = 0;
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out4 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out4)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__dout))));
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out5 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out5)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__dout))));
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out6 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out6)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__dout))));
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out7 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out7)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__dout))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2 
        = (0xfU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high))) 
                    & (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high)) 
                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))) 
                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high) 
                          & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))))))) 
                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low)) 
                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))) 
                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low) 
                          & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))))))) 
                      & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high))))))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1 
        = (((- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high)) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low) 
              & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_20 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9) 
            | (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_hf2)) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe));
    vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out = (1U 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe) 
                                                    | (((IData)(
                                                                (0xaU 
                                                                 == 
                                                                 (0xaU 
                                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high)))) 
                                                        | (IData)(
                                                                  (0xcU 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))))) 
                                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf) 
                                                          | ((IData)(
                                                                     (9U 
                                                                      == (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))) 
                                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9))))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_8 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                 >> 3U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_8 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                 >> 2U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_8 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                 >> 1U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_8 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)));
    tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h42c530b2__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_20));
    tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h9419b5f6__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                        | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2))) 
                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_8) 
                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out2)) 
           | ((IData)(tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h42c530b2__0) 
              << 2U));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out3)) 
           | ((IData)(tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h42c530b2__0) 
              << 1U));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out0)) 
           | ((IData)(tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h9419b5f6__0) 
              << 6U));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out1)) 
           | ((IData)(tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h9419b5f6__0) 
              << 5U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0 
        = ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_8)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                     & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                        >> 1U)) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_8) 
                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0 
        = (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
              >> 1U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                        | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                           >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_8)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out9 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out9)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0)) 
               << 1U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                     & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                        >> 2U)) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_8) 
                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0 
        = (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
              >> 2U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                        | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                           >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_8)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
                     & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                        >> 3U)) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_8) 
                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0 
        = (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
              >> 3U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
                        | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                           >> 3U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_8)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_15 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu));
    vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out = 
        ((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp) 
             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)) 
            ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0)) 
           ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0)) 
          ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0)) 
         ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out8 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out8)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0)) 
               << 3U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0)) 
                         << 2U)));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__11(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__11\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out38 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out38)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out39 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out39)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out40 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out40)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out41 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out41)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out32 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out32)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out33 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out33)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out34 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out34)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out35 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out35)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__12(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__12\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out7 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out7)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out8 
        = ((0xf7U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out8)) 
           | (0xfffffff8U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                              << 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out4 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out4)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d))) 
                        << 6U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                  & ((- (IData)((1U 
                                                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en))))) 
                                     << 6U)))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__13(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__13\n"); );
    // Init
    CData/*3:0*/ tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__en;
    tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__en = 0;
    CData/*7:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__en;
    tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__en = 0;
    CData/*7:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__en;
    tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__en = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h74ac4011__0;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h74ac4011__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h7f28842a__0;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h7f28842a__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0 = 0;
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__test1 
        = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out0 
        = ((0x7fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out0)) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)) 
              << 7U));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out2 
        = ((0xf1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out2)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_xf) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)) 
               << 3U) | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)) 
                          << 2U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)) 
                                    << 1U))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out3 
        = ((0xfeU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out3)) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out1 
        = ((0x8fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out1)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)) 
               << 6U) | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_yf) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)) 
                          << 5U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_hf)) 
                                    << 4U))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_26 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq) 
              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero)));
    tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__en 
        = (0xfU & (VL_SHIFTL_III(4,4,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe)))), 2U) 
                   | ((3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe)))) 
                      | (VL_SHIFTL_III(4,4,32, (3U 
                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe)))), 2U) 
                         | ((3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe)))) 
                            | (VL_SHIFTL_III(4,4,32, 
                                             (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe)))), 2U) 
                               | ((3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe)))) 
                                  | (VL_SHIFTL_III(4,4,32, 
                                                   (3U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe)))), 2U) 
                                     | ((3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe)))) 
                                        | (VL_SHIFTL_III(4,4,32, 
                                                         (3U 
                                                          & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe)))), 2U) 
                                           | (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe))))))))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54 
        = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
              >> 1U));
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0 
        = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we)) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
              >> 1U));
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0 
        = (1U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we)) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hd903cd75__0 
        = (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe))) 
                 & ((IData)(tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__en) 
                    >> 2U)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hdc1ea228__0 
        = (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe))) 
                 & (IData)(tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__en)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
            >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi));
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h7f28842a__0 
        = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi)) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
              >> 1U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_hi = (
                                                   (~ 
                                                    (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                                                      >> 1U) 
                                                     & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo)) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir)))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d));
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h74ac4011__0 
        = (1U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo)) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_af) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_af)) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h7f28842a__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h7f28842a__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h7f28842a__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h74ac4011__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h74ac4011__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h74ac4011__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en24 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en4 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en6 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en20 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en18 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en12 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en14 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en8 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en10 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en25 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en5 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en7 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en21 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en19 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en13 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en15 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en9 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en11 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en22 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en16 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en26 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en23 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en17 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en27 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en0 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en1 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en2 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en3 
        = (0xffU & (VL_SHIFTL_III(8,8,32, (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34)))), 6U) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34)))), 4U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34)))), 2U) 
                          | (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))))))));
    tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__en 
        = (0xffU & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en24) 
                    | ((3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi)))) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi)))), 2U) 
                          | (VL_SHIFTL_III(8,8,32, 
                                           (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi)))), 4U) 
                             | (VL_SHIFTL_III(8,8,32, 
                                              (3U & 
                                               (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi)))), 6U) 
                                | ((3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u)))) 
                                   | (VL_SHIFTL_III(8,8,32, 
                                                    (3U 
                                                     & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u)))), 2U) 
                                      | (VL_SHIFTL_III(8,8,32, 
                                                       (3U 
                                                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u)))), 4U) 
                                         | (VL_SHIFTL_III(8,8,32, 
                                                          (3U 
                                                           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u)))), 6U) 
                                            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en26) 
                                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en0) 
                                                  | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en20) 
                                                     | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en18) 
                                                        | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en14) 
                                                           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en12) 
                                                              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en10) 
                                                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en8) 
                                                                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en6) 
                                                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en2) 
                                                                          | (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en4)))))))))))))))))))));
    tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__en 
        = (0xffU & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en25) 
                    | ((3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo)))) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo)))), 2U) 
                          | (VL_SHIFTL_III(8,8,32, 
                                           (3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo)))), 4U) 
                             | (VL_SHIFTL_III(8,8,32, 
                                              (3U & 
                                               (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo)))), 6U) 
                                | ((3U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u)))) 
                                   | (VL_SHIFTL_III(8,8,32, 
                                                    (3U 
                                                     & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u)))), 2U) 
                                      | (VL_SHIFTL_III(8,8,32, 
                                                       (3U 
                                                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u)))), 4U) 
                                         | (VL_SHIFTL_III(8,8,32, 
                                                          (3U 
                                                           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u)))), 6U) 
                                            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en27) 
                                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en1) 
                                                  | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en21) 
                                                     | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en19) 
                                                        | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en15) 
                                                           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en13) 
                                                              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en11) 
                                                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en9) 
                                                                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en7) 
                                                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en3) 
                                                                          | (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en5)))))))))))))))))))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__en28 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__en) 
                                                   >> 6U))), 6U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__en29 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__en) 
                                                   >> 4U))), 4U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__en30 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__en) 
                                                   >> 2U))), 2U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__en31 
        = (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi))) 
                 & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__en)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__en44 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_hi))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__en) 
                                                   >> 6U))), 6U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__en45 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_hi))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__en) 
                                                   >> 4U))), 4U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__en46 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_hi))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__en) 
                                                   >> 2U))), 2U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__en47 
        = (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_hi))) 
                 & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__en)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en38 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__en) 
                                                   >> 6U))), 6U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en39 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__en) 
                                                   >> 4U))), 4U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en40 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__en) 
                                                   >> 2U))), 2U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en41 
        = (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d))) 
                 & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__en)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en32 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__en) 
                                                   >> 6U))), 6U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en33 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__en) 
                                                   >> 4U))), 4U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en34 
        = (0xffU & VL_SHIFTL_III(8,8,32, (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo))) 
                                                & ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__en) 
                                                   >> 2U))), 2U));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en35 
        = (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo))) 
                 & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__en)));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__14(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__14\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__SYNTHESIZED_WIRE_4 
        = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__15(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__15\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_2 
        = (7U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                 & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en)))))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__16(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__16\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out16 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out16)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out17 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out17)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out6 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out6)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out7 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out7)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out20 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out20)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out21 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out21)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out10 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out10)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out11 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out11)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))));
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__dout))));
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__dout))));
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__dout))));
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__dout))));
    vlSelf->D = ((IData)(vlSelf->D__en1) & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out0) 
                                             & VL_SHIFTL_III(8,8,32, 
                                                             (3U 
                                                              & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe)))), 6U)) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out1) 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                (3U 
                                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe)))), 4U)) 
                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out2) 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe)))), 2U)) 
                                                  | (3U 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out3) 
                                                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe)))))))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__18(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->nIORQ = ((IData)(vlSelf->nMREQ__en2) & 
                     (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_intr_ff3) 
                          | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta)) 
                         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq))));
    vlSelf->nMREQ = ((IData)(vlSelf->nMREQ__en2) & 
                     ((~ ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mreq_ff2)) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17))) 
                      & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0) 
                            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr) 
                               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr))))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__19(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->nRD = ((IData)(vlSelf->nMREQ__en2) & (~ 
                                                  ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0) 
                                                   | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead)))));
    vlSelf->nWR = ((IData)(vlSelf->nMREQ__en2) & (~ 
                                                  (((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite)) 
                                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__20(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__20\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out0 
        = ((0x3fffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out0)) 
           | (0xc000U & (((- (IData)((IData)(vlSelf->nMREQ__en2))) 
                          << 0xeU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out1 
        = ((0xcfffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out1)) 
           | (0x3000U & (((- (IData)((IData)(vlSelf->nMREQ__en2))) 
                          << 0xcU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out2 
        = ((0xf3ffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out2)) 
           | (0xc00U & (((- (IData)((IData)(vlSelf->nMREQ__en2))) 
                         << 0xaU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out3 
        = ((0xfcffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out3)) 
           | (0x300U & (((- (IData)((IData)(vlSelf->nMREQ__en2))) 
                         << 8U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out4 
        = ((0xff3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out4)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->nMREQ__en2))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out5 
        = ((0xffcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out5)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->nMREQ__en2))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out6 
        = ((0xfff3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out6)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->nMREQ__en2))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out7 
        = ((0xfffcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out7)) 
           | (3U & ((- (IData)((IData)(vlSelf->nMREQ__en2))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->A = ((IData)(vlSelf->A__en0) & ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out0) 
                                              & VL_SHIFTL_III(16,16,32, 
                                                              (3U 
                                                               & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 0xeU)) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out1) 
                                                 & VL_SHIFTL_III(16,16,32, 
                                                                 (3U 
                                                                  & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 0xcU)) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out2) 
                                                    & VL_SHIFTL_III(16,16,32, 
                                                                    (3U 
                                                                     & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 0xaU)) 
                                                   | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out3) 
                                                       & VL_SHIFTL_III(16,16,32, 
                                                                       (3U 
                                                                        & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 8U)) 
                                                      | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out4) 
                                                          & VL_SHIFTL_III(16,16,32, 
                                                                          (3U 
                                                                           & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 6U)) 
                                                         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out5) 
                                                             & VL_SHIFTL_III(16,16,32, 
                                                                             (3U 
                                                                              & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 4U)) 
                                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out6) 
                                                                & VL_SHIFTL_III(16,16,32, 
                                                                                (3U 
                                                                                & (- (IData)((IData)(vlSelf->nMREQ__en2)))), 2U)) 
                                                               | (3U 
                                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out7) 
                                                                     & (- (IData)((IData)(vlSelf->nMREQ__en2)))))))))))) 
                                            & (IData)(vlSelf->A__en0)));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__21(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__21\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we = ((
                                                   vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit = (IData)(
                                                          ((((vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                              >> 1U) 
                                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)) 
                                                           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                              >> 3U)));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__22(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__22\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21 
        = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nreset));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15 
        = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__23(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__23\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__db_lo_as = (0xffU 
                                               & ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en17) 
                                                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en23) 
                                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en38) 
                                                          | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en39) 
                                                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en40) 
                                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en41)))))) 
                                                   & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en17) 
                                                       & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out0) 
                                                           & VL_SHIFTL_III(8,8,32, 
                                                                           (3U 
                                                                            & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62)))), 6U)) 
                                                          | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out1) 
                                                              & VL_SHIFTL_III(8,8,32, 
                                                                              (3U 
                                                                               & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62)))), 4U)) 
                                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out2) 
                                                                 & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62)))), 2U)) 
                                                                | (3U 
                                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out3) 
                                                                      & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))))))))) 
                                                      | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en23) 
                                                          & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out0) 
                                                              & VL_SHIFTL_III(8,8,32, 
                                                                              (3U 
                                                                               & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74)))), 6U)) 
                                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out1) 
                                                                 & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74)))), 4U)) 
                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out2) 
                                                                    & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74)))), 2U)) 
                                                                   | (3U 
                                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out3) 
                                                                         & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))))))))) 
                                                         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out38) 
                                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en38)) 
                                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out39) 
                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en39)) 
                                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out40) 
                                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en40)) 
                                                                  | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out41) 
                                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en41)))))))) 
                                                  | ((IData)(vlSelf->tb_z80__DOT__dut__DOT____Vcelloutt__address_latch___abus__out) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__abus__en7))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out53 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out53)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db_lo_as))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out54 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out54)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db_lo_as))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out55 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out55)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db_lo_as))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out56 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out56)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db_lo_as))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__24(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__24\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out5 
        = ((0xf9U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out5)) 
           | (6U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d))) 
                     << 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_2))));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out6 
        = ((0xfeU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out6)) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_2)));
}

void Vtb_z80___024root___nba_sequent__TOP__0(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__1(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__2(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__3(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__4(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__5(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__6(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__0(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__7(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__1(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__8(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__9(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__10(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__2(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__3(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__4(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__5(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__0(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__2(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__4(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__5(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__6(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__7(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__8(Vtb_z80___024root* vlSelf);

void Vtb_z80___024root___eval_nba(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_nba\n"); );
    // Body
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0xc0ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0xa1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        Vtb_z80___024root___nba_comb__TOP__3(vlSelf);
        Vtb_z80___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        Vtb_z80___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0xc0ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x2080ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0xa5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x10a1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0xb1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0xa3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0xa1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0xc1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x83ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x1081ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x89ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x20c0ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((0x20c1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__19(vlSelf);
    }
    if ((0x3080ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__20(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__21(vlSelf);
    }
    if ((0x2080ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__22(vlSelf);
    }
    if ((0xb1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__23(vlSelf);
    }
    if ((0xa3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__24(vlSelf);
    }
    if ((0x10a5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0xadULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x10b7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x10fdULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x10bfULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
}

void Vtb_z80___024root___eval_triggers__act(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___eval_act(Vtb_z80___024root* vlSelf);

bool Vtb_z80___024root___eval_phase__act(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<14> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_z80___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_z80___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_z80___024root___eval_phase__nba(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_z80___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_z80___024root___dump_triggers__ico(Vtb_z80___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtb_z80___024root___eval_phase__ico(Vtb_z80___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_z80___024root___dump_triggers__nba(Vtb_z80___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_z80___024root___dump_triggers__act(Vtb_z80___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_z80___024root___eval(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval\n"); );
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
            Vtb_z80___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tb_z80.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_z80___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_z80___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_z80.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_z80___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_z80.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_z80___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_z80___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_z80___024root___eval_debug_assertions(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->nRESET & 0xfeU))) {
        Verilated::overWidthError("nRESET");}
    if (VL_UNLIKELY((vlSelf->nWAIT & 0xfeU))) {
        Verilated::overWidthError("nWAIT");}
    if (VL_UNLIKELY((vlSelf->nINT & 0xfeU))) {
        Verilated::overWidthError("nINT");}
    if (VL_UNLIKELY((vlSelf->nNMI & 0xfeU))) {
        Verilated::overWidthError("nNMI");}
    if (VL_UNLIKELY((vlSelf->nBUSRQ & 0xfeU))) {
        Verilated::overWidthError("nBUSRQ");}
}
#endif  // VL_DEBUG
