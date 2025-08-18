// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80___024root.h"

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__4(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37npla28M1T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37npla28M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37npla28M1T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37npla28M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x1cU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x1cU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37npla28M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37npla28M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x1cU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37npla28M2T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37npla28M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37npla28M3T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37npla28M3T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37npla28M3T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37npla28M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x1cU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x1cU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x1cU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1bU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 2U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M2T3_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M2T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M2T3_5 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M2T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M3T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M3T1_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M3T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1cU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & ((IData)((0x30U == (0x30U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                 & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27pla34M1T4nop4op5nop3_1 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
           & (~ ((IData)((0x30U == (0x30U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                 & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27pla34M1T4nop4op5nop3_1))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M1T4nop4op5nop3_2 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
           & (~ ((IData)((0x30U == (0x30U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                 & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M1T4nop4op5nop3_2))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 2U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 2U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 2U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T3_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep) 
                                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T4_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x14U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T4_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T5_5 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T5_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x14U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T3_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T3_5 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M3T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x14U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep) 
                                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T4_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1dU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_9 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_9))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla43M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla43M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla43M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla43M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_5))) 
                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true))))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0xbU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_10 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_10))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla47M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla47M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla47M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla47M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T3_3))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0xfU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T4_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xfU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_8))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0xfU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla48M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla48M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla48M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla48M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                               & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T3_3))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x10U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T4_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x10U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_8))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x10U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 6U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 6U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla6M1T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 6U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla6M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla6M1T4_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 6U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla6M1T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 6U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 6U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla26M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla26M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T5_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T5_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1aU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1aU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T3_3))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1aU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T4_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1aU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_8))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1aU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T3_4))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M3T4_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M3T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M3T4_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M3T4_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M4T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M4T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T3_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M5T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M5T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M5T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M5T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                               & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T3_6))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M3T4_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M3T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M3T4_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M3T4_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M4T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M4T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T3_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M5T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M5T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M5T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M5T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_9 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_9))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                               & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xdU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_9 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_9))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xeU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_9 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_9))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M1T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M1T3_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe = 
        (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] >> 0x18U) 
          & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__im1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M1T5_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M1T5_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M1T5_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M1T5_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M2T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M2T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T3_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                               & (~ 
                                                  ((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__im2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_9 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_9))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla49M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla49M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla49M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla49M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setIXIY 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x13U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xcU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xcU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                     >> 0xcU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xeU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xeU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                     >> 0xeU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla78M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla78M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla78M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla78M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xfU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                     >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla79M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla79M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla79M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla79M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                     >> 0x10U) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla80M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla80M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla80M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla80M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x14U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x14U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                     >> 0x14U) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla84M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla84M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla84M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla84M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x15U)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla85M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla85M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla85M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla85M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x16U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x16U)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla86M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla86M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla86M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla86M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x18U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x18U)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla88M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla88M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla88M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla88M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT2_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT2_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT2_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT3_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT3_3))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT4_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT4_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT4_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT4_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_7 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_7))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)) 
           & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setIXIY)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T1_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T2_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setIXIY))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
            & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__im1) 
                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__im2))) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T3_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T3_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_setM1_2 
        = vlSelf->tb_z80__DOT__dut__DOT__setM1;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_setM1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_5 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1));
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1));
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out14 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out14)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out15 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out15)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out4 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out4)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_1))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out5 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out5)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_1))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out18 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out18)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__result_lo))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out19 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out19)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__result_lo))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc)) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc));
    vlSelf->tb_z80__DOT__dut__DOT__flags_cf = (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                                                 | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf))) 
                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set)) 
                                               ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52 
        = (IData)((0U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55 
        = (IData)((3U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59 
        = (IData)((1U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61 
        = (IData)((2U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel)));
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                        << 6U) & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe))))));
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                        << 4U) & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe))))));
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                       << 2U) & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe))))));
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe))))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx)) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58 
        = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61));
    vlSelf->tb_z80__DOT__dut__DOT__flags_hf = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_hf) 
                                               ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_inst4)) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_inst4));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx) 
                                                  & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                                                     | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx)) 
                                                 & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                                                    | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx) 
                                                  & (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                                                     | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de = ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx)) 
                                                 & (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                                                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in = 
        (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf)) 
          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf)) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_hf)));
}
