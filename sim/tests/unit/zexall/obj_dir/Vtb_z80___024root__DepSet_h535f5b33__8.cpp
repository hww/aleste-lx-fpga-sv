// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80___024root.h"

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__9(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we));
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ioRead 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ioWrite 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite));
    vlSelf->tb_z80__DOT__dut__DOT__nRD_out = (1U & 
                                              (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0) 
                                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ioRead))));
    vlSelf->tb_z80__DOT__dut__DOT__nWR_out = (1U & 
                                              (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ioWrite) 
                                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr))));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nRD_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nRD_out;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nRD_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nRD_out;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nWR_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nWR_out;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nWR_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nWR_out;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__10(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__10\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_5 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_8) 
           & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
               >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2)));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_16 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_1) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_2));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__11(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__11\n"); );
    // Init
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h9419b5f6__0;
    tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h9419b5f6__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h42c530b2__0;
    tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h42c530b2__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0;
    tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0;
    tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0;
    tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0;
    tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0 = 0;
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe) 
                                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_high_gt_9) 
                                                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf) 
                                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_8))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_20 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_9) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low) 
           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
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
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_11 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_5) 
           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_13 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_7) 
           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_2 
        = ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_17))) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_12 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low) 
           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_35))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_14 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high) 
           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_35))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__daa_cf_out 
        = vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_21 
        = vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__daa_cf_out 
        = vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_5 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_8) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out)));
    tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h9419b5f6__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__out 
        = ((0x60U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out))) 
                     << 5U)) | (6U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_20))) 
                                      << 1U)));
    tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h42c530b2__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_20));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_2) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_3));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_8 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_11) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_12));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_10 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_13) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_14));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__in2 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__daa_cf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out0)) 
           | ((IData)(tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h9419b5f6__0) 
              << 6U));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out1)) 
           | ((IData)(tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h9419b5f6__0) 
              << 5U));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out2)) 
           | ((IData)(tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h42c530b2__0) 
              << 2U));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out3)) 
           | ((IData)(tb_z80__DOT__dut__DOT__alu_control___DOT____VdfgTmp_h42c530b2__0) 
              << 1U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__op1 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__op1 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                 >> 0U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__op1 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                 >> 1U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__op1 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                 >> 2U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__op1 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                 >> 3U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__b 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__SYNTHESIZED_WIRE_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_16 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_8) 
           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_9))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_15 
        = ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high))) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_10));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_15) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_16));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__op2 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__op2 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                 >> 0U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__op2 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                 >> 1U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__op2 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                 >> 2U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__op2 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                 >> 3U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_5 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                 >> 3U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_8 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                 >> 3U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_5 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                 >> 2U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_8 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                 >> 2U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_5 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                 >> 1U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_8 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                 >> 1U));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_5 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_8 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_0 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_7 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_5));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_8));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_7) 
                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_8) 
                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_1));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__cy_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__cy_in 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_8));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_0 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                  >> 1U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                               >> 1U))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_7 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_5));
    tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_3) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_4));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_7) 
                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_8) 
                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__result 
        = tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_2 
        = (1U & (~ (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_1));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__cy_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__cy_in 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_8));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_0 
        = (1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                  >> 2U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                               >> 2U))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_7 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_5));
    tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_3) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_4));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_7) 
                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_8) 
                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__result 
        = tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_2 
        = (1U & (~ (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out9 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out9)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
                & (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0)) 
               << 1U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
                         & (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_1));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__cy_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__cy_in 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_8));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_0 
        = (IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                     >> 3U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5)) 
                   | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                      >> 3U)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_7 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_5));
    tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_3) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_4));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_7) 
                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_8) 
                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__result 
        = tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_2 
        = (1U & (~ (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__cy_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_3 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__alu_core_cf_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_cf_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_8) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_9) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_15 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu));
    vlSelf->tb_z80__DOT__dut__DOT__alu_vf_out = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
                                                 ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_1));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__in0 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__alu_core_cf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__cy_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_cf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_21 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_15;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_vf_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_vf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_vf_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_vf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_7 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_9) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_vf_out)));
    tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_3) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_4));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__in1 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_vf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__vf_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_vf_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__result 
        = tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_2 
        = (1U & (~ (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__result_hi 
        = (((IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0) 
            << 3U) | (((IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0) 
                       << 2U) | (((IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0) 
                                  << 1U) | (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_32 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_in) 
           ^ (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out8 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out8)) 
           | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
                & (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0)) 
               << 3U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe) 
                          & (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0)) 
                         << 2U)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__result 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__result_hi;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__result_hi;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_31 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_32) 
           ^ (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_30 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_31) 
           ^ (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0));
    vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_30) 
         ^ (IData)(tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_parity_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_parity_out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_8) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_9) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__in0 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_parity_out;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__12(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__12\n"); );
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
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_3 
        = ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re))) 
           & (IData)(vlSelf->D));
    vlSelf->tb_z80__DOT__D = vlSelf->D;
    vlSelf->tb_z80__DOT__dut__DOT__D = vlSelf->tb_z80__DOT__D;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D 
        = vlSelf->tb_z80__DOT__dut__DOT__D;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__13(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__13\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1u))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1u))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1u))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1u))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_sequent__TOP__12(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__fpga_reset)));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__14(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__14\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_3) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__15(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__15\n"); );
    // Body
    vlSelf->nM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16) 
                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_12));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_5) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nreset));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_3) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nreset));
    vlSelf->nMREQ__en2 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nreset));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nM1_out 
        = vlSelf->nM1;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nM1_out 
        = vlSelf->nM1;
    vlSelf->tb_z80__DOT__dut__DOT__nM1_out = vlSelf->nM1;
    vlSelf->tb_z80__DOT__nM1 = vlSelf->nM1;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_12 
        = vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_5) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__pin_control_oe 
        = vlSelf->nMREQ__en2;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__pin_control_oe 
        = vlSelf->nMREQ__en2;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_control_oe 
        = vlSelf->nMREQ__en2;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control_oe = vlSelf->nMREQ__en2;
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
    vlSelf->tb_z80__DOT__dut__DOT__nM1 = vlSelf->tb_z80__DOT__nM1;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nM1 
        = vlSelf->tb_z80__DOT__dut__DOT__nM1;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__16(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__16\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_29 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_27 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_8) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait)));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__18(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out49 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out49)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out50 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out50)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out51 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out51)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out52 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out52)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out0 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2d))) 
                        << 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out1 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2d))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out2 
        = ((0xf3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2d))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out3 
        = ((0xfcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2d))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db1))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__22(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__22\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_4) 
                                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_5) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_6) 
                                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_7))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__pf_sel 
        = vlSelf->tb_z80__DOT__dut__DOT__pf_sel;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__pf_sel 
        = vlSelf->tb_z80__DOT__dut__DOT__pf_sel;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_19 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pf_sel));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__out 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__pf_sel;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__23(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__23\n"); );
    // Init
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h6d2e17ab__0;
    tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h6d2e17ab__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h50da4e5e__0;
    tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h50da4e5e__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h403fae14__0;
    tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h403fae14__0 = 0;
    CData/*0:0*/ tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h45ead928__0;
    tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h45ead928__0 = 0;
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__db0 = (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out0) 
                                             & VL_SHIFTL_III(8,8,32, 
                                                             (3U 
                                                              & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0)))), 6U)) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out1) 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                (3U 
                                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0)))), 4U)) 
                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out2) 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0)))), 2U)) 
                                                  | (3U 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out3) 
                                                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0)))))))) 
                                           & (VL_SHIFTL_III(8,8,32, 
                                                            (3U 
                                                             & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0)))), 6U) 
                                              | (VL_SHIFTL_III(8,8,32, 
                                                               (3U 
                                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0)))), 4U) 
                                                 | (VL_SHIFTL_III(8,8,32, 
                                                                  (3U 
                                                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0)))), 2U) 
                                                    | (3U 
                                                       & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0)))))))) 
                                          | (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out0) 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                (3U 
                                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u)))), 6U)) 
                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out1) 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u)))), 4U)) 
                                                  | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out2) 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u)))), 2U)) 
                                                     | (3U 
                                                        & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out3) 
                                                           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u)))))))) 
                                              & (VL_SHIFTL_III(8,8,32, 
                                                               (3U 
                                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u)))), 6U) 
                                                 | (VL_SHIFTL_III(8,8,32, 
                                                                  (3U 
                                                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u)))), 4U) 
                                                    | (VL_SHIFTL_III(8,8,32, 
                                                                     (3U 
                                                                      & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u)))), 2U) 
                                                       | (3U 
                                                          & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u)))))))) 
                                             | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out4) 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (3U 
                                                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe)))), 6U)) 
                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out5) 
                                                     & VL_SHIFTL_III(8,8,32, 
                                                                     (3U 
                                                                      & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe)))), 4U)) 
                                                    | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out6) 
                                                        & VL_SHIFTL_III(8,8,32, 
                                                                        (3U 
                                                                         & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe)))), 2U)) 
                                                       | (3U 
                                                          & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out7) 
                                                             & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe)))))))) 
                                                & (VL_SHIFTL_III(8,8,32, 
                                                                 (3U 
                                                                  & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe)))), 6U) 
                                                   | (VL_SHIFTL_III(8,8,32, 
                                                                    (3U 
                                                                     & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe)))), 4U) 
                                                      | (VL_SHIFTL_III(8,8,32, 
                                                                       (3U 
                                                                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe)))), 2U) 
                                                         | (3U 
                                                            & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe))))))))));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__db 
        = (3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                 >> 3U));
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__db = vlSelf->tb_z80__DOT__dut__DOT__db0;
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db 
        = vlSelf->tb_z80__DOT__dut__DOT__db0;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up 
        = vlSelf->tb_z80__DOT__dut__DOT__db0;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db 
        = vlSelf->tb_z80__DOT__dut__DOT__db0;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_20 
        = (IData)((0x18U == (0x18U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__bsel 
        = (7U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                 >> 3U));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_4 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                    >> 3U)));
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_4 
        = ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we))) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out7 
        = ((0xcfU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out7)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1d))) 
                        << 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out8 
        = ((0xf7U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out8)) 
           | (0xfffffff8U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1d) 
                              << 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_1 
        = (3U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                  >> 6U) & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_2 
        = (7U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_4)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_14 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                    >> 5U)));
    tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h6d2e17ab__0 
        = (IData)((0x18U == (0x18U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_12 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                    >> 3U)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_13 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                    >> 4U)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__bsel 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__bsel;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_19 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_4) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
              >> 4U));
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_3) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_4));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out4 
        = ((0x3fU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out4)) 
           | (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1d))) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_1)) 
              << 6U));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out5 
        = ((0xf9U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out5)) 
           | (6U & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1d))) 
                     << 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_2))));
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out6 
        = ((0xfeU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out6)) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1d) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_2)));
    tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h50da4e5e__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_12) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
              >> 4U));
    tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h403fae14__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_13) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
              >> 3U));
    tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h45ead928__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_12) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_13));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_0 
        = ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_14) 
             & (IData)(tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h6d2e17ab__0)) 
            << 3U) | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_14) 
                        & (IData)(tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h50da4e5e__0)) 
                       << 2U) | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_14) 
                                   & (IData)(tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h403fae14__0)) 
                                  << 1U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_14) 
                                            & (IData)(tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h45ead928__0)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_1 
        = ((0x3ffffff8U & (((IData)(tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h6d2e17ab__0) 
                            << 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                      >> 2U))) | ((0x1ffffffcU 
                                                   & (((IData)(tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h50da4e5e__0) 
                                                       << 2U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                                         >> 3U))) 
                                                  | ((0xffffffeU 
                                                      & (((IData)(tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h403fae14__0) 
                                                          << 1U) 
                                                         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                                            >> 4U))) 
                                                     | ((IData)(tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h45ead928__0) 
                                                        & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                                           >> 5U)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out14 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out14)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_bs_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out15 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out15)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_bs_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_1;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_1;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out4 
        = ((3U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out4)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_bs_oe))) 
                       << 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_1))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out5 
        = ((0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out5)) 
           | (3U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_bs_oe))) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_1))));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__24(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__24\n"); );
    // Body
    vlSelf->nMREQ = ((IData)(vlSelf->nMREQ__en2) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nMREQ_out));
    vlSelf->nIORQ = ((IData)(vlSelf->nMREQ__en2) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nIORQ_out));
    vlSelf->tb_z80__DOT__nMREQ = vlSelf->nMREQ;
    vlSelf->tb_z80__DOT__nIORQ = vlSelf->nIORQ;
    vlSelf->tb_z80__DOT__dut__DOT__nMREQ = vlSelf->tb_z80__DOT__nMREQ;
    vlSelf->tb_z80__DOT__dut__DOT__nIORQ = vlSelf->tb_z80__DOT__nIORQ;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nMREQ 
        = vlSelf->tb_z80__DOT__dut__DOT__nMREQ;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nIORQ 
        = vlSelf->tb_z80__DOT__dut__DOT__nIORQ;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__25(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__25\n"); );
    // Body
    vlSelf->nRD = ((IData)(vlSelf->nMREQ__en2) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nRD_out));
    vlSelf->nWR = ((IData)(vlSelf->nMREQ__en2) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nWR_out));
    vlSelf->tb_z80__DOT__nRD = vlSelf->nRD;
    vlSelf->tb_z80__DOT__nWR = vlSelf->nWR;
    vlSelf->tb_z80__DOT__dut__DOT__nRD = vlSelf->tb_z80__DOT__nRD;
    vlSelf->tb_z80__DOT__dut__DOT__nWR = vlSelf->tb_z80__DOT__nWR;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nRD 
        = vlSelf->tb_z80__DOT__dut__DOT__nRD;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nWR 
        = vlSelf->tb_z80__DOT__dut__DOT__nWR;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__26(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__26\n"); );
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
    vlSelf->tb_z80__DOT__A = vlSelf->A;
    vlSelf->tb_z80__DOT__dut__DOT__A = vlSelf->tb_z80__DOT__A;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus 
        = vlSelf->tb_z80__DOT__dut__DOT__A;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__28(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__28\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT____Vcellinpt__address_latch___abus 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db_hi_as) 
            << 8U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__db_lo_as));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus 
        = vlSelf->tb_z80__DOT__dut__DOT____Vcellinpt__address_latch___abus;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__31(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__31\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz 
        = ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_2))) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT____Vcellinpt__address_latch___abus));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__in0 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__SYNTHESIZED_WIRE_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz) 
           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__SYNTHESIZED_WIRE_0))));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_5 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__SYNTHESIZED_WIRE_1) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__SYNTHESIZED_WIRE_2));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__in0 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_5;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__out 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_5;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__SYNTHESIZED_WIRE_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_5) 
           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__SYNTHESIZED_WIRE_0))));
    vlSelf->tb_z80__DOT__dut__DOT__address = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__SYNTHESIZED_WIRE_1) 
                                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__SYNTHESIZED_WIRE_2));
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__address 
        = vlSelf->tb_z80__DOT__dut__DOT__address;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__address 
        = vlSelf->tb_z80__DOT__dut__DOT__address;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__out 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__address;
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__34(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__34\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__db1 = (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out0) 
                                             & VL_SHIFTL_III(8,8,32, 
                                                             (3U 
                                                              & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2)))), 6U)) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out1) 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                (3U 
                                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2)))), 4U)) 
                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out2) 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2)))), 2U)) 
                                                  | (3U 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out3) 
                                                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2)))))))) 
                                           & (VL_SHIFTL_III(8,8,32, 
                                                            (3U 
                                                             & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2)))), 6U) 
                                              | (VL_SHIFTL_III(8,8,32, 
                                                               (3U 
                                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2)))), 4U) 
                                                 | (VL_SHIFTL_III(8,8,32, 
                                                                  (3U 
                                                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2)))), 2U) 
                                                    | (3U 
                                                       & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2)))))))) 
                                          | (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out0) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   << 7U)) 
                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out1) 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (7U 
                                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)))), 4U)) 
                                                  | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out2) 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (7U 
                                                                       & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)))), 1U)) 
                                                     | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out3) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe))))) 
                                              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                  << 7U) 
                                                 | (VL_SHIFTL_III(8,8,32, 
                                                                  (7U 
                                                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)))), 4U) 
                                                    | (VL_SHIFTL_III(8,8,32, 
                                                                     (7U 
                                                                      & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe)))), 1U) 
                                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe))))) 
                                             | (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out32) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en32)) 
                                                  | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out33) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en33)) 
                                                     | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out34) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en34)) 
                                                        | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out35) 
                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en35))))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en32) 
                                                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en33) 
                                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en34) 
                                                          | (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en35))))) 
                                                | (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_up__out__strong__out4) 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u)))), 6U)) 
                                                     | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_up__out__strong__out5) 
                                                         & VL_SHIFTL_III(8,8,32, 
                                                                         (3U 
                                                                          & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u)))), 4U)) 
                                                        | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_up__out__strong__out6) 
                                                            & VL_SHIFTL_III(8,8,32, 
                                                                            (3U 
                                                                             & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u)))), 2U)) 
                                                           | (3U 
                                                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_up__out__strong__out7) 
                                                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u)))))))) 
                                                    & (VL_SHIFTL_III(8,8,32, 
                                                                     (3U 
                                                                      & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u)))), 6U) 
                                                       | (VL_SHIFTL_III(8,8,32, 
                                                                        (3U 
                                                                         & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u)))), 4U) 
                                                          | (VL_SHIFTL_III(8,8,32, 
                                                                           (3U 
                                                                            & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u)))), 2U) 
                                                             | (3U 
                                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u)))))))) 
                                                   | ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out4) 
                                                        & VL_SHIFTL_III(8,8,32, 
                                                                        (3U 
                                                                         & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d)))), 6U)) 
                                                       | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out5) 
                                                           & VL_SHIFTL_III(8,8,32, 
                                                                           (3U 
                                                                            & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d)))), 1U)) 
                                                          | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out6) 
                                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d)) 
                                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out7) 
                                                                 & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d)))), 4U)) 
                                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out8) 
                                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                                      << 3U)))))) 
                                                      & (VL_SHIFTL_III(8,8,32, 
                                                                       (3U 
                                                                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d)))), 6U) 
                                                         | (VL_SHIFTL_III(8,8,32, 
                                                                          (3U 
                                                                           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d)))), 1U) 
                                                            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                               | (VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d)))), 4U) 
                                                                  | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d) 
                                                                     << 3U))))))))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db 
        = vlSelf->tb_z80__DOT__dut__DOT__db1;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db 
        = vlSelf->tb_z80__DOT__dut__DOT__db1;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds 
        = vlSelf->tb_z80__DOT__dut__DOT__db1;
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_up 
        = vlSelf->tb_z80__DOT__dut__DOT__db1;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down 
        = vlSelf->tb_z80__DOT__dut__DOT__db1;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_10 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
            >> 7U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_20 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
            >> 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_22 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_14 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
            >> 5U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_16 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
            >> 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_18 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
            >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_12 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
            >> 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_2 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
            >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_34 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_1) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_10));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_26 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_15) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_22));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_36 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_13) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_14));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_40 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_15) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_16));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_35 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_17) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_18));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_11) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_12));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_5 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_1) 
              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_2)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_37 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_3) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_4));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_32 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_6) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_5));
}

VL_INLINE_OPT void Vtb_z80___024root___nba_comb__TOP__35(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___nba_comb__TOP__35\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_33 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_19) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_20));
}

void Vtb_z80___024root___nba_sequent__TOP__0(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__1(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__2(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__3(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__4(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__5(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__6(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__7(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__8(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__0(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__1(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__2(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__3(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__9(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__10(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__4(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_sequent__TOP__11(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__5(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__6(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__7(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___nba_comb__TOP__8(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__0(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__2(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__3(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__4(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__5(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__7(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__8(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__9(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__10(Vtb_z80___024root* vlSelf);

void Vtb_z80___024root___eval_nba(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_nba\n"); );
    // Body
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x101ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__0(vlSelf);
        Vtb_z80___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x180ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x1100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x2040ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x2080ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x141ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__6(vlSelf);
        Vtb_z80___024root___nba_comb__TOP__7(vlSelf);
        Vtb_z80___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x181ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x501ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x2141ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x2101ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0x103ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__13(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x1100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x4100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x1c1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x161ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x143ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((0x151ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x149ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x145ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x2541ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__22(vlSelf);
    }
    if ((0x2143ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__23(vlSelf);
    }
    if ((0x4180ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__24(vlSelf);
    }
    if ((0x4181ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__25(vlSelf);
    }
    if ((0x6100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__26(vlSelf);
    }
    if ((0x163ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x171ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__28(vlSelf);
    }
    if ((0x214bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x2147ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x21f1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__31(vlSelf);
    }
    if ((0x214fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x215fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x217fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__34(vlSelf);
    }
    if ((0x257fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_z80___024root___nba_comb__TOP__35(vlSelf);
    }
}

void Vtb_z80___024root___eval_triggers__act(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___eval_act(Vtb_z80___024root* vlSelf);

bool Vtb_z80___024root___eval_phase__act(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<15> __VpreTriggered;
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
