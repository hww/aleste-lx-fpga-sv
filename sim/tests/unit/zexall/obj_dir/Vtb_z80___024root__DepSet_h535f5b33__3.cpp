// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80___024root.h"

VL_INLINE_OPT void Vtb_z80___024root___act_sequent__TOP__4(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___act_sequent__TOP__4\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & (8U 
                                                        != 
                                                        (8U 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M3T3_1 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M3T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M3T3_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M3T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & (8U 
                                                        != 
                                                        (8U 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (8U 
                                                   != 
                                                   (8U 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 8U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T2_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T2_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T3_1 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T3_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
           & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 8U)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T4_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T4_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T4_4 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T4_4))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 8U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 8U)) 
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
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                  >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 8U)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                  >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 8U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M1T2_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M1T2_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T2_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T2_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M1T3_1 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T3_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M2T1_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M2T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla72pla55M2T3_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla72pla55M2T3_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 8U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla72pla55M4T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla72pla55M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 8U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T1_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T3_1 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T3_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T4_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T4_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T4_4 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T4_4))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                  >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                  >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                    >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla74npla55M4T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla74npla55M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                    >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74pla55M1T3_1 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74pla55M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74pla55M1T3_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74pla55M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74pla55M2T1_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74pla55M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74pla55M2T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74pla55M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla74pla55M4T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla74pla55M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T1_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T1_2))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T3_1 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T3_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T4_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T4_3))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T4_4 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T4_4))) 
              & ((2U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                  >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla73npla55M4T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla73npla55M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                  >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73pla55M1T3_1 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73pla55M1T3_1)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73pla55M1T3_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73pla55M1T3_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73pla55M2T1_2 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73pla55M2T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73pla55M2T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73pla55M2T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla73pla55M4T1_3 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla73pla55M4T1_3)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe) 
           | (((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
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
}
