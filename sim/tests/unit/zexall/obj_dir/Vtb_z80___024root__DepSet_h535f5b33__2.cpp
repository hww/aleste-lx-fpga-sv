// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80___024root.h"

VL_INLINE_OPT void Vtb_z80___024root___act_sequent__TOP__3(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___act_sequent__TOP__3\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 2U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 2U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 7U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 1U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 1U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M3T3_4))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T4_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T4_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T4_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T1_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T1_5))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T3_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T1_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T1_5))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M5T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M5T3_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T4_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep 
        = (1U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
           & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xcU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T3_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep) 
                                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xbU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xbU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                               & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep) 
                                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)) 
                                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 1U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x14U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x14U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 1U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T4_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T4_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T4_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T4_4))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x14U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x14U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T2_2 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T2_3 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T3_1 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T3_2 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T4_4 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T4_4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T4_5 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T4_5))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T1_3 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T2_4 
        = (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] & 
           ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla52M1T3_1 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla52M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla52M1T3_2 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla52M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T1_3 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T2_4 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x14U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T2_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T2_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T3_1 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T3_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M2T1_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M2T1_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla52M2T2_4 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla52M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M4T2_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M4T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M4T2_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 2U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x15U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 2U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x15U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
           & ((IData)((0x30U == (0x30U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T4nop4op5nop3_1 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
           & (~ ((IData)((0x30U == (0x30U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                 & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T4nop4op5nop3_1))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T4nop4op5nop3_2 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
           & (~ ((IData)((0x30U == (0x30U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                 & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T4nop4op5nop3_2))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 2U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x15U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 2U) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x15U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla53M1T3_1 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla53M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla53M1T3_2 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla53M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T1_3 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T2_4 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T2_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T2_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T3_1 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T3_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M2T1_2 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M2T1_3 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T4_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T1_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T1_1))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M2T2_3))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 5U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T4_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_7 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_7))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 5U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M3T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M3T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 5U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T2_2 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T2_3 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T3_1 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T3_2 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T4_3 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T4_4 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (IData)(
                                                          (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                              >> 3U) 
                                                             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                                >> 4U)) 
                                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T1_1 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T1_1))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T1_2 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (IData)(
                                                          (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                              >> 3U) 
                                                             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                                >> 4U)) 
                                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                    >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M2T2_3 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M2T2_3))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (IData)(
                                                          (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                              >> 3U) 
                                                             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                                >> 4U)) 
                                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (IData)(
                                                           (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                               >> 3U) 
                                                              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                                 >> 4U)) 
                                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                    >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T3_1 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T3_2 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T4_2 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T4_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T4_3 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                    >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_2 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (IData)(
                                                          (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                              >> 3U) 
                                                             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                                >> 4U)) 
                                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (IData)(
                                                          (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                              >> 3U) 
                                                             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                                >> 4U)) 
                                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_7 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_7))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (IData)(
                                                          (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                              >> 3U) 
                                                             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                                >> 4U)) 
                                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (IData)(
                                                           (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                               >> 3U) 
                                                              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                                 >> 4U)) 
                                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                    >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M3T2_2 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M3T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M3T2_3 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (IData)(
                                                      (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                          >> 3U) 
                                                         & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                            >> 4U)) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T2_2 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T2_3 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T3_1 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T3_2 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T4_3 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T4_4 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((8U 
                                                     != 
                                                     (8U 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T1_1 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T1_1))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T1_2 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((8U 
                                                     != 
                                                     (8U 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M2T2_3 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M2T2_3))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((8U 
                                                     != 
                                                     (8U 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((8U 
                                                      != 
                                                      (8U 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 4U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T3_1 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T3_2 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T4_2 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T4_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T4_3 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_2 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((8U 
                                                     != 
                                                     (8U 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((8U 
                                                     != 
                                                     (8U 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_7 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_7))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((8U 
                                                     != 
                                                     (8U 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((8U 
                                                      != 
                                                      (8U 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 4U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M3T2_2 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M3T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M3T2_3 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((8U 
                                                 != 
                                                 (8U 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T4_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 9U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 9U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T5_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T5_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T5_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T5_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 9U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T6))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xdU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 0xdU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x11U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 0x11U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x12U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 0x12U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x19U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 0x19U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1cU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 0x1cU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1fU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 0x1fU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
               >> 1U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                >> 1U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x19U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x19U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T4_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T1_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T2_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T2_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T3_1 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T3_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T4_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T4_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T4_4 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T4_4))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70npla55M4T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70npla55M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T2_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T2_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T3_1 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T3_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M2T1_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M2T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70pla55M4T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70pla55M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T1_2 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T1_3 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xfU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                         >> 3U)) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T2_2 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T2_3 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T3_1 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T3_2 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M2T1_2 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M2T1_3 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla15op3M2T2_4 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla15op3M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xfU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                         >> 3U)) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                    >> 3U)) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & (8U 
                                                        != 
                                                        (8U 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M2T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla15nop3M2T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla15nop3M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
}
