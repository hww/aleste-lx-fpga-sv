// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80___024root.h"

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__5(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we = 
        ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] >> 0xcU) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 2U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_im_we = (vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
              >> 5U));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0 
        = ((~ ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))) 
           & (0x20U == (0x20U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (~ 
                                                      (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 2U))) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x15U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints = ((
                                                   vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 3U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x13U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 8U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x40000U 
                                                             == 
                                                             (0x40100U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x2100U 
                                                             == 
                                                             (0x2100U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 6U) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x40002000U 
                                                             == 
                                                             (0x40002000U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x40002000U 
                                                             == 
                                                             (0x40002000U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1fU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1fU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x810000U 
                                                             == 
                                                             (0x810000U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x810000U 
                                                             == 
                                                             (0x810000U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xcU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xfU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                         >> 3U)) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & (8U 
                                                        != 
                                                        (8U 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 8U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 8U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000U 
                                                            == 
                                                            (0x40100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x1cU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__im2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = (
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x19U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
           & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__im2)) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = (
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xcU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xbU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x14U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x14U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 2U) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x15U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x15U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (IData)(
                                                             (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                                 >> 3U) 
                                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                                   >> 4U)) 
                                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((8U 
                                                        != 
                                                        (8U 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                          >> 4U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0xdU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x11U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x12U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x19U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1cU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x19U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                         >> 0xfU) 
                                                        & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                           >> 3U)) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xfU) 
                                                       & (8U 
                                                          != 
                                                          (8U 
                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 8U)) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 8U)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x1bU) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 2U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0x1bU) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0x15U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0x1bU) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0x14U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((IData)(
                                                              (0x810000U 
                                                               == 
                                                               (0x810000U 
                                                                & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xcU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xeU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xfU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] >> 1U) 
          & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq 
        = ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                          >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
          & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x10U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x14U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x15U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x16U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x18U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xcU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xeU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0xfU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x10U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x14U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x15U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x16U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
                 | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                    >> 0x18U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                         >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                   >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                 >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                             >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit) 
           | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                               >> 0x11U) 
                                              & (~ 
                                                 (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x12U))) 
                                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1bU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1bU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1bU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000U 
                                                         == 
                                                         (0x40100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000U 
                                                         == 
                                                         (0x40100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000U 
                                                         == 
                                                         (0x40100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x2100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x2100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x2100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                     >> 3U)) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                     >> 3U)) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                     >> 3U)) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (8U 
                                                    != 
                                                    (8U 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (8U 
                                                    != 
                                                    (8U 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (8U 
                                                    != 
                                                    (8U 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1cU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1cU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1cU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1aU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1aU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1aU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 5U) 
                                               & (~ 
                                                  (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1cU))) 
                                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla83M1T1_19 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = (2U 
                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla83M1T1_19))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla12M1T1_12 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = (3U 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                    | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla12M1T1_12)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla11M1T1_11 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = (3U 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                    | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla11M1T1_11)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla66npla53M1T1_15 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla66npla53M1T1_15)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M2T4_14 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M2T4_14)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M4T4_14 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M4T4_14)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_op3pla68M3T1_18 
        = (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                      >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_op3pla68M3T1_18)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nop3pla68M3T1_20 
        = (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nop3pla68M3T1_20)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla82M1T1_16 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla82M1T1_16)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla76M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla76M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla78M1T1_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla78M1T1_8)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla79M1T1_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla79M1T1_8)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla80M1T1_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla80M1T1_8)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla84M1T1_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla84M1T1_8)))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x1bU)) 
                                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x2100U 
                                                          == 
                                                          (0x2100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x2100U 
                                                          == 
                                                          (0x2100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x2100U 
                                                          == 
                                                          (0x2100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 6U) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 6U) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 6U) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xcU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xcU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xcU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                      >> 3U)) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                      >> 3U)) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                      >> 3U)) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (8U 
                                                     != 
                                                     (8U 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (8U 
                                                     != 
                                                     (8U 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (8U 
                                                     != 
                                                     (8U 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1cU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1bU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x2100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 2U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V) 
               | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0x16U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe = 
        ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                        >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)((0x20000000U == (0x2c000000U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
               | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0x16U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R) 
               | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0x18U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
               | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0x15U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = 
        (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S) 
               | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 0x16U)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] >> 0x11U) 
          & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (IData)((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                       >> 3U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 4U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                           >> 3U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff)) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(
                                                        (0x2100U 
                                                         == 
                                                         (0x2100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (IData)(
                                                          (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                              >> 3U) 
                                                             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                                >> 4U)) 
                                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((8U 
                                                     != 
                                                     (8U 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 9U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                        >> 3U)) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (8U 
                                                       != 
                                                       (8U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
}
