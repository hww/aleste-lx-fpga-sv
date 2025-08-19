// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80___024root.h"

VL_INLINE_OPT void Vtb_z80___024root___act_sequent__TOP__1(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 9U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x11U) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x12U))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x1aU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x1bU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 8U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 8U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000U 
                                                              == 
                                                              (0x40100U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x2100U 
                                                              == 
                                                              (0x2100U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x100U 
                                                              == 
                                                              (0x2100U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0xdU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0xdU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0xdU)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0xdU))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                 >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0xdU))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0xdU))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 7U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 7U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40002000U == (0x40002000U 
                                        & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40002000U == (0x40002000U 
                                        & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40000000U == (0x40002000U 
                                        & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40000000U == (0x40002000U 
                                        & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x800000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x800000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
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
}
