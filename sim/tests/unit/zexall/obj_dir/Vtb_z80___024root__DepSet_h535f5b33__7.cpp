// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80___024root.h"

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__8(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__8\n"); );
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
    CData/*0:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0 = 0;
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1bU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 2U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M2T3_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M2T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M2T3_5 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M2T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M3T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M3T1_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                       >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M3T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1cU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5)) 
                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27pla34M1T4nop4op5nop3_1 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
           & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5)) 
                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27pla34M1T4nop4op5nop3_1))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M1T4nop4op5nop3_2 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
           & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5)) 
                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M1T4nop4op5nop3_2))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 2U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 2U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 2U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 2U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T3_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep) 
                                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_zf))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T4_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x14U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T4_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T5_5 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T5_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x14U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T2_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T3_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T3_5 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M3T1_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x14U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep) 
                                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_zf))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T2_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T4_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1dU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_9 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_9))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla43M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla43M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla43M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla43M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_5))) 
                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true))))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0xbU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_10 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_10))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla47M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla47M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla47M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla47M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T3_3))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0xfU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T4_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xfU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_8))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0xfU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla48M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla48M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla48M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla48M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                               & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T3_3))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x10U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T4_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x10U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_8))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x10U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 6U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 6U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla6M1T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 6U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla6M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla6M1T4_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 6U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla6M1T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 6U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 6U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla26M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla26M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T4_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T4_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T5_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T5_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1aU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1aU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_zf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T2_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T3_3))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1aU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T4_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1aU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_8))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1aU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T3_4))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M3T4_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M3T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M3T4_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M3T4_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M4T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M4T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T3_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M5T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M5T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M5T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M5T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                               & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T3_6))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M3T4_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M3T4_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M3T4_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M3T4_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M4T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M4T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T3_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M5T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M5T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M5T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M5T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_9 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_9))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
                                               & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xdU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_9 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_9))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T1_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T1_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xeU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_9 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_9))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M1T3_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M1T3_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__im1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M1T5_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M1T5_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M1T5_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M1T5_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M2T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M2T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T3_5 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T3_5)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T1_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T1_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M3T2_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M3T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                               & (~ 
                                                  ((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__im2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T3_6)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T3_6 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T3_6))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_9 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_9))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla49M1T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla49M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla49M1T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla49M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T2_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T2_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setIXIY 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setIXIY) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x13U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
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
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla78M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla78M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla78M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
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
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla79M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla79M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla79M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                     >> 0x10U) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla80M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla80M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla80M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla80M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
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
            >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla84M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla84M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla84M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x15U)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla85M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla85M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla85M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla85M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
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
            >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla86M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla86M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla86M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
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
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla88M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla88M1T1_3 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla88M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT2_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT2_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT2_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT3_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT3_3))) 
              & (1U | (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT4_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT4_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT4_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT4_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_7 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_7))) 
              & (2U | (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setIXIY))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T1_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T2_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setIXIY))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)) 
            & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__im1) 
                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__im2))) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T3_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T3_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
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
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_7) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_5 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_8) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_6 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_8) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_9) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_13 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3abf7a82__0) 
           & (IData)(vlSelf->__VdfgTmp_h392e7459__0));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_15 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_hd927224c__0) 
           & (IData)(vlSelf->__VdfgTmp_h392e7459__0));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nextM 
        = vlSelf->tb_z80__DOT__dut__DOT__nextM;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__nextM 
        = vlSelf->tb_z80__DOT__dut__DOT__nextM;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_not_pc 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_not_pc 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_32 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc)));
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_ixiy_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_ixiy_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_sz_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_sz_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_xy_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_xy_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_hf_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_hf_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_al_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_al_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_ixiy_clr 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_ixiy_clr 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__SYNTHESIZED_WIRE_0 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf2_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf2_we 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_8 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op2_sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op2_sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__SYNTHESIZED_WIRE_1 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op1_sel_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op1_sel_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_20 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_23 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low) 
              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op2_sel_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op2_sel_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_26 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq) 
              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_alu 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_alu 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__setM1 
        = vlSelf->tb_z80__DOT__dut__DOT__setM1;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setM1 
        = vlSelf->tb_z80__DOT__dut__DOT__setM1;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__setM1 
        = vlSelf->tb_z80__DOT__dut__DOT__setM1;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__setM1 
        = vlSelf->tb_z80__DOT__dut__DOT__setM1;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__setM1 
        = vlSelf->tb_z80__DOT__dut__DOT__setM1;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_5 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1));
    vlSelf->tb_z80__DOT__dut__DOT__nM1_int = (1U & 
                                              (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                                  | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fFetch) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_18 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1)));
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__test1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_8) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_2u 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u;
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__ctl_sw_2u 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u;
    vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2u = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_1d 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d;
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__ctl_sw_1d 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d;
    vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1d = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_out_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__ctl_reg_out_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_in_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__ctl_reg_in_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sel_pc 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sel_pc 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_4d 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_sw_4d 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d;
    vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_lo = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_2d 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d;
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__ctl_sw_2d 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d;
    vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2d = vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_in_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__ctl_reg_in_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_oe = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sel_wz 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sel_wz 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz;
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_wz = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_out_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__ctl_reg_out_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_we_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sys_we_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_we_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sys_we_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi;
    vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we) 
         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sys_hilo 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_lo = 
        (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_hi = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
               >> 1U));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_shift_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_shift_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_shift_oe = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_bs_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_bs_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_bs_oe = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_res_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_res_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_res_oe = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe;
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
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out18 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out18)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__result_lo))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out19 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out19)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__result_lo))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_gp_hilo 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_lo = 
        (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_hi = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
               >> 1U));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_core_hf 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_alu_core_hf 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_14 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf_cpl 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf_cpl 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf_set 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_use_cf2 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_use_cf2 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__SYNTHESIZED_WIRE_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__SYNTHESIZED_WIRE_0 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_gp_sel 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55 
        = (IData)((3U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_31 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
                    >> 1U)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_30 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_sel_op2_high 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_sel_op2_high 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high;
    vlSelf->tb_z80__DOT__dut__DOT__alu_sel_op2_high 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_9 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op_low 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_alu_op_low 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low;
    vlSelf->tb_z80__DOT__dut__DOT__alu_op_low = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low;
    vlSelf->tb_z80__DOT__dut__DOT__alu_parity_in = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp) 
         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_17 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_bus_db_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__ctl_bus_db_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_bus_zero_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe;
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__ctl_bus_zero_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_sel_op2_neg 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_sel_op2_neg 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg;
    vlSelf->tb_z80__DOT__dut__DOT__alu_sel_op2_neg 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_35 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_bus_ff_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe;
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__ctl_bus_ff_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe;
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__bus 
        = ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe))) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__vcc));
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_32) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc));
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op2_sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__SYNTHESIZED_WIRE_1 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__SYNTHESIZED_WIRE_1;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__ena 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_20;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__ena 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_23;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op1_sel_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_sel_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__ena 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_26;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__ena 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_26;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_29 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_26;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op2_sel_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_bus 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nM1_int 
        = vlSelf->tb_z80__DOT__dut__DOT__nM1_int;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_9 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_18) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff));
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_10 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_18) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff));
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_11 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_18) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff));
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_12 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_18) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff));
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_19 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)));
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__bus_sw_2u 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2u;
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__sw_up_en 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2u;
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__bus_sw_1d 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1d;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__sw_down_en 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1d;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sw_4d_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_lo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sw_4d_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_lo;
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__bus_sw_2d 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2d;
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__sw_down_en 
        = vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2d;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_oe;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_wz 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_wz;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_wz 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_wz;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sys_we_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sys_we_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sys_we_lo_ALTERA_SYNTHESIZED 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_84 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sys_we_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sys_we_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_85 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_sys_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_lo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_sys_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_lo;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_lo) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_sys_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_hi;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_sys_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_hi;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_hi) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi));
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_shift_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_shift_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_shift_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_shift_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_bs_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_bs_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_bs_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_bs_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_res_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_res_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_res_oe 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_res_oe;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hd903cd75__0 
        = (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe))) 
                 & ((IData)(tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__en) 
                    >> 2U)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hdc1ea228__0 
        = (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe))) 
                 & (IData)(tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__en)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_gp_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_lo;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_gp_lo 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_lo;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_lo));
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_86) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_lo));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_gp_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_hi;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_gp_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_hi;
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_hi));
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_86) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_hi));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__sel1 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_use_cf2;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__SYNTHESIZED_WIRE_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__SYNTHESIZED_WIRE_0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_5) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_36 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_31;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_31) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_42 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_30;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_30) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_31));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_30) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
              >> 1U));
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_sel_op2_high 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_sel_op2_high;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_sel_op2_high 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_sel_op2_high;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_op_low 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op_low;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op_low 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_op_low;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_parity_in 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_parity_in;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_parity_in 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_parity_in;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_sel_op2_neg 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_sel_op2_neg;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_sel_op2_neg 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_sel_op2_neg;
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__bus))));
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__bus))));
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__bus))));
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__bus))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_pc 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_pc 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__sel_zero 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_zero;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__sel_a 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__sel_a 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__sel_a 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__sel_a 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_bus;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_13 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_19) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff));
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_14 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_19) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_15 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_19) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff));
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_16 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_19) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff));
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_17 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_19) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_41 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_84;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_37 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_hi) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_84) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir)));
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h74ac4011__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_84) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_lo));
    tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h7f28842a__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_85) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_hi));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_63 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_75 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_83 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_81 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_61 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_73 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_25 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__SYNTHESIZED_WIRE_1) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__SYNTHESIZED_WIRE_2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_sp 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_sp 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_77 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_79 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_af) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_2) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_46 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_48 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_57) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_44 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_60) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_38 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_53) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_34) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_40 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_37)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h74ac4011__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h74ac4011__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h74ac4011__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h7f28842a__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h7f28842a__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h7f28842a__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_63;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_75;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_83;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_81;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_61;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_73;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_25;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_25) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_77;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_79;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_af2 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_af2 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_31 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_29 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_af 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_af 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_35 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_33 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_bc2 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_bc2 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_39 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_37 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_bc 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_bc 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_43 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_41 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_10) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_inst4));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_47 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_57) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_39 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_60) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_49 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_45 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_hi = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_40) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80;
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
    vlSelf->tb_z80__DOT__dut__DOT__flags_cf = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_0) 
                                               ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_31;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_29;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_35;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_33;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_39;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_37;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_43;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_41;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_iy 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_iy 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_71 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_69 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_ix 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_ix 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_67 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_65 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_25 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_46) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_47));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_23 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_38) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_39));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_24 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_48) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_49));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_21 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_44) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_45));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sw_4d_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_hi;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sw_4d_hi 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_hi;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__flags_cf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_cf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_cf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_cf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_24 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_cf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_cf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_cf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_7 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_9) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out3 
        = ((0xfeU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out3)) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_15 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_14) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_nf)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_71;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_69;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_67;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_65;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_25));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_53) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_23));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_24));
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_53) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_21));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__in1 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_cf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_4) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_5) 
              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_6) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_7))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_hf_cpl 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_hf_cpl 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl;
    vlSelf->tb_z80__DOT__dut__DOT__flags_hf = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_hf) 
                                               ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_hl2 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_hl2 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_55 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_53 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_hl 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_hl 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_59 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_57 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_de2 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_de2 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_47 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_45 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_de 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_de 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_51 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_49 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50 
        = ((IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h495835ae__0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de) 
           & (IData)(tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h9c333b06__0));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_1;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__condition 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_0) 
           ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_1));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_hf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_hf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_hf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_hf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_23 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_hf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out1 
        = ((0x8fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out1)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39) 
                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)) 
               << 6U) | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_yf) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)) 
                          << 5U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_hf)) 
                                    << 4U))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_16 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_hf));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_55;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_53;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_59;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_57;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_47;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_45;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_51;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__we 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_49;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50;
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
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__oe 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48;
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
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_15) 
         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_16));
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
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_core_cf_in 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_cf_in 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in;
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
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__cy_in 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_cf_in;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__cy_in 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__cy_in;
}
