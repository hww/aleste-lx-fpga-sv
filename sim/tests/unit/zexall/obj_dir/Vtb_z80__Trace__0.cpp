// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_z80__Syms.h"


void Vtb_z80___024root__trace_chg_0_sub_0(Vtb_z80___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_z80___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root__trace_chg_0\n"); );
    // Init
    Vtb_z80___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_z80___024root*>(voidSelf);
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_z80___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_z80___024root__trace_chg_0_sub_0(Vtb_z80___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [3U]) | vlSelf->__Vm_traceActivity
                      [0xdU]) | vlSelf->__Vm_traceActivity
                     [0x11U]))) {
        bufp->chgBit(oldp+0,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                               >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
        bufp->chgBit(oldp+1,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                               >> 7U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
        bufp->chgBit(oldp+2,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                               >> 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
        bufp->chgBit(oldp+3,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                               >> 5U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
        bufp->chgBit(oldp+4,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                               >> 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
        bufp->chgBit(oldp+5,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                               >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
        bufp->chgBit(oldp+6,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                               >> 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
        bufp->chgBit(oldp+7,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
        bufp->chgCData(oldp+8,(((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we))) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))),8);
        bufp->chgCData(oldp+9,((3U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                       >> 6U) & (- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en)))))))),2);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [4U]) | vlSelf->__Vm_traceActivity
                      [0xdU]) | vlSelf->__Vm_traceActivity
                     [0x12U]))) {
        bufp->chgBit(oldp+10,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db2))));
        bufp->chgBit(oldp+11,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
        bufp->chgBit(oldp+12,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                  >> 1U))));
        bufp->chgBit(oldp+13,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
        bufp->chgBit(oldp+14,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
        bufp->chgBit(oldp+15,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                  >> 2U))));
        bufp->chgBit(oldp+16,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
        bufp->chgBit(oldp+17,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
        bufp->chgBit(oldp+18,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                  >> 3U))));
        bufp->chgBit(oldp+19,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
        bufp->chgBit(oldp+20,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
        bufp->chgBit(oldp+21,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                  >> 4U))));
        bufp->chgBit(oldp+22,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
        bufp->chgBit(oldp+23,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 5U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
        bufp->chgBit(oldp+24,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                  >> 5U))));
        bufp->chgBit(oldp+25,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
        bufp->chgBit(oldp+26,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
        bufp->chgBit(oldp+27,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                  >> 6U))));
        bufp->chgBit(oldp+28,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 5U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
        bufp->chgBit(oldp+29,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 7U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
        bufp->chgBit(oldp+30,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                  >> 7U))));
        bufp->chgBit(oldp+31,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [6U]) | vlSelf->__Vm_traceActivity
                      [0xaU]) | vlSelf->__Vm_traceActivity
                     [0xbU]))) {
        bufp->chgBit(oldp+32,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
        bufp->chgBit(oldp+33,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
        bufp->chgBit(oldp+34,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
        bufp->chgBit(oldp+35,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
        bufp->chgBit(oldp+36,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                    >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x17U))) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+37,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                    >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x17U))) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+38,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                    >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                               >> 0x17U)) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+39,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                    >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                               >> 0x17U)) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+40,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                    >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x17U))) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+41,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                    >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                               >> 0x17U)) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+42,((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                 >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 2U))) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+43,((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                              >> 2U)) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+44,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                              >> 0x15U)) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+45,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                              >> 0x15U)) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)))));
        bufp->chgBit(oldp+46,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                              >> 0x15U)) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
        bufp->chgBit(oldp+47,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                              >> 0x14U)) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)))));
        bufp->chgBit(oldp+48,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                              >> 0x14U)) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+49,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[6U]) 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+50,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED) 
                               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1))));
        bufp->chgBit(oldp+51,((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58)))));
        bufp->chgBit(oldp+52,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                               | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58)))));
        bufp->chgBit(oldp+53,((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58)))));
        bufp->chgBit(oldp+54,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                               | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58)))));
        bufp->chgBit(oldp+55,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59))));
        bufp->chgBit(oldp+56,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
        bufp->chgBit(oldp+57,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59))));
        bufp->chgBit(oldp+58,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
        bufp->chgBit(oldp+59,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59))));
        bufp->chgBit(oldp+60,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
        bufp->chgBit(oldp+61,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59))));
        bufp->chgBit(oldp+62,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
        bufp->chgBit(oldp+63,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1)) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff))));
        bufp->chgBit(oldp+64,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1)) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff))));
        bufp->chgBit(oldp+65,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1)) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff))));
        bufp->chgBit(oldp+66,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[8U]) 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgCData(oldp+67,(((- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))))) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))),4);
        bufp->chgCData(oldp+68,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low) 
                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))))),4);
        bufp->chgCData(oldp+69,((0xfU & (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low)) 
                                          & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))) 
                                         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))))))))),4);
        bufp->chgCData(oldp+70,((0xfU & (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high)) 
                                          & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))) 
                                         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))))))))),4);
        bufp->chgCData(oldp+71,((0xfU & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low)) 
                                         & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))))),4);
        bufp->chgCData(oldp+72,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low) 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))))))),4);
        bufp->chgCData(oldp+73,((0xfU & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high)) 
                                         & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))))),4);
        bufp->chgCData(oldp+74,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high) 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))))))),4);
        bufp->chgCData(oldp+75,((0xfU & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high))) 
                                         & (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high)) 
                                             & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))) 
                                            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))))))))),4);
        bufp->chgCData(oldp+76,((0xfU & ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low)) 
                                           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))) 
                                          | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low) 
                                             & (- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))))))) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high)))))))),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgWData(oldp+77,(vlSelf->tb_z80__DOT__dut__DOT__pla),105);
        bufp->chgCData(oldp+81,((((0x20U == (0x20U 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                  << 2U) | (((0x10U 
                                              == (0x10U 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                             << 1U) 
                                            | (8U == 
                                               (8U 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))))),3);
        bufp->chgBit(oldp+82,((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
        bufp->chgBit(oldp+83,((0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
        bufp->chgBit(oldp+84,((0x20U != (0x20U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
        bufp->chgBit(oldp+85,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3abf7a82__0) 
                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                  >> 5U))));
        bufp->chgBit(oldp+86,((1U == (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
        bufp->chgBit(oldp+87,((2U == (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
        bufp->chgBit(oldp+88,((4U == (4U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
        bufp->chgBit(oldp+89,((8U == (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
        bufp->chgBit(oldp+90,((0x10U == (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
        bufp->chgBit(oldp+91,((0x20U == (0x20U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
        bufp->chgCData(oldp+92,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21),2);
        bufp->chgCData(oldp+93,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54),2);
        bufp->chgBit(oldp+94,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0));
        bufp->chgBit(oldp+95,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xaU]) 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+96,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 0x1fU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
        bufp->chgBit(oldp+97,(((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)))));
        bufp->chgBit(oldp+98,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
        bufp->chgBit(oldp+99,(((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
        bufp->chgBit(oldp+100,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
        bufp->chgBit(oldp+101,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                 >> 1U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)))));
        bufp->chgBit(oldp+102,(((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)))));
        bufp->chgBit(oldp+103,((1U & (~ ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                          >> 0x10U) 
                                         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))))));
        bufp->chgBit(oldp+104,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+105,(((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                   >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                               >> 3U)) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
        bufp->chgBit(oldp+106,((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                  >> 0xfU) & (8U != 
                                              (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+107,((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                  >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 2U))) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+108,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                  >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                               >> 0x15U)) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+109,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                  >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                               >> 0x14U)) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+110,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                  >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                               >> 0x14U)) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
        bufp->chgBit(oldp+111,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                 >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
        bufp->chgBit(oldp+112,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+113,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+114,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xbU]) 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+115,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff) 
                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                          | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite)))))) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
        bufp->chgBit(oldp+116,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 6U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)))));
        bufp->chgBit(oldp+117,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 0xbU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)))));
        bufp->chgBit(oldp+118,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 0xeU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)))));
        bufp->chgBit(oldp+119,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40) 
                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41) 
                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42) 
                                         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43) 
                                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44) 
                                               & ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                                    >> 6U) 
                                                   ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45))))))))));
        bufp->chgBit(oldp+120,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52) 
                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53) 
                                      & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                          >> 0xeU) 
                                         ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)))))));
        bufp->chgBit(oldp+121,((1U & (IData)(((3U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                              & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)))))));
        bufp->chgBit(oldp+122,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff) 
                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite))));
        bufp->chgBit(oldp+123,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
        bufp->chgBit(oldp+124,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
        bufp->chgBit(oldp+125,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
        bufp->chgBit(oldp+126,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                      | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                            | (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite))))))));
        bufp->chgBit(oldp+127,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                   | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                      | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite)))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+128,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr));
        bufp->chgBit(oldp+129,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we));
        bufp->chgBit(oldp+130,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low));
        bufp->chgBit(oldp+131,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf));
        bufp->chgBit(oldp+132,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe));
        bufp->chgBit(oldp+133,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe));
        bufp->chgBit(oldp+134,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe));
        bufp->chgBit(oldp+135,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe));
        bufp->chgBit(oldp+136,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus));
        bufp->chgBit(oldp+137,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero));
        bufp->chgBit(oldp+138,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus));
        bufp->chgBit(oldp+139,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg));
        bufp->chgBit(oldp+140,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high));
        bufp->chgBit(oldp+141,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu));
        bufp->chgBit(oldp+142,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set));
        bufp->chgBit(oldp+143,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl));
        bufp->chgBit(oldp+144,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we));
        bufp->chgBit(oldp+145,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we));
        bufp->chgBit(oldp+146,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we));
        bufp->chgBit(oldp+147,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we));
        bufp->chgBit(oldp+148,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl));
        bufp->chgBit(oldp+149,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2));
        bufp->chgBit(oldp+150,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi));
        bufp->chgBit(oldp+151,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo));
        bufp->chgBit(oldp+152,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo));
        bufp->chgBit(oldp+153,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi));
        bufp->chgBit(oldp+154,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc));
        bufp->chgBit(oldp+155,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz));
        bufp->chgBit(oldp+156,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc));
        bufp->chgBit(oldp+157,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo));
        bufp->chgBit(oldp+158,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi));
        bufp->chgBit(oldp+159,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d));
        bufp->chgCData(oldp+160,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo),2);
        bufp->chgCData(oldp+161,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel),2);
        bufp->chgCData(oldp+162,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo),2);
        bufp->chgBit(oldp+163,(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we));
        bufp->chgBit(oldp+164,(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe));
        bufp->chgBit(oldp+165,(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe));
        bufp->chgBit(oldp+166,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d));
        bufp->chgBit(oldp+167,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u));
        bufp->chgBit(oldp+168,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d));
        bufp->chgBit(oldp+169,(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe));
        bufp->chgBit(oldp+170,(vlSelf->tb_z80__DOT__dut__DOT__nextM));
        bufp->chgBit(oldp+171,(vlSelf->tb_z80__DOT__dut__DOT__setM1));
        bufp->chgBit(oldp+172,(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in));
        bufp->chgBit(oldp+173,(vlSelf->tb_z80__DOT__dut__DOT__flags_hf));
        bufp->chgBit(oldp+174,(vlSelf->tb_z80__DOT__dut__DOT__flags_cf));
        bufp->chgBit(oldp+175,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc));
        bufp->chgBit(oldp+176,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2));
        bufp->chgBit(oldp+177,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix));
        bufp->chgBit(oldp+178,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy));
        bufp->chgBit(oldp+179,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de));
        bufp->chgBit(oldp+180,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl));
        bufp->chgBit(oldp+181,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2));
        bufp->chgBit(oldp+182,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2));
        bufp->chgBit(oldp+183,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc));
        bufp->chgBit(oldp+184,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                                      >> 1U))));
        bufp->chgBit(oldp+185,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo))));
        bufp->chgBit(oldp+186,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo))));
        bufp->chgBit(oldp+187,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                                      >> 1U))));
        bufp->chgBit(oldp+188,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))));
        bufp->chgBit(oldp+189,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high)))));
        bufp->chgBit(oldp+190,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)))));
        bufp->chgBit(oldp+191,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero)))));
        bufp->chgBit(oldp+192,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf)))));
        bufp->chgBit(oldp+193,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf)) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf))));
        bufp->chgBit(oldp+194,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_hf))));
        bufp->chgBit(oldp+195,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we)))));
        bufp->chgBit(oldp+196,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)))));
        bufp->chgCData(oldp+197,((0xffU & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe))))),8);
        bufp->chgBit(oldp+198,(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0));
        bufp->chgBit(oldp+199,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA));
        bufp->chgBit(oldp+200,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d));
        bufp->chgBit(oldp+201,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setIXIY));
        bufp->chgBit(oldp+202,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep));
        bufp->chgBit(oldp+203,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla17npla50M1T1_2));
        bufp->chgBit(oldp+204,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla17npla50M1T1_3));
        bufp->chgBit(oldp+205,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T1_3));
        bufp->chgBit(oldp+206,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T2_4));
        bufp->chgBit(oldp+207,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T1_2));
        bufp->chgBit(oldp+208,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T1_3));
        bufp->chgBit(oldp+209,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T4_3));
        bufp->chgBit(oldp+210,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T4_4));
        bufp->chgBit(oldp+211,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla58M1T1_2));
        bufp->chgBit(oldp+212,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla58M1T1_3));
        bufp->chgBit(oldp+213,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T1_3));
        bufp->chgBit(oldp+214,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T2_4));
        bufp->chgBit(oldp+215,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M1T1_2));
        bufp->chgBit(oldp+216,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M1T1_3));
        bufp->chgBit(oldp+217,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M2T1_2));
        bufp->chgBit(oldp+218,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M2T1_3));
        bufp->chgBit(oldp+219,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T1_3));
        bufp->chgBit(oldp+220,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T2_4));
        bufp->chgBit(oldp+221,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M1T4_4));
        bufp->chgBit(oldp+222,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M1T4_5));
        bufp->chgBit(oldp+223,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M2T1_2));
        bufp->chgBit(oldp+224,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M2T1_3));
        bufp->chgBit(oldp+225,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M4T1_3));
        bufp->chgBit(oldp+226,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M4T1_4));
        bufp->chgBit(oldp+227,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T1_3));
        bufp->chgBit(oldp+228,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T2_4));
        bufp->chgBit(oldp+229,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T1_3));
        bufp->chgBit(oldp+230,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T2_4));
        bufp->chgBit(oldp+231,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T1_3));
        bufp->chgBit(oldp+232,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T2_4));
        bufp->chgBit(oldp+233,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla50npla40M3T1_2));
        bufp->chgBit(oldp+234,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla50npla40M3T1_3));
        bufp->chgBit(oldp+235,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M1T4_4));
        bufp->chgBit(oldp+236,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M1T4_5));
        bufp->chgBit(oldp+237,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M2T1_2));
        bufp->chgBit(oldp+238,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M2T1_3));
        bufp->chgBit(oldp+239,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla8pla13M2T2_4));
        bufp->chgBit(oldp+240,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M1T1_2));
        bufp->chgBit(oldp+241,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M1T1_3));
        bufp->chgBit(oldp+242,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M2T1_2));
        bufp->chgBit(oldp+243,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M2T1_3));
        bufp->chgBit(oldp+244,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla8npla13M2T2_4));
        bufp->chgBit(oldp+245,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T1_3));
        bufp->chgBit(oldp+246,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T2_4));
        bufp->chgBit(oldp+247,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T3_6));
        bufp->chgBit(oldp+248,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T1_3));
        bufp->chgBit(oldp+249,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T2_4));
        bufp->chgBit(oldp+250,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_5));
        bufp->chgBit(oldp+251,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_10));
        bufp->chgBit(oldp+252,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla38pla13M4T1_3));
        bufp->chgBit(oldp+253,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla38pla13M4T1_4));
        bufp->chgBit(oldp+254,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M4T2_4));
        bufp->chgBit(oldp+255,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla38npla13M1T1_2));
        bufp->chgBit(oldp+256,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla38npla13M1T1_3));
        bufp->chgBit(oldp+257,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T1_3));
        bufp->chgBit(oldp+258,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T2_4));
        bufp->chgBit(oldp+259,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T3_6));
        bufp->chgBit(oldp+260,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T1_3));
        bufp->chgBit(oldp+261,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T2_4));
        bufp->chgBit(oldp+262,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T3_6));
        bufp->chgBit(oldp+263,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T1_3));
        bufp->chgBit(oldp+264,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T2_4));
        bufp->chgBit(oldp+265,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T1_2));
        bufp->chgBit(oldp+266,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T1_3));
        bufp->chgBit(oldp+267,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T2_2));
        bufp->chgBit(oldp+268,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T2_3));
        bufp->chgBit(oldp+269,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T3_1));
        bufp->chgBit(oldp+270,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T3_2));
        bufp->chgBit(oldp+271,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla83M1T4_3));
        bufp->chgBit(oldp+272,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla57M1T3_1));
        bufp->chgBit(oldp+273,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla57M1T3_2));
        bufp->chgBit(oldp+274,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla57M1T4_4));
        bufp->chgBit(oldp+275,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla7M1T1_2));
        bufp->chgBit(oldp+276,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M1T1_3));
        bufp->chgBit(oldp+277,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T1_3));
        bufp->chgBit(oldp+278,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T2_4));
        bufp->chgBit(oldp+279,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T1_3));
        bufp->chgBit(oldp+280,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla7M3T1_6));
        bufp->chgBit(oldp+281,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M3T1_7));
        bufp->chgBit(oldp+282,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T2_4));
        bufp->chgBit(oldp+283,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T1_3));
        bufp->chgBit(oldp+284,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T2_4));
        bufp->chgBit(oldp+285,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T3_6));
        bufp->chgBit(oldp+286,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T1_3));
        bufp->chgBit(oldp+287,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T2_4));
        bufp->chgBit(oldp+288,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_5));
        bufp->chgBit(oldp+289,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_10));
        bufp->chgBit(oldp+290,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M4T1_3));
        bufp->chgBit(oldp+291,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M4T1_4));
        bufp->chgBit(oldp+292,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T2_4));
        bufp->chgBit(oldp+293,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T3_5));
        bufp->chgBit(oldp+294,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M5T1_3));
        bufp->chgBit(oldp+295,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M5T1_4));
        bufp->chgBit(oldp+296,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M5T2_4));
        bufp->chgBit(oldp+297,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T1_3));
        bufp->chgBit(oldp+298,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T2_4));
        bufp->chgBit(oldp+299,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T3_6));
        bufp->chgBit(oldp+300,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T1_3));
        bufp->chgBit(oldp+301,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T2_4));
        bufp->chgBit(oldp+302,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T3_6));
        bufp->chgBit(oldp+303,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T1_3));
        bufp->chgBit(oldp+304,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T2_4));
        bufp->chgBit(oldp+305,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M4T3_5));
        bufp->chgBit(oldp+306,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M4T3_6));
        bufp->chgBit(oldp+307,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T1_3));
        bufp->chgBit(oldp+308,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T2_4));
        bufp->chgBit(oldp+309,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M5T3_4));
        bufp->chgBit(oldp+310,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M5T3_5));
        bufp->chgBit(oldp+311,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T1_3));
        bufp->chgBit(oldp+312,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T2_4));
        bufp->chgBit(oldp+313,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T3_6));
        bufp->chgBit(oldp+314,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T1_3));
        bufp->chgBit(oldp+315,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T2_4));
        bufp->chgBit(oldp+316,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_5));
        bufp->chgBit(oldp+317,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_10));
        bufp->chgBit(oldp+318,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M4T1_3));
        bufp->chgBit(oldp+319,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M4T1_4));
        bufp->chgBit(oldp+320,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T2_4));
        bufp->chgBit(oldp+321,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T3_5));
        bufp->chgBit(oldp+322,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M5T1_3));
        bufp->chgBit(oldp+323,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M5T1_4));
        bufp->chgBit(oldp+324,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M5T2_4));
        bufp->chgBit(oldp+325,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T1_3));
        bufp->chgBit(oldp+326,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T2_4));
        bufp->chgBit(oldp+327,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T3_6));
        bufp->chgBit(oldp+328,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T1_3));
        bufp->chgBit(oldp+329,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T2_4));
        bufp->chgBit(oldp+330,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T3_6));
        bufp->chgBit(oldp+331,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T1_3));
        bufp->chgBit(oldp+332,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T2_4));
        bufp->chgBit(oldp+333,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M4T3_5));
        bufp->chgBit(oldp+334,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M4T3_6));
        bufp->chgBit(oldp+335,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T1_3));
        bufp->chgBit(oldp+336,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T2_4));
        bufp->chgBit(oldp+337,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M5T3_4));
        bufp->chgBit(oldp+338,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M5T3_5));
        bufp->chgBit(oldp+339,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T4_2));
        bufp->chgBit(oldp+340,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T4_3));
        bufp->chgBit(oldp+341,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T5_2));
        bufp->chgBit(oldp+342,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T5_3));
        bufp->chgBit(oldp+343,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M1T5_4));
        bufp->chgBit(oldp+344,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M1T5_5));
        bufp->chgBit(oldp+345,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T1_5));
        bufp->chgBit(oldp+346,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T1_6));
        bufp->chgBit(oldp+347,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T2_3));
        bufp->chgBit(oldp+348,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T2_4));
        bufp->chgBit(oldp+349,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T3_5));
        bufp->chgBit(oldp+350,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T3_6));
        bufp->chgBit(oldp+351,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T1_5));
        bufp->chgBit(oldp+352,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T1_6));
        bufp->chgBit(oldp+353,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T2_3));
        bufp->chgBit(oldp+354,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T2_4));
        bufp->chgBit(oldp+355,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T1_3));
        bufp->chgBit(oldp+356,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T1_4));
        bufp->chgBit(oldp+357,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T2_3));
        bufp->chgBit(oldp+358,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T2_4));
        bufp->chgBit(oldp+359,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T3_5));
        bufp->chgBit(oldp+360,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T3_6));
        bufp->chgBit(oldp+361,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T1_3));
        bufp->chgBit(oldp+362,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T1_4));
        bufp->chgBit(oldp+363,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T2_3));
        bufp->chgBit(oldp+364,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T2_4));
        bufp->chgBit(oldp+365,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T3_4));
        bufp->chgBit(oldp+366,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T3_5));
        bufp->chgBit(oldp+367,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T1_3));
        bufp->chgBit(oldp+368,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T1_4));
        bufp->chgBit(oldp+369,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T2_3));
        bufp->chgBit(oldp+370,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T2_4));
        bufp->chgBit(oldp+371,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M2T3_6));
        bufp->chgBit(oldp+372,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T1_3));
        bufp->chgBit(oldp+373,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T1_4));
        bufp->chgBit(oldp+374,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T2_3));
        bufp->chgBit(oldp+375,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T2_4));
        bufp->chgBit(oldp+376,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M3T3_4));
        bufp->chgBit(oldp+377,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T4_4));
        bufp->chgBit(oldp+378,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T4_5));
        bufp->chgBit(oldp+379,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T1_5));
        bufp->chgBit(oldp+380,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T1_6));
        bufp->chgBit(oldp+381,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T2_3));
        bufp->chgBit(oldp+382,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T2_4));
        bufp->chgBit(oldp+383,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T3_5));
        bufp->chgBit(oldp+384,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T3_6));
        bufp->chgBit(oldp+385,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T1_5));
        bufp->chgBit(oldp+386,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T1_6));
        bufp->chgBit(oldp+387,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T2_3));
        bufp->chgBit(oldp+388,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T2_4));
        bufp->chgBit(oldp+389,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M5T3_3));
        bufp->chgBit(oldp+390,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T4_2));
        bufp->chgBit(oldp+391,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T4_3));
        bufp->chgBit(oldp+392,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T2_2));
        bufp->chgBit(oldp+393,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T2_3));
        bufp->chgBit(oldp+394,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T3_1));
        bufp->chgBit(oldp+395,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T3_2));
        bufp->chgBit(oldp+396,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T1_2));
        bufp->chgBit(oldp+397,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T1_3));
        bufp->chgBit(oldp+398,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T2_3));
        bufp->chgBit(oldp+399,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T2_4));
        bufp->chgBit(oldp+400,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T1_2));
        bufp->chgBit(oldp+401,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T1_3));
        bufp->chgBit(oldp+402,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T2_3));
        bufp->chgBit(oldp+403,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T2_4));
        bufp->chgBit(oldp+404,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T3_3));
        bufp->chgBit(oldp+405,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T4_3));
        bufp->chgBit(oldp+406,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T1_2));
        bufp->chgBit(oldp+407,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T2_3));
        bufp->chgBit(oldp+408,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T3_2));
        bufp->chgBit(oldp+409,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T4_3));
        bufp->chgBit(oldp+410,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T2_2));
        bufp->chgBit(oldp+411,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T2_3));
        bufp->chgBit(oldp+412,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T3_1));
        bufp->chgBit(oldp+413,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T3_2));
        bufp->chgBit(oldp+414,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T1_2));
        bufp->chgBit(oldp+415,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T1_3));
        bufp->chgBit(oldp+416,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T2_3));
        bufp->chgBit(oldp+417,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T2_4));
        bufp->chgBit(oldp+418,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T3_2));
        bufp->chgBit(oldp+419,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T4_3));
        bufp->chgBit(oldp+420,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T1_2));
        bufp->chgBit(oldp+421,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T2_3));
        bufp->chgBit(oldp+422,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T3_2));
        bufp->chgBit(oldp+423,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T4_3));
        bufp->chgBit(oldp+424,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T2_2));
        bufp->chgBit(oldp+425,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T2_3));
        bufp->chgBit(oldp+426,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T3_1));
        bufp->chgBit(oldp+427,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T3_2));
        bufp->chgBit(oldp+428,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T4_3));
        bufp->chgBit(oldp+429,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T4_4));
        bufp->chgBit(oldp+430,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T2_2));
        bufp->chgBit(oldp+431,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T2_3));
        bufp->chgBit(oldp+432,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T3_1));
        bufp->chgBit(oldp+433,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T3_2));
        bufp->chgBit(oldp+434,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T4_4));
        bufp->chgBit(oldp+435,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T4_5));
        bufp->chgBit(oldp+436,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T1_3));
        bufp->chgBit(oldp+437,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T2_4));
        bufp->chgBit(oldp+438,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla52M1T3_1));
        bufp->chgBit(oldp+439,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla52M1T3_2));
        bufp->chgBit(oldp+440,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T1_3));
        bufp->chgBit(oldp+441,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T2_4));
        bufp->chgBit(oldp+442,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T2_2));
        bufp->chgBit(oldp+443,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T2_3));
        bufp->chgBit(oldp+444,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T3_1));
        bufp->chgBit(oldp+445,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T3_2));
        bufp->chgBit(oldp+446,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M2T1_2));
        bufp->chgBit(oldp+447,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M2T1_3));
        bufp->chgBit(oldp+448,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla52M2T2_4));
        bufp->chgBit(oldp+449,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M4T2_2));
        bufp->chgBit(oldp+450,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M4T2_3));
        bufp->chgBit(oldp+451,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T1_2));
        bufp->chgBit(oldp+452,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T1_3));
        bufp->chgBit(oldp+453,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T2_2));
        bufp->chgBit(oldp+454,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T2_3));
        bufp->chgBit(oldp+455,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T3_1));
        bufp->chgBit(oldp+456,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T3_2));
        bufp->chgBit(oldp+457,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T4nop4op5nop3_1));
        bufp->chgBit(oldp+458,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T4nop4op5nop3_2));
        bufp->chgBit(oldp+459,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla53M1T3_1));
        bufp->chgBit(oldp+460,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla53M1T3_2));
        bufp->chgBit(oldp+461,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T1_3));
        bufp->chgBit(oldp+462,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T2_4));
        bufp->chgBit(oldp+463,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T2_2));
        bufp->chgBit(oldp+464,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T2_3));
        bufp->chgBit(oldp+465,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T3_1));
        bufp->chgBit(oldp+466,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T3_2));
        bufp->chgBit(oldp+467,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M2T1_2));
        bufp->chgBit(oldp+468,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M2T1_3));
        bufp->chgBit(oldp+469,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T2_2));
        bufp->chgBit(oldp+470,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T2_3));
        bufp->chgBit(oldp+471,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T3_1));
        bufp->chgBit(oldp+472,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T3_2));
        bufp->chgBit(oldp+473,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T4_3));
        bufp->chgBit(oldp+474,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T4_4));
        bufp->chgBit(oldp+475,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T1_1));
        bufp->chgBit(oldp+476,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T1_2));
        bufp->chgBit(oldp+477,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M2T2_3));
        bufp->chgBit(oldp+478,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T3_1));
        bufp->chgBit(oldp+479,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T3_2));
        bufp->chgBit(oldp+480,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T4_2));
        bufp->chgBit(oldp+481,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T4_3));
        bufp->chgBit(oldp+482,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_2));
        bufp->chgBit(oldp+483,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_7));
        bufp->chgBit(oldp+484,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M3T2_2));
        bufp->chgBit(oldp+485,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M3T2_3));
        bufp->chgBit(oldp+486,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T2_2));
        bufp->chgBit(oldp+487,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T2_3));
        bufp->chgBit(oldp+488,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T3_1));
        bufp->chgBit(oldp+489,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T3_2));
        bufp->chgBit(oldp+490,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T4_3));
        bufp->chgBit(oldp+491,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T4_4));
        bufp->chgBit(oldp+492,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T1_1));
        bufp->chgBit(oldp+493,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T1_2));
        bufp->chgBit(oldp+494,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M2T2_3));
        bufp->chgBit(oldp+495,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T3_1));
        bufp->chgBit(oldp+496,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T3_2));
        bufp->chgBit(oldp+497,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T4_2));
        bufp->chgBit(oldp+498,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T4_3));
        bufp->chgBit(oldp+499,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_2));
        bufp->chgBit(oldp+500,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_7));
        bufp->chgBit(oldp+501,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M3T2_2));
        bufp->chgBit(oldp+502,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M3T2_3));
        bufp->chgBit(oldp+503,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T2_2));
        bufp->chgBit(oldp+504,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T2_3));
        bufp->chgBit(oldp+505,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T3_1));
        bufp->chgBit(oldp+506,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T3_2));
        bufp->chgBit(oldp+507,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T4_3));
        bufp->chgBit(oldp+508,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T4_4));
        bufp->chgBit(oldp+509,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T1_1));
        bufp->chgBit(oldp+510,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T1_2));
        bufp->chgBit(oldp+511,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M2T2_3));
        bufp->chgBit(oldp+512,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T3_1));
        bufp->chgBit(oldp+513,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T3_2));
        bufp->chgBit(oldp+514,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T4_2));
        bufp->chgBit(oldp+515,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T4_3));
        bufp->chgBit(oldp+516,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_2));
        bufp->chgBit(oldp+517,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_7));
        bufp->chgBit(oldp+518,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M3T2_2));
        bufp->chgBit(oldp+519,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M3T2_3));
        bufp->chgBit(oldp+520,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T4_2));
        bufp->chgBit(oldp+521,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T4_3));
        bufp->chgBit(oldp+522,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T5_2));
        bufp->chgBit(oldp+523,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T5_3));
        bufp->chgBit(oldp+524,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T1_2));
        bufp->chgBit(oldp+525,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T1_3));
        bufp->chgBit(oldp+526,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T2_2));
        bufp->chgBit(oldp+527,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T2_3));
        bufp->chgBit(oldp+528,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T3_1));
        bufp->chgBit(oldp+529,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T3_2));
        bufp->chgBit(oldp+530,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T1_2));
        bufp->chgBit(oldp+531,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T1_3));
        bufp->chgBit(oldp+532,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T2_2));
        bufp->chgBit(oldp+533,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T2_3));
        bufp->chgBit(oldp+534,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T3_1));
        bufp->chgBit(oldp+535,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T3_2));
        bufp->chgBit(oldp+536,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T1_2));
        bufp->chgBit(oldp+537,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T1_3));
        bufp->chgBit(oldp+538,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T2_2));
        bufp->chgBit(oldp+539,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T2_3));
        bufp->chgBit(oldp+540,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T3_1));
        bufp->chgBit(oldp+541,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T3_2));
        bufp->chgBit(oldp+542,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T2_2));
        bufp->chgBit(oldp+543,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T2_3));
        bufp->chgBit(oldp+544,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T3_1));
        bufp->chgBit(oldp+545,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T3_2));
        bufp->chgBit(oldp+546,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T2_2));
        bufp->chgBit(oldp+547,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T2_3));
        bufp->chgBit(oldp+548,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T3_1));
        bufp->chgBit(oldp+549,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T3_2));
        bufp->chgBit(oldp+550,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T1_2));
        bufp->chgBit(oldp+551,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T1_3));
        bufp->chgBit(oldp+552,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T2_2));
        bufp->chgBit(oldp+553,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T2_3));
        bufp->chgBit(oldp+554,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T3_1));
        bufp->chgBit(oldp+555,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T3_2));
        bufp->chgBit(oldp+556,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T4_3));
        bufp->chgBit(oldp+557,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T4_4));
        bufp->chgBit(oldp+558,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T1_2));
        bufp->chgBit(oldp+559,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T1_3));
        bufp->chgBit(oldp+560,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T2_2));
        bufp->chgBit(oldp+561,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T2_3));
        bufp->chgBit(oldp+562,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T3_1));
        bufp->chgBit(oldp+563,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T3_2));
        bufp->chgBit(oldp+564,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T4_3));
        bufp->chgBit(oldp+565,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T4_4));
        bufp->chgBit(oldp+566,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70npla55M4T1_3));
        bufp->chgBit(oldp+567,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T2_2));
        bufp->chgBit(oldp+568,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T2_3));
        bufp->chgBit(oldp+569,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T3_1));
        bufp->chgBit(oldp+570,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T3_2));
        bufp->chgBit(oldp+571,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M2T1_2));
        bufp->chgBit(oldp+572,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M2T1_3));
        bufp->chgBit(oldp+573,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70pla55M4T1_3));
        bufp->chgBit(oldp+574,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T1_2));
        bufp->chgBit(oldp+575,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T1_3));
        bufp->chgBit(oldp+576,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T2_2));
        bufp->chgBit(oldp+577,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T2_3));
        bufp->chgBit(oldp+578,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T3_1));
        bufp->chgBit(oldp+579,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T3_2));
        bufp->chgBit(oldp+580,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M2T1_2));
        bufp->chgBit(oldp+581,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M2T1_3));
        bufp->chgBit(oldp+582,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla15op3M2T2_4));
        bufp->chgBit(oldp+583,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T1_2));
        bufp->chgBit(oldp+584,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T1_3));
        bufp->chgBit(oldp+585,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T2_2));
        bufp->chgBit(oldp+586,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T2_3));
        bufp->chgBit(oldp+587,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T3_1));
        bufp->chgBit(oldp+588,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T3_2));
        bufp->chgBit(oldp+589,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M2T1_2));
        bufp->chgBit(oldp+590,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M2T1_3));
        bufp->chgBit(oldp+591,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla15nop3M2T2_4));
        bufp->chgBit(oldp+592,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M3T3_1));
        bufp->chgBit(oldp+593,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M3T3_2));
        bufp->chgBit(oldp+594,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T2_2));
        bufp->chgBit(oldp+595,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T2_3));
        bufp->chgBit(oldp+596,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T3_1));
        bufp->chgBit(oldp+597,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T3_2));
        bufp->chgBit(oldp+598,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T4_3));
        bufp->chgBit(oldp+599,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T4_4));
        bufp->chgBit(oldp+600,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M1T2_2));
        bufp->chgBit(oldp+601,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T2_3));
        bufp->chgBit(oldp+602,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M1T3_1));
        bufp->chgBit(oldp+603,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T3_2));
        bufp->chgBit(oldp+604,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M2T1_2));
        bufp->chgBit(oldp+605,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M2T1_3));
        bufp->chgBit(oldp+606,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla72pla55M2T3_3));
        bufp->chgBit(oldp+607,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla72pla55M4T1_3));
        bufp->chgBit(oldp+608,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T1_2));
        bufp->chgBit(oldp+609,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T1_3));
        bufp->chgBit(oldp+610,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T3_1));
        bufp->chgBit(oldp+611,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T3_2));
        bufp->chgBit(oldp+612,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T4_3));
        bufp->chgBit(oldp+613,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T4_4));
        bufp->chgBit(oldp+614,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla74npla55M4T1_3));
        bufp->chgBit(oldp+615,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74pla55M1T3_1));
        bufp->chgBit(oldp+616,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74pla55M1T3_2));
        bufp->chgBit(oldp+617,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74pla55M2T1_2));
        bufp->chgBit(oldp+618,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74pla55M2T1_3));
        bufp->chgBit(oldp+619,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla74pla55M4T1_3));
        bufp->chgBit(oldp+620,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T1_2));
        bufp->chgBit(oldp+621,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T1_3));
        bufp->chgBit(oldp+622,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T3_1));
        bufp->chgBit(oldp+623,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T3_2));
        bufp->chgBit(oldp+624,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T4_3));
        bufp->chgBit(oldp+625,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T4_4));
        bufp->chgBit(oldp+626,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla73npla55M4T1_3));
        bufp->chgBit(oldp+627,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73pla55M1T3_1));
        bufp->chgBit(oldp+628,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73pla55M1T3_2));
        bufp->chgBit(oldp+629,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73pla55M2T1_2));
        bufp->chgBit(oldp+630,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73pla55M2T1_3));
        bufp->chgBit(oldp+631,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla73pla55M4T1_3));
        bufp->chgBit(oldp+632,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37npla28M1T1_2));
        bufp->chgBit(oldp+633,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37npla28M1T1_3));
        bufp->chgBit(oldp+634,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37npla28M2T1_3));
        bufp->chgBit(oldp+635,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37npla28M2T2_4));
        bufp->chgBit(oldp+636,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37npla28M3T1_2));
        bufp->chgBit(oldp+637,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37npla28M3T1_3));
        bufp->chgBit(oldp+638,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T1_2));
        bufp->chgBit(oldp+639,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T1_3));
        bufp->chgBit(oldp+640,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T2_2));
        bufp->chgBit(oldp+641,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T2_3));
        bufp->chgBit(oldp+642,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T3_1));
        bufp->chgBit(oldp+643,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T3_2));
        bufp->chgBit(oldp+644,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M2T1_3));
        bufp->chgBit(oldp+645,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T1_3));
        bufp->chgBit(oldp+646,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T2_4));
        bufp->chgBit(oldp+647,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M2T3_4));
        bufp->chgBit(oldp+648,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M2T3_5));
        bufp->chgBit(oldp+649,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M3T1_3));
        bufp->chgBit(oldp+650,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M3T1_4));
        bufp->chgBit(oldp+651,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27pla34M1T4nop4op5nop3_1));
        bufp->chgBit(oldp+652,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M1T4nop4op5nop3_2));
        bufp->chgBit(oldp+653,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M2T1_3));
        bufp->chgBit(oldp+654,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T2_2));
        bufp->chgBit(oldp+655,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T2_3));
        bufp->chgBit(oldp+656,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T3_1));
        bufp->chgBit(oldp+657,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T3_2));
        bufp->chgBit(oldp+658,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T1_3));
        bufp->chgBit(oldp+659,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T2_3));
        bufp->chgBit(oldp+660,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T3_4));
        bufp->chgBit(oldp+661,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T1_2));
        bufp->chgBit(oldp+662,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T1_3));
        bufp->chgBit(oldp+663,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T2_3));
        bufp->chgBit(oldp+664,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T2_4));
        bufp->chgBit(oldp+665,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T1_2));
        bufp->chgBit(oldp+666,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T2_3));
        bufp->chgBit(oldp+667,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T3_2));
        bufp->chgBit(oldp+668,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T4_3));
        bufp->chgBit(oldp+669,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T2_2));
        bufp->chgBit(oldp+670,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T2_3));
        bufp->chgBit(oldp+671,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T3_1));
        bufp->chgBit(oldp+672,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T3_2));
        bufp->chgBit(oldp+673,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T4_3));
        bufp->chgBit(oldp+674,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T5_5));
        bufp->chgBit(oldp+675,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T1_2));
        bufp->chgBit(oldp+676,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T1_3));
        bufp->chgBit(oldp+677,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T2_3));
        bufp->chgBit(oldp+678,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T2_4));
        bufp->chgBit(oldp+679,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T3_4));
        bufp->chgBit(oldp+680,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T3_5));
        bufp->chgBit(oldp+681,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M3T1_3));
        bufp->chgBit(oldp+682,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T1_2));
        bufp->chgBit(oldp+683,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T2_3));
        bufp->chgBit(oldp+684,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T3_2));
        bufp->chgBit(oldp+685,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T4_3));
        bufp->chgBit(oldp+686,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T1_3));
        bufp->chgBit(oldp+687,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T2_4));
        bufp->chgBit(oldp+688,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T3_6));
        bufp->chgBit(oldp+689,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T1_3));
        bufp->chgBit(oldp+690,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T2_4));
        bufp->chgBit(oldp+691,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_4));
        bufp->chgBit(oldp+692,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_9));
        bufp->chgBit(oldp+693,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla43M1T3_1));
        bufp->chgBit(oldp+694,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla43M1T3_2));
        bufp->chgBit(oldp+695,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T1_3));
        bufp->chgBit(oldp+696,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T2_4));
        bufp->chgBit(oldp+697,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T3_6));
        bufp->chgBit(oldp+698,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T1_3));
        bufp->chgBit(oldp+699,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T2_4));
        bufp->chgBit(oldp+700,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_5));
        bufp->chgBit(oldp+701,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_10));
        bufp->chgBit(oldp+702,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla47M1T3_1));
        bufp->chgBit(oldp+703,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla47M1T3_2));
        bufp->chgBit(oldp+704,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T1_3));
        bufp->chgBit(oldp+705,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T2_4));
        bufp->chgBit(oldp+706,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T2_2));
        bufp->chgBit(oldp+707,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T3_3));
        bufp->chgBit(oldp+708,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T4_2));
        bufp->chgBit(oldp+709,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_3));
        bufp->chgBit(oldp+710,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_8));
        bufp->chgBit(oldp+711,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla48M1T3_1));
        bufp->chgBit(oldp+712,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla48M1T3_2));
        bufp->chgBit(oldp+713,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T1_3));
        bufp->chgBit(oldp+714,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T2_4));
        bufp->chgBit(oldp+715,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T2_2));
        bufp->chgBit(oldp+716,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T3_3));
        bufp->chgBit(oldp+717,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T4_2));
        bufp->chgBit(oldp+718,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_3));
        bufp->chgBit(oldp+719,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_8));
        bufp->chgBit(oldp+720,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla6M1T4_3));
        bufp->chgBit(oldp+721,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla6M1T4_4));
        bufp->chgBit(oldp+722,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla26M1T3_1));
        bufp->chgBit(oldp+723,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T3_2));
        bufp->chgBit(oldp+724,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T4_3));
        bufp->chgBit(oldp+725,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T5_5));
        bufp->chgBit(oldp+726,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T1_3));
        bufp->chgBit(oldp+727,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T2_4));
        bufp->chgBit(oldp+728,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T2_2));
        bufp->chgBit(oldp+729,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T3_3));
        bufp->chgBit(oldp+730,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T4_2));
        bufp->chgBit(oldp+731,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_3));
        bufp->chgBit(oldp+732,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_8));
        bufp->chgBit(oldp+733,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T1_3));
        bufp->chgBit(oldp+734,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T2_4));
        bufp->chgBit(oldp+735,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T3_6));
        bufp->chgBit(oldp+736,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T1_3));
        bufp->chgBit(oldp+737,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T2_4));
        bufp->chgBit(oldp+738,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T3_4));
        bufp->chgBit(oldp+739,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M3T4_4));
        bufp->chgBit(oldp+740,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M3T4_5));
        bufp->chgBit(oldp+741,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M4T1_6));
        bufp->chgBit(oldp+742,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T2_3));
        bufp->chgBit(oldp+743,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T2_4));
        bufp->chgBit(oldp+744,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T3_5));
        bufp->chgBit(oldp+745,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T3_6));
        bufp->chgBit(oldp+746,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T1_6));
        bufp->chgBit(oldp+747,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M5T2_3));
        bufp->chgBit(oldp+748,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M5T2_4));
        bufp->chgBit(oldp+749,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T3_4));
        bufp->chgBit(oldp+750,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M1T3_1));
        bufp->chgBit(oldp+751,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M1T3_2));
        bufp->chgBit(oldp+752,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T1_3));
        bufp->chgBit(oldp+753,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T2_4));
        bufp->chgBit(oldp+754,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T3_6));
        bufp->chgBit(oldp+755,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T1_3));
        bufp->chgBit(oldp+756,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T2_4));
        bufp->chgBit(oldp+757,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T3_6));
        bufp->chgBit(oldp+758,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M3T4_4));
        bufp->chgBit(oldp+759,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M3T4_5));
        bufp->chgBit(oldp+760,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M4T1_6));
        bufp->chgBit(oldp+761,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T2_3));
        bufp->chgBit(oldp+762,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T2_4));
        bufp->chgBit(oldp+763,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T3_5));
        bufp->chgBit(oldp+764,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T3_6));
        bufp->chgBit(oldp+765,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T1_6));
        bufp->chgBit(oldp+766,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M5T2_3));
        bufp->chgBit(oldp+767,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M5T2_4));
        bufp->chgBit(oldp+768,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T3_4));
        bufp->chgBit(oldp+769,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T1_3));
        bufp->chgBit(oldp+770,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T1_4));
        bufp->chgBit(oldp+771,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T2_3));
        bufp->chgBit(oldp+772,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T2_4));
        bufp->chgBit(oldp+773,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M2T3_6));
        bufp->chgBit(oldp+774,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T1_3));
        bufp->chgBit(oldp+775,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T1_4));
        bufp->chgBit(oldp+776,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T2_3));
        bufp->chgBit(oldp+777,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T2_4));
        bufp->chgBit(oldp+778,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_4));
        bufp->chgBit(oldp+779,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_9));
        bufp->chgBit(oldp+780,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M1T3_1));
        bufp->chgBit(oldp+781,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M1T3_2));
        bufp->chgBit(oldp+782,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T1_3));
        bufp->chgBit(oldp+783,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T1_4));
        bufp->chgBit(oldp+784,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T2_3));
        bufp->chgBit(oldp+785,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T2_4));
        bufp->chgBit(oldp+786,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M2T3_6));
        bufp->chgBit(oldp+787,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T1_3));
        bufp->chgBit(oldp+788,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T1_4));
        bufp->chgBit(oldp+789,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T2_3));
        bufp->chgBit(oldp+790,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T2_4));
        bufp->chgBit(oldp+791,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_4));
        bufp->chgBit(oldp+792,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_9));
        bufp->chgBit(oldp+793,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T1_3));
        bufp->chgBit(oldp+794,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T1_4));
        bufp->chgBit(oldp+795,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T2_3));
        bufp->chgBit(oldp+796,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T2_4));
        bufp->chgBit(oldp+797,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M2T3_6));
        bufp->chgBit(oldp+798,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T1_3));
        bufp->chgBit(oldp+799,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T1_4));
        bufp->chgBit(oldp+800,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T2_3));
        bufp->chgBit(oldp+801,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T2_4));
        bufp->chgBit(oldp+802,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_4));
        bufp->chgBit(oldp+803,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_9));
        bufp->chgBit(oldp+804,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M1T3_3));
        bufp->chgBit(oldp+805,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M1T5_4));
        bufp->chgBit(oldp+806,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M1T5_5));
        bufp->chgBit(oldp+807,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M2T1_6));
        bufp->chgBit(oldp+808,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T2_3));
        bufp->chgBit(oldp+809,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T2_4));
        bufp->chgBit(oldp+810,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T3_5));
        bufp->chgBit(oldp+811,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T3_6));
        bufp->chgBit(oldp+812,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T1_6));
        bufp->chgBit(oldp+813,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M3T2_3));
        bufp->chgBit(oldp+814,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M3T2_4));
        bufp->chgBit(oldp+815,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T3_6));
        bufp->chgBit(oldp+816,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T1_3));
        bufp->chgBit(oldp+817,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T3_6));
        bufp->chgBit(oldp+818,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T1_3));
        bufp->chgBit(oldp+819,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_4));
        bufp->chgBit(oldp+820,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_9));
        bufp->chgBit(oldp+821,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla49M1T3_1));
        bufp->chgBit(oldp+822,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla49M1T3_2));
        bufp->chgBit(oldp+823,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T1_3));
        bufp->chgBit(oldp+824,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T2_4));
        bufp->chgBit(oldp+825,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T1_3));
        bufp->chgBit(oldp+826,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T2_4));
        bufp->chgBit(oldp+827,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla78M1T1_2));
        bufp->chgBit(oldp+828,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla78M1T1_3));
        bufp->chgBit(oldp+829,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla79M1T1_2));
        bufp->chgBit(oldp+830,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla79M1T1_3));
        bufp->chgBit(oldp+831,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla80M1T1_2));
        bufp->chgBit(oldp+832,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla80M1T1_3));
        bufp->chgBit(oldp+833,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla84M1T1_2));
        bufp->chgBit(oldp+834,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla84M1T1_3));
        bufp->chgBit(oldp+835,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla85M1T1_2));
        bufp->chgBit(oldp+836,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla85M1T1_3));
        bufp->chgBit(oldp+837,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla86M1T1_2));
        bufp->chgBit(oldp+838,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla86M1T1_3));
        bufp->chgBit(oldp+839,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla88M1T1_2));
        bufp->chgBit(oldp+840,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla88M1T1_3));
        bufp->chgBit(oldp+841,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT2_1));
        bufp->chgBit(oldp+842,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT2_2));
        bufp->chgBit(oldp+843,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT3_3));
        bufp->chgBit(oldp+844,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT4_1));
        bufp->chgBit(oldp+845,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT4_2));
        bufp->chgBit(oldp+846,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_2));
        bufp->chgBit(oldp+847,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_7));
        bufp->chgBit(oldp+848,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T1_3));
        bufp->chgBit(oldp+849,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T2_2));
        bufp->chgBit(oldp+850,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T3_3));
        bufp->chgBit(oldp+851,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_setM1_2));
        bufp->chgBit(oldp+852,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52));
        bufp->chgBit(oldp+853,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55));
        bufp->chgBit(oldp+854,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56));
        bufp->chgBit(oldp+855,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58));
        bufp->chgBit(oldp+856,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59));
        bufp->chgBit(oldp+857,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel)))));
        bufp->chgBit(oldp+858,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
                                         >> 1U)))));
        bufp->chgBit(oldp+859,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc)))));
        bufp->chgBit(oldp+860,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61));
        bufp->chgBit(oldp+861,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M));
        bufp->chgBit(oldp+862,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1)))));
        bufp->chgBit(oldp+863,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xcU]) 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgBit(oldp+864,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
        bufp->chgBit(oldp+865,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2))));
        bufp->chgBit(oldp+866,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
        bufp->chgBit(oldp+867,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc))));
        bufp->chgBit(oldp+868,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
        bufp->chgBit(oldp+869,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2))));
        bufp->chgBit(oldp+870,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
        bufp->chgBit(oldp+871,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de))));
        bufp->chgBit(oldp+872,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
        bufp->chgBit(oldp+873,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2))));
        bufp->chgBit(oldp+874,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
        bufp->chgBit(oldp+875,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl))));
        bufp->chgBit(oldp+876,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
        bufp->chgBit(oldp+877,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix))));
        bufp->chgBit(oldp+878,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
        bufp->chgBit(oldp+879,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy))));
        bufp->chgBit(oldp+880,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0))));
        bufp->chgBit(oldp+881,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc))));
        bufp->chgBit(oldp+882,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0))));
        bufp->chgBit(oldp+883,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+884,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu));
        bufp->chgBit(oldp+885,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set));
        bufp->chgBit(oldp+886,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set));
        bufp->chgBit(oldp+887,(vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we));
        bufp->chgBit(oldp+888,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we));
        bufp->chgBit(oldp+889,(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2));
        bufp->chgBit(oldp+890,(vlSelf->tb_z80__DOT__dut__DOT__ctl_im_we));
        bufp->chgBit(oldp+891,(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints));
        bufp->chgBit(oldp+892,(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we));
        bufp->chgBit(oldp+893,(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead));
        bufp->chgBit(oldp+894,(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite));
        bufp->chgBit(oldp+895,(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw));
        bufp->chgBit(oldp+896,(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en));
        bufp->chgBit(oldp+897,(vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe));
        bufp->chgCData(oldp+898,(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel),2);
        bufp->chgBit(oldp+899,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe));
        bufp->chgBit(oldp+900,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe));
        bufp->chgBit(oldp+901,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low));
        bufp->chgBit(oldp+902,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero));
        bufp->chgBit(oldp+903,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq));
        bufp->chgBit(oldp+904,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R));
        bufp->chgBit(oldp+905,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V));
        bufp->chgBit(oldp+906,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S));
        bufp->chgBit(oldp+907,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe));
        bufp->chgBit(oldp+908,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus));
        bufp->chgBit(oldp+909,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set));
        bufp->chgBit(oldp+910,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we));
        bufp->chgBit(oldp+911,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we));
        bufp->chgBit(oldp+912,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we));
        bufp->chgBit(oldp+913,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr));
        bufp->chgBit(oldp+914,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit));
        bufp->chgBit(oldp+915,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift));
        bufp->chgBit(oldp+916,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa));
        bufp->chgBit(oldp+917,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u));
        bufp->chgBit(oldp+918,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl));
        bufp->chgBit(oldp+919,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp));
        bufp->chgBit(oldp+920,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir));
        bufp->chgBit(oldp+921,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we));
        bufp->chgBit(oldp+922,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we));
        bufp->chgBit(oldp+923,(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy));
        bufp->chgBit(oldp+924,(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec));
        bufp->chgBit(oldp+925,(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe));
        bufp->chgBit(oldp+926,(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux));
        bufp->chgBit(oldp+927,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u));
        bufp->chgBit(oldp+928,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en));
        bufp->chgBit(oldp+929,(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we));
        bufp->chgBit(oldp+930,(vlSelf->tb_z80__DOT__dut__DOT__fMRead));
        bufp->chgBit(oldp+931,(vlSelf->tb_z80__DOT__dut__DOT__fMWrite));
        bufp->chgBit(oldp+932,(vlSelf->tb_z80__DOT__dut__DOT__fIORead));
        bufp->chgBit(oldp+933,(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite));
        bufp->chgBit(oldp+934,(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe));
        bufp->chgBit(oldp+935,(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re));
        bufp->chgBit(oldp+936,(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right));
        bufp->chgBit(oldp+937,(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left));
        bufp->chgSData(oldp+938,((((IData)(vlSelf->__VdfgTmp_h0f67300a__0) 
                                   << 0xfU) | (((IData)(vlSelf->__VdfgTmp_h401674e0__0) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->__VdfgTmp_hc8dbd629__0) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->__VdfgTmp_ha432ba06__0) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out))))))))))))))))),16);
        bufp->chgBit(oldp+939,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40));
        bufp->chgBit(oldp+940,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41));
        bufp->chgBit(oldp+941,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42));
        bufp->chgBit(oldp+942,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43));
        bufp->chgBit(oldp+943,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44));
        bufp->chgBit(oldp+944,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45));
        bufp->chgBit(oldp+945,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_46));
        bufp->chgBit(oldp+946,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47));
        bufp->chgBit(oldp+947,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48));
        bufp->chgBit(oldp+948,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49));
        bufp->chgBit(oldp+949,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50));
        bufp->chgBit(oldp+950,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51));
        bufp->chgBit(oldp+951,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52));
        bufp->chgBit(oldp+952,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53));
        bufp->chgBit(oldp+953,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22));
        bufp->chgBit(oldp+954,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25));
        bufp->chgBit(oldp+955,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31));
        bufp->chgBit(oldp+956,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31) 
                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50)))));
        bufp->chgBit(oldp+957,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53)))));
        bufp->chgBit(oldp+958,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25) 
                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43)))));
        bufp->chgBit(oldp+959,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out));
        bufp->chgBit(oldp+960,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out));
        bufp->chgBit(oldp+961,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41))));
        bufp->chgBit(oldp+962,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out));
        bufp->chgBit(oldp+963,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out));
        bufp->chgBit(oldp+964,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52))));
        bufp->chgBit(oldp+965,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out));
        bufp->chgBit(oldp+966,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out));
        bufp->chgBit(oldp+967,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42))));
        bufp->chgBit(oldp+968,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out));
        bufp->chgBit(oldp+969,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out));
        bufp->chgBit(oldp+970,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44))));
        bufp->chgBit(oldp+971,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out));
        bufp->chgBit(oldp+972,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out));
        bufp->chgBit(oldp+973,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48))));
        bufp->chgBit(oldp+974,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out));
        bufp->chgBit(oldp+975,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out));
        bufp->chgBit(oldp+976,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49))));
        bufp->chgBit(oldp+977,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux)))));
        bufp->chgSData(oldp+978,(((((IData)(vlSelf->__VdfgTmp_h0f67300a__0) 
                                    << 0xfU) | (((IData)(vlSelf->__VdfgTmp_h401674e0__0) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->__VdfgTmp_hc8dbd629__0) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->__VdfgTmp_ha432ba06__0) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out)))))))))))))))) 
                                  & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux))))),16);
        bufp->chgBit(oldp+979,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32));
        bufp->chgBit(oldp+980,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero)))));
        bufp->chgBit(oldp+981,(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2));
        bufp->chgBit(oldp+982,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)))));
        bufp->chgBit(oldp+983,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)))));
        bufp->chgBit(oldp+984,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                         >> 1U)))));
        bufp->chgCData(oldp+985,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa) 
                                   << 1U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift))),2);
        bufp->chgBit(oldp+986,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr)))));
        bufp->chgBit(oldp+987,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit)))));
        bufp->chgBit(oldp+988,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift)))));
        bufp->chgBit(oldp+989,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)))));
        bufp->chgBit(oldp+990,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re) 
                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we))));
        bufp->chgBit(oldp+991,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold));
        bufp->chgBit(oldp+992,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla83M1T1_19));
        bufp->chgBit(oldp+993,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla12M1T1_12));
        bufp->chgBit(oldp+994,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla11M1T1_11));
        bufp->chgBit(oldp+995,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla66npla53M1T1_15));
        bufp->chgBit(oldp+996,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M2T4_14));
        bufp->chgBit(oldp+997,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M4T4_14));
        bufp->chgBit(oldp+998,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_op3pla68M3T1_18));
        bufp->chgBit(oldp+999,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nop3pla68M3T1_20));
        bufp->chgBit(oldp+1000,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla82M1T1_16));
        bufp->chgBit(oldp+1001,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla76M1T1_2));
        bufp->chgBit(oldp+1002,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla78M1T1_8));
        bufp->chgBit(oldp+1003,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla79M1T1_8));
        bufp->chgBit(oldp+1004,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla80M1T1_8));
        bufp->chgBit(oldp+1005,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla84M1T1_8));
        bufp->chgBit(oldp+1006,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2)))));
        bufp->chgBit(oldp+1007,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints)))));
        bufp->chgBit(oldp+1008,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp)))));
        bufp->chgBit(oldp+1009,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we)))));
        bufp->chgBit(oldp+1010,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en)))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[0xdU]) 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+1011,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))));
        bufp->chgBit(oldp+1012,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))));
        bufp->chgBit(oldp+1013,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                   >> 1U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                                >> 1U))) 
                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10) 
                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V)))));
        bufp->chgBit(oldp+1014,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))));
        bufp->chgBit(oldp+1015,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                   >> 2U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                                >> 2U))) 
                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10) 
                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V)))));
        bufp->chgBit(oldp+1016,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))));
        bufp->chgBit(oldp+1017,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                   >> 3U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
                                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                                >> 3U))) 
                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10) 
                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V)))));
        bufp->chgCData(oldp+1018,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq))))),4);
        bufp->chgBit(oldp+1019,((IData)(((0U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out)))));
        bufp->chgBit(oldp+1020,((IData)(((1U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
                                            ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5))))));
        bufp->chgBit(oldp+1021,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift)) 
                                 & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out)))));
        bufp->chgBit(oldp+1022,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift)) 
                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgBit(oldp+1023,(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out));
        bufp->chgBit(oldp+1024,(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out));
        bufp->chgBit(oldp+1025,(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out));
        bufp->chgBit(oldp+1026,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
                                 ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5))));
        bufp->chgCData(oldp+1027,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1),4);
        bufp->chgCData(oldp+1028,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2),4);
        bufp->chgCData(oldp+1029,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0) 
                                    << 3U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0) 
                                               << 2U) 
                                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0))))),4);
        bufp->chgBit(oldp+1030,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0));
        bufp->chgBit(oldp+1031,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1));
        bufp->chgBit(oldp+1032,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5));
        bufp->chgBit(oldp+1033,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2))));
        bufp->chgBit(oldp+1034,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1))));
        bufp->chgBit(oldp+1035,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0));
        bufp->chgBit(oldp+1036,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0)))));
        bufp->chgBit(oldp+1037,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)))));
        bufp->chgBit(oldp+1038,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10));
        bufp->chgBit(oldp+1039,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_8));
        bufp->chgBit(oldp+1040,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1041,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                       >> 1U))));
        bufp->chgBit(oldp+1042,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0));
        bufp->chgBit(oldp+1043,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                        >> 1U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                                                  | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                                     >> 1U))))));
        bufp->chgBit(oldp+1044,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0)))));
        bufp->chgBit(oldp+1045,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_8))));
        bufp->chgBit(oldp+1046,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                        | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                       >> 1U))));
        bufp->chgBit(oldp+1047,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10));
        bufp->chgBit(oldp+1048,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                                 & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                     | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                    >> 1U))));
        bufp->chgBit(oldp+1049,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_8));
        bufp->chgBit(oldp+1050,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                       >> 2U))));
        bufp->chgBit(oldp+1051,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                       >> 2U))));
        bufp->chgBit(oldp+1052,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0));
        bufp->chgBit(oldp+1053,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                        >> 2U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                                                  | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1054,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0)))));
        bufp->chgBit(oldp+1055,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_8))));
        bufp->chgBit(oldp+1056,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                        | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                       >> 2U))));
        bufp->chgBit(oldp+1057,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10));
        bufp->chgBit(oldp+1058,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                                 & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                     | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                    >> 2U))));
        bufp->chgBit(oldp+1059,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_8));
        bufp->chgBit(oldp+1060,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                       >> 3U))));
        bufp->chgBit(oldp+1061,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                       >> 3U))));
        bufp->chgBit(oldp+1062,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0));
        bufp->chgBit(oldp+1063,((IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                           >> 3U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5)) 
                                         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                            >> 3U)))));
        bufp->chgBit(oldp+1064,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0)))));
        bufp->chgBit(oldp+1065,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_8))));
        bufp->chgBit(oldp+1066,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                        | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                       >> 3U))));
        bufp->chgBit(oldp+1067,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10));
        bufp->chgBit(oldp+1068,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
                                 & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                     | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                    >> 3U))));
        bufp->chgBit(oldp+1069,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_8));
        bufp->chgCData(oldp+1070,(((0x60U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out))) 
                                             << 5U)) 
                                   | (6U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_20))) 
                                            << 1U)))),8);
        bufp->chgBit(oldp+1071,(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_20));
        bufp->chgBit(oldp+1072,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_15));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgBit(oldp+1073,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af));
        bufp->chgBit(oldp+1074,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2));
        bufp->chgBit(oldp+1075,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp));
        bufp->chgBit(oldp+1076,(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo));
        bufp->chgBit(oldp+1077,(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi));
        bufp->chgBit(oldp+1078,(vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_hi));
        bufp->chgBit(oldp+1079,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_26));
        bufp->chgBit(oldp+1080,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__test1));
        bufp->chgBit(oldp+1081,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54));
        bufp->chgBit(oldp+1082,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo)))));
        bufp->chgBit(oldp+1083,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi)))));
        bufp->chgBit(oldp+1084,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28));
        bufp->chgBit(oldp+1085,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
        bufp->chgBit(oldp+1086,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30));
        bufp->chgBit(oldp+1087,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2))));
        bufp->chgBit(oldp+1088,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32));
        bufp->chgBit(oldp+1089,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
        bufp->chgBit(oldp+1090,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34));
        bufp->chgBit(oldp+1091,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af))));
        bufp->chgBit(oldp+1092,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36));
        bufp->chgBit(oldp+1093,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38));
        bufp->chgBit(oldp+1094,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40));
        bufp->chgBit(oldp+1095,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42));
        bufp->chgBit(oldp+1096,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44));
        bufp->chgBit(oldp+1097,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46));
        bufp->chgBit(oldp+1098,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48));
        bufp->chgBit(oldp+1099,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50));
        bufp->chgBit(oldp+1100,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52));
        bufp->chgBit(oldp+1101,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54));
        bufp->chgBit(oldp+1102,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56));
        bufp->chgBit(oldp+1103,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58));
        bufp->chgBit(oldp+1104,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60));
        bufp->chgBit(oldp+1105,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62));
        bufp->chgBit(oldp+1106,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64));
        bufp->chgBit(oldp+1107,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66));
        bufp->chgBit(oldp+1108,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68));
        bufp->chgBit(oldp+1109,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70));
        bufp->chgBit(oldp+1110,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72));
        bufp->chgBit(oldp+1111,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74));
        bufp->chgBit(oldp+1112,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76));
        bufp->chgBit(oldp+1113,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
        bufp->chgBit(oldp+1114,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78));
        bufp->chgBit(oldp+1115,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp))));
        bufp->chgBit(oldp+1116,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80));
        bufp->chgBit(oldp+1117,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgBit(oldp+1118,((1U & (~ (IData)(((0U 
                                                   != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low)) 
                                                  | (0U 
                                                     != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high))))))));
        bufp->chgBit(oldp+1119,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                       >> 3U))));
        bufp->chgBit(oldp+1120,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                       >> 1U))));
        bufp->chgBit(oldp+1121,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                       >> 3U))));
        bufp->chgCData(oldp+1122,(vlSelf->tb_z80__DOT__dut__DOT__test_db_high),4);
        bufp->chgCData(oldp+1123,(vlSelf->tb_z80__DOT__dut__DOT__test_db_low),4);
        bufp->chgBit(oldp+1124,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_1));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgCData(oldp+1125,(vlSelf->tb_z80__DOT__dut__DOT__db0),8);
        bufp->chgCData(oldp+1126,(vlSelf->tb_z80__DOT__dut__DOT__db1),8);
        bufp->chgCData(oldp+1127,((7U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                         >> 3U))),3);
        bufp->chgBit(oldp+1128,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                          >> 3U)))));
        bufp->chgBit(oldp+1129,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                          >> 4U)))));
        bufp->chgBit(oldp+1130,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                          >> 5U)))));
        bufp->chgBit(oldp+1131,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_40));
        bufp->chgCData(oldp+1132,((3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                         >> 3U))),2);
        bufp->chgBit(oldp+1133,((IData)((0x10U == (0x18U 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))))));
        bufp->chgBit(oldp+1134,((IData)((0x18U == (0x18U 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))))));
        bufp->chgCData(oldp+1135,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+1136,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mrd_ff3) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd))));
        bufp->chgBit(oldp+1137,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr))));
        bufp->chgBit(oldp+1138,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr));
        bufp->chgBit(oldp+1139,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq));
        bufp->chgBit(oldp+1140,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd));
        bufp->chgBit(oldp+1141,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr));
        bufp->chgBit(oldp+1142,((1U & (~ ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mreq_ff2)) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17))))));
        bufp->chgBit(oldp+1143,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_iorq_ff4));
        bufp->chgBit(oldp+1144,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mrd_ff3));
        bufp->chgBit(oldp+1145,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mreq_ff2)))));
        bufp->chgBit(oldp+1146,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17));
        bufp->chgBit(oldp+1147,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mreq_ff2));
        bufp->chgBit(oldp+1148,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc_int));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+1149,(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED));
        bufp->chgBit(oldp+1150,(vlSelf->tb_z80__DOT__dut__DOT__in_halt));
        bufp->chgBit(oldp+1151,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB));
        bufp->chgBit(oldp+1152,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED));
        bufp->chgBit(oldp+1153,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB) 
                                          | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED))))));
        bufp->chgBit(oldp+1154,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_inst4));
        bufp->chgBit(oldp+1155,(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy));
        bufp->chgBit(oldp+1156,(vlSelf->tb_z80__DOT__dut__DOT__im1));
        bufp->chgBit(oldp+1157,(vlSelf->tb_z80__DOT__dut__DOT__im2));
        bufp->chgBit(oldp+1158,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED));
        bufp->chgCData(oldp+1159,(vlSelf->tb_z80__DOT__dut__DOT__opcode),8);
        bufp->chgBit(oldp+1160,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff));
        bufp->chgBit(oldp+1161,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff));
        bufp->chgBit(oldp+1162,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff));
        bufp->chgBit(oldp+1163,(vlSelf->tb_z80__DOT__dut__DOT__M5));
        bufp->chgBit(oldp+1164,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff));
        bufp->chgBit(oldp+1165,(vlSelf->tb_z80__DOT__dut__DOT__T6));
        bufp->chgBit(oldp+1166,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED)))));
        bufp->chgBit(oldp+1167,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instIY1));
        bufp->chgBit(oldp+1168,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED)))));
        bufp->chgBit(oldp+1169,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_inst44));
        bufp->chgBit(oldp+1170,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__q2)))));
        bufp->chgBit(oldp+1171,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__q1));
        bufp->chgBit(oldp+1172,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__q2));
        bufp->chgBit(oldp+1173,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff3));
        bufp->chgBit(oldp+1174,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_15));
        bufp->chgBit(oldp+1175,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_intr_ff3));
        bufp->chgBit(oldp+1176,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16));
        bufp->chgBit(oldp+1177,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_iorq_ff1));
        bufp->chgBit(oldp+1178,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mrd_ff1));
        bufp->chgBit(oldp+1179,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mwr_ff1));
        bufp->chgBit(oldp+1180,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_af));
        bufp->chgBit(oldp+1181,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx));
        bufp->chgBit(oldp+1182,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1));
        bufp->chgBit(oldp+1183,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2));
        bufp->chgBit(oldp+1184,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx)))));
        bufp->chgBit(oldp+1185,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_af)))));
        bufp->chgBit(oldp+1186,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_inst4)))));
        bufp->chgBit(oldp+1187,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)))));
        bufp->chgBit(oldp+1188,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)))));
        bufp->chgBit(oldp+1189,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+1190,(vlSelf->tb_z80__DOT__dut__DOT__fpga_reset));
        bufp->chgBit(oldp+1191,(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true));
        bufp->chgBit(oldp+1192,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf));
        bufp->chgBit(oldp+1193,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39));
        bufp->chgBit(oldp+1194,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf));
        bufp->chgBit(oldp+1195,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf));
        bufp->chgBit(oldp+1196,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf));
        bufp->chgBit(oldp+1197,(vlSelf->tb_z80__DOT__dut__DOT__flags_hf2));
        bufp->chgCData(oldp+1198,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__result_lo),4);
        bufp->chgBit(oldp+1199,(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp));
        bufp->chgBit(oldp+1200,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_xf));
        bufp->chgBit(oldp+1201,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_yf));
        bufp->chgBit(oldp+1202,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_hf));
        bufp->chgBit(oldp+1203,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2));
        bufp->chgCData(oldp+1204,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch),8);
        bufp->chgCData(oldp+1205,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch),8);
        bufp->chgCData(oldp+1206,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch),8);
        bufp->chgCData(oldp+1207,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch),8);
        bufp->chgCData(oldp+1208,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch),8);
        bufp->chgCData(oldp+1209,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch),8);
        bufp->chgCData(oldp+1210,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch),8);
        bufp->chgCData(oldp+1211,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch),8);
        bufp->chgCData(oldp+1212,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch),8);
        bufp->chgCData(oldp+1213,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch),8);
        bufp->chgCData(oldp+1214,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch),8);
        bufp->chgCData(oldp+1215,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch),8);
        bufp->chgCData(oldp+1216,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch),8);
        bufp->chgCData(oldp+1217,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch),8);
        bufp->chgCData(oldp+1218,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch),8);
        bufp->chgCData(oldp+1219,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch),8);
        bufp->chgCData(oldp+1220,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch),8);
        bufp->chgCData(oldp+1221,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch),8);
        bufp->chgCData(oldp+1222,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch),8);
        bufp->chgCData(oldp+1223,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch),8);
        bufp->chgCData(oldp+1224,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch),8);
        bufp->chgCData(oldp+1225,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch),8);
        bufp->chgCData(oldp+1226,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch),8);
        bufp->chgCData(oldp+1227,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch),8);
        bufp->chgCData(oldp+1228,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch),8);
        bufp->chgCData(oldp+1229,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch),8);
        bufp->chgCData(oldp+1230,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch),8);
        bufp->chgCData(oldp+1231,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+1232,((IData)((9U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high)))));
        bufp->chgBit(oldp+1233,((1U & ((IData)((0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high)))) 
                                       | (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))))))));
        bufp->chgBit(oldp+1234,(vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9));
        bufp->chgSData(oldp+1235,(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__DFFE_apin_latch),16);
        bufp->chgCData(oldp+1236,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high),4);
        bufp->chgCData(oldp+1237,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low),4);
        bufp->chgCData(oldp+1238,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high),4);
        bufp->chgCData(oldp+1239,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low),4);
        bufp->chgCData(oldp+1240,((0xfU & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low)))),4);
        bufp->chgCData(oldp+1241,((0xfU & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high)))),4);
        bufp->chgBit(oldp+1242,((IData)((0xaU == (0xaU 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low))))));
        bufp->chgBit(oldp+1243,((IData)((0xcU == (0xcU 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low))))));
        bufp->chgBit(oldp+1244,((IData)((0xaU == (0xaU 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))))));
        bufp->chgBit(oldp+1245,((IData)((0xcU == (0xcU 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))))));
        bufp->chgBit(oldp+1246,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1247,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1248,(((IData)((9U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9))));
        bufp->chgCData(oldp+1249,(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__dout),8);
        bufp->chgBit(oldp+1250,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_9));
        bufp->chgBit(oldp+1251,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__DFFE_intr_ff3));
        bufp->chgBit(oldp+1252,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_10));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+1253,(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9));
        bufp->chgBit(oldp+1254,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)))));
        bufp->chgBit(oldp+1255,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1));
        bufp->chgBit(oldp+1256,(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8));
        bufp->chgBit(oldp+1257,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta));
        bufp->chgBit(oldp+1258,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff1));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+1259,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__DFF_inst5) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7))));
        bufp->chgBit(oldp+1260,(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__DFF_inst5));
        bufp->chgBit(oldp+1261,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)))));
        bufp->chgBit(oldp+1262,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
        bufp->chgBit(oldp+1263,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
        bufp->chgBit(oldp+1264,(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2));
        bufp->chgBit(oldp+1265,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff));
        bufp->chgBit(oldp+1266,(vlSelf->tb_z80__DOT__dut__DOT__in_intr));
        bufp->chgBit(oldp+1267,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff));
        bufp->chgBit(oldp+1268,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
        bufp->chgBit(oldp+1269,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff));
        bufp->chgBit(oldp+1270,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff));
        bufp->chgBit(oldp+1271,((1U & (~ (IData)((1U 
                                                  != (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q)))))));
        bufp->chgSData(oldp+1272,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q),16);
        bufp->chgBit(oldp+1273,((IData)((1U != (0xffU 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q))))));
        bufp->chgBit(oldp+1274,((IData)((0U != (0xff00U 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q))))));
        bufp->chgBit(oldp+1275,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q)))));
        bufp->chgBit(oldp+1276,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2)))));
        bufp->chgSData(oldp+1277,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2))))),16);
        bufp->chgBit(oldp+1278,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))))));
        bufp->chgBit(oldp+1279,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1280,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q))));
        bufp->chgBit(oldp+1281,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1282,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1283,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1284,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 2U))));
        bufp->chgBit(oldp+1285,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 5U))));
        bufp->chgBit(oldp+1286,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 4U))));
        bufp->chgBit(oldp+1287,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 8U))));
        bufp->chgBit(oldp+1288,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 7U))));
        bufp->chgBit(oldp+1289,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1290,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 9U))));
        bufp->chgBit(oldp+1291,(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7));
        bufp->chgBit(oldp+1292,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
        bufp->chgBit(oldp+1293,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep));
        bufp->chgBit(oldp+1294,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)))));
        bufp->chgBit(oldp+1295,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
        bufp->chgBit(oldp+1296,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
        bufp->chgBit(oldp+1297,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff) 
                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
    }
    bufp->chgBit(oldp+1298,(vlSelf->CLK));
    bufp->chgBit(oldp+1299,(vlSelf->nRESET));
    bufp->chgSData(oldp+1300,(vlSelf->A),16);
    bufp->chgCData(oldp+1301,(vlSelf->D),8);
    bufp->chgBit(oldp+1302,(vlSelf->nM1));
    bufp->chgBit(oldp+1303,(vlSelf->nMREQ));
    bufp->chgBit(oldp+1304,(vlSelf->nIORQ));
    bufp->chgBit(oldp+1305,(vlSelf->nRD));
    bufp->chgBit(oldp+1306,(vlSelf->nWR));
    bufp->chgBit(oldp+1307,(vlSelf->nRFSH));
    bufp->chgBit(oldp+1308,(vlSelf->nHALT));
    bufp->chgBit(oldp+1309,(vlSelf->nBUSACK));
    bufp->chgBit(oldp+1310,(vlSelf->nWAIT));
    bufp->chgBit(oldp+1311,(vlSelf->nINT));
    bufp->chgBit(oldp+1312,(vlSelf->nNMI));
    bufp->chgBit(oldp+1313,(vlSelf->nBUSRQ));
    bufp->chgCData(oldp+1314,(vlSelf->tb_z80__DOT__dut__DOT__db2),8);
    bufp->chgCData(oldp+1315,(vlSelf->tb_z80__DOT__dut__DOT__db_hi_as),8);
    bufp->chgCData(oldp+1316,(vlSelf->tb_z80__DOT__dut__DOT__db_lo_as),8);
    bufp->chgCData(oldp+1317,(((0x40U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                         << 6U)) | 
                               (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                 << 5U) | (((IData)(vlSelf->nHALT) 
                                            << 4U) 
                                           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB) 
                                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED))) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED)))))))),7);
    bufp->chgBit(oldp+1318,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                      | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))))));
    bufp->chgBit(oldp+1319,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED))));
    bufp->chgBit(oldp+1320,(vlSelf->nMREQ__en2));
    bufp->chgBit(oldp+1321,(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we));
    bufp->chgBit(oldp+1322,(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit));
    bufp->chgBit(oldp+1323,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2));
    bufp->chgBit(oldp+1324,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc_int) 
                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_9) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__DFFE_intr_ff3) 
                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_10))))));
    bufp->chgBit(oldp+1325,(vlSelf->tb_z80__DOT__dut__DOT__nreset));
    bufp->chgBit(oldp+1326,((1U & ((~ ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mreq_ff2)) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17))) 
                                   & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0) 
                                         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr) 
                                            | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr))))))));
    bufp->chgBit(oldp+1327,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0) 
                                      | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead)))))));
    bufp->chgBit(oldp+1328,((1U & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite)) 
                                      | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr))))));
    bufp->chgBit(oldp+1329,((1U & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_intr_ff3) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta)) 
                                      | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq))))));
    bufp->chgBit(oldp+1330,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd) 
                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta)) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1) 
                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr))))));
    bufp->chgBit(oldp+1331,(vlSelf->tb_z80__DOT__dut__DOT__timings_en));
    bufp->chgBit(oldp+1332,(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_in));
    bufp->chgBit(oldp+1333,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                              & (8U == (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                             | ((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                   >> 7U)))));
    bufp->chgBit(oldp+1334,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp) 
                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    bufp->chgBit(oldp+1335,((1U & ((IData)(((0U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out))) 
                                   | ((IData)(((2U 
                                                == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2))) 
                                      | ((IData)(((3U 
                                                   == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                  & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)))) 
                                         | (IData)(
                                                   ((1U 
                                                     == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
                                                       ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5))))))))));
    bufp->chgBit(oldp+1336,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db2))));
    bufp->chgBit(oldp+1337,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                   >> 7U))));
    bufp->chgSData(oldp+1338,((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz) 
                                  & (- (IData)((1U 
                                                & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux)))))) 
                                 | ((((IData)(vlSelf->__VdfgTmp_h0f67300a__0) 
                                      << 0xfU) | (((IData)(vlSelf->__VdfgTmp_h401674e0__0) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->__VdfgTmp_hc8dbd629__0) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->__VdfgTmp_ha432ba06__0) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out)))))))))))))))) 
                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux))))) 
                                & (- (IData)((1U & 
                                              (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2)))))) 
                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                  & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2)))))),16);
    bufp->chgBit(oldp+1339,(vlSelf->tb_z80__DOT__dut__DOT__nmi));
    bufp->chgBit(oldp+1340,((1U & (~ (IData)(vlSelf->nBUSRQ)))));
    bufp->chgBit(oldp+1341,((1U & (~ (IData)(vlSelf->nINT)))));
    bufp->chgBit(oldp+1342,((1U & (~ (IData)(vlSelf->nWAIT)))));
    bufp->chgBit(oldp+1343,((1U & (~ (IData)(vlSelf->nRESET)))));
    bufp->chgSData(oldp+1344,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db_hi_as) 
                                << 8U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__db_lo_as))),16);
    bufp->chgSData(oldp+1345,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz),16);
    bufp->chgBit(oldp+1346,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc_int) 
                                      | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_9) 
                                         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__DFFE_intr_ff3) 
                                            | (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_10))))))));
    bufp->chgSData(oldp+1347,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz) 
                                & (- (IData)((1U & 
                                              (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux)))))) 
                               | ((((IData)(vlSelf->__VdfgTmp_h0f67300a__0) 
                                    << 0xfU) | (((IData)(vlSelf->__VdfgTmp_h401674e0__0) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->__VdfgTmp_hc8dbd629__0) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->__VdfgTmp_ha432ba06__0) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out)))))))))))))))) 
                                  & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux)))))),16);
    bufp->chgSData(oldp+1348,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz) 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux)))))) 
                                | ((((IData)(vlSelf->__VdfgTmp_h0f67300a__0) 
                                     << 0xfU) | (((IData)(vlSelf->__VdfgTmp_h401674e0__0) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->__VdfgTmp_hc8dbd629__0) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->__VdfgTmp_ha432ba06__0) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out)))))))))))))))) 
                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux))))) 
                               & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2))))))),16);
    bufp->chgSData(oldp+1349,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz) 
                               & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux))))))),16);
    bufp->chgBit(oldp+1350,((1U & (~ (IData)(vlSelf->CLK)))));
    bufp->chgCData(oldp+1351,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_0),4);
    bufp->chgCData(oldp+1352,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_1),4);
    bufp->chgCData(oldp+1353,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus)))) 
                               & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero))))))),4);
    bufp->chgBit(oldp+1354,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero))));
    bufp->chgCData(oldp+1355,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low)))) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus))))) 
                               & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero))))))),4);
    bufp->chgBit(oldp+1356,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low) 
                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero)))));
    bufp->chgCData(oldp+1357,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq)))) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus))))) 
                               & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero))))))),4);
    bufp->chgCData(oldp+1358,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq)))) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus))))) 
                               & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero))))))),4);
    bufp->chgBit(oldp+1359,((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp) 
                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)) 
                               ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0)) 
                              ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0)) 
                             ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0))));
    bufp->chgBit(oldp+1360,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp) 
                               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)) 
                              ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0)) 
                             ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0))));
    bufp->chgBit(oldp+1361,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)) 
                             ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0))));
    bufp->chgCData(oldp+1362,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33),4);
    bufp->chgCData(oldp+1363,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34),4);
    bufp->chgBit(oldp+1364,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                   | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
                                      | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1))))));
    bufp->chgBit(oldp+1365,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1))) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10) 
                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V)))));
    bufp->chgBit(oldp+1366,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_8))));
    bufp->chgBit(oldp+1367,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)))));
    bufp->chgBit(oldp+1368,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_in) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
    bufp->chgBit(oldp+1369,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_in) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
    bufp->chgCData(oldp+1370,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                               & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus))))),4);
    bufp->chgCData(oldp+1371,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low)))) 
                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                  & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus)))))),4);
    bufp->chgCData(oldp+1372,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                               & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low))))),4);
    bufp->chgCData(oldp+1373,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                               & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus))))),4);
    bufp->chgCData(oldp+1374,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq)))) 
                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                  & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus)))))),4);
    bufp->chgCData(oldp+1375,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                               & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq))))),4);
    bufp->chgCData(oldp+1376,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                               & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus))))),4);
    bufp->chgCData(oldp+1377,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq)))) 
                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                  & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus)))))),4);
    bufp->chgCData(oldp+1378,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                               & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus))))),4);
    bufp->chgBit(oldp+1379,(((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                             ^ (((0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                 & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39))) 
                                | (((0x10U != (0x10U 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf))) 
                                   | ((IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                 >> 4U) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf))) 
                                      | (IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                   >> 4U) 
                                                  & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0))) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf)))))))));
    bufp->chgCData(oldp+1380,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0) 
                                << 1U) | (0x10U == 
                                          (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))),2);
    bufp->chgBit(oldp+1381,((((0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                              & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39))) 
                             | (((0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf))) 
                                | ((IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                              >> 4U) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf))) 
                                   | (IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                >> 4U) 
                                               & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0))) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf))))))));
    bufp->chgBit(oldp+1382,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9) 
                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_hf2))));
    bufp->chgBit(oldp+1383,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             & (8U == (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))));
    bufp->chgBit(oldp+1384,(((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                >> 7U))));
    bufp->chgBit(oldp+1385,(((0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                             & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39)))));
    bufp->chgBit(oldp+1386,(((0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf)))));
    bufp->chgBit(oldp+1387,((IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                       >> 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf)))));
    bufp->chgBit(oldp+1388,((IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                       >> 4U) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0))) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf)))));
    bufp->chgBit(oldp+1389,((IData)(((2U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2)))));
    bufp->chgBit(oldp+1390,((((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                              & (0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                             & ((0x20U != (0x20U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                   >> 7U)))));
    bufp->chgBit(oldp+1391,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3abf7a82__0) 
                             & (IData)(vlSelf->__VdfgTmp_h392e7459__0))));
    bufp->chgBit(oldp+1392,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h2f8da4f3__0) 
                             & ((0x20U != (0x20U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db2)))));
    bufp->chgBit(oldp+1393,(((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                             & (IData)(vlSelf->__VdfgTmp_h392e7459__0))));
    bufp->chgBit(oldp+1394,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h2f8da4f3__0) 
                             & (IData)((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                         >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                                   >> 7U))))));
    bufp->chgBit(oldp+1395,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                              | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf))) 
                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set))));
    bufp->chgBit(oldp+1396,((((~ (IData)(((0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low)) 
                                          | (0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high))))) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu)) 
                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                 >> 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->chgBit(oldp+1397,((1U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit)) 
                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39)))));
    bufp->chgBit(oldp+1398,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_1) 
                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                    >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))))));
    bufp->chgBit(oldp+1399,(((~ (IData)(((0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low)) 
                                         | (0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high))))) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu))));
    bufp->chgBit(oldp+1400,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                              >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu))));
    bufp->chgBit(oldp+1401,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                              >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu))));
    bufp->chgBit(oldp+1402,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
                             & ((IData)(((0U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out))) 
                                | ((IData)(((2U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2))) 
                                   | ((IData)(((3U 
                                                == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                               & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)))) 
                                      | (IData)(((1U 
                                                  == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
                                                    ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5))))))))));
    bufp->chgBit(oldp+1403,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                             | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf)))));
    bufp->chgBit(oldp+1404,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_15) 
                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->chgBit(oldp+1405,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
                             & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we)) 
                                & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9))))));
    bufp->chgBit(oldp+1406,((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift)) 
                              & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out))) 
                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift)) 
                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa) 
                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out))) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
                                   & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)) 
                                      & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                          & (8U == 
                                             (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                         | ((8U != 
                                             (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                               >> 7U)))))))));
    bufp->chgBit(oldp+1407,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we))));
    bufp->chgBit(oldp+1408,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr)) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_1) 
                                   | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                       >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))))));
    bufp->chgBit(oldp+1409,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
                              & ((IData)(((0U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out))) 
                                 | ((IData)(((2U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2))) 
                                    | ((IData)(((3U 
                                                 == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)))) 
                                       | (IData)(((1U 
                                                   == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
                                                     ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5)))))))) 
                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                 >> 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->chgBit(oldp+1410,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_1) 
                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                 >> 7U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->chgBit(oldp+1411,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                               >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu)) 
                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                 >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->chgBit(oldp+1412,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                               >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu)) 
                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                 >> 5U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->chgBit(oldp+1413,(((((~ (IData)(((0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low)) 
                                           | (0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high))))) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu)) 
                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                  >> 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))) 
                             & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit)) 
                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39)))));
    bufp->chgBit(oldp+1414,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2))));
    bufp->chgBit(oldp+1415,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf))));
    bufp->chgBit(oldp+1416,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
                             & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)) 
                                & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                    & (8U == (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                   | ((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                         >> 7U)))))));
    bufp->chgBit(oldp+1417,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9) 
                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd) 
                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq) 
                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta)) 
                                   | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1) 
                                      | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr)))))));
    bufp->chgCData(oldp+1418,((((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re))) 
                                & (IData)(vlSelf->D)) 
                               | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we))) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0)))),8);
    bufp->chgCData(oldp+1419,(((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re))) 
                               & (IData)(vlSelf->D))),8);
    bufp->chgBit(oldp+1420,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr) 
                                      | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set))))));
    bufp->chgBit(oldp+1421,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__SYNTHESIZED_WIRE_4));
    bufp->chgBit(oldp+1422,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    bufp->chgBit(oldp+1423,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__iff1));
    bufp->chgBit(oldp+1424,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__int_armed));
    bufp->chgBit(oldp+1425,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__nmi_armed));
    bufp->chgBit(oldp+1426,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2))));
    bufp->chgBit(oldp+1427,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit))));
    bufp->chgBit(oldp+1428,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21));
    bufp->chgBit(oldp+1429,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9));
    bufp->chgBit(oldp+1430,(((~ (IData)(vlSelf->nINT)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__iff1))));
    bufp->chgBit(oldp+1431,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15));
    bufp->chgBit(oldp+1432,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2)) 
                             | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2)) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit)))));
    bufp->chgBit(oldp+1433,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2) 
                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we))));
    bufp->chgBit(oldp+1434,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we))));
    bufp->chgBit(oldp+1435,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_intr_ff3) 
                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta))));
    bufp->chgBit(oldp+1436,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead))));
    bufp->chgBit(oldp+1437,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq));
    bufp->chgBit(oldp+1438,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite))));
    bufp->chgBit(oldp+1439,((1U & (~ ((~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff3) 
                                          | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1))) 
                                      | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr))))));
    bufp->chgBit(oldp+1440,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0) 
                                      | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr) 
                                         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr)))))));
    bufp->chgBit(oldp+1441,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq) 
                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta))));
    bufp->chgBit(oldp+1442,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff3) 
                                      | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1))))));
    bufp->chgBit(oldp+1443,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_12));
    bufp->chgBit(oldp+1444,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                              >> 1U) & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo)) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir)))));
    bufp->chgBit(oldp+1445,((1U & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                                       >> 1U) & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo)) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir)))))));
    bufp->chgBit(oldp+1446,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx))));
    bufp->chgBit(oldp+1447,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl))));
    bufp->chgCData(oldp+1448,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1),8);
    bufp->chgBit(oldp+1449,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0))));
    bufp->chgBit(oldp+1450,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir))));
    bufp->chgBit(oldp+1451,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1));
    bufp->chgBit(oldp+1452,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11))));
    bufp->chgBit(oldp+1453,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1))));
    bufp->chgBit(oldp+1454,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8));
    bufp->chgBit(oldp+1455,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11));
    bufp->chgBit(oldp+1456,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11)))));
    bufp->chgBit(oldp+1457,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff))));
    bufp->chgBit(oldp+1458,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    bufp->chgBit(oldp+1459,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    bufp->chgBit(oldp+1460,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    bufp->chgBit(oldp+1461,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    bufp->chgCData(oldp+1462,(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_2),3);
}

void Vtb_z80___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root__trace_cleanup\n"); );
    // Init
    Vtb_z80___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_z80___024root*>(voidSelf);
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
}
